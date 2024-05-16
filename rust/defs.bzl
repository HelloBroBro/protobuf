"""This file implements an experimental, do-not-use-kind of rust_proto_library.

Disclaimer: This project is experimental, under heavy development, and should not
be used yet."""

load("@rules_proto//proto:defs.bzl", "ProtoInfo", "proto_common")
load(
    "//rust:aspects.bzl",
    "RustProtoInfo",
    "proto_rust_toolchain_label",
    "rust_cc_proto_library_aspect",
    "rust_upb_proto_library_aspect",
)

visibility([
    "//experimental/...",
    "//src/google/protobuf/...",
    "//rust/...",
])

def rust_proto_library(name, deps, **args):
    """Declares all the boilerplate needed to use Rust protobufs conveniently.

    Hopefully no user will ever need to read this code.


    Args:
        name: name of the Rust protobuf target.
        deps: proto_library target for which to generate Rust gencode.
        **args: other args passed to the rust_<kernel>_proto_library targets.
    """
    if not name.endswith("_rust_proto"):
        fail(
            "{}: Name rust_proto_library target should end with `_rust_proto`, but was '{}'"
                .format(name),
        )
    name = name.removesuffix("_rust_proto")
    alias_args = {}
    if "visibility" in args:
        alias_args["visibility"] = args.pop("visibility")
    native.alias(
        name = name + "_rust_proto",
        actual = select({
            "//rust:use_upb_kernel": name + "_upb_rust_proto",
            "//conditions:default": name + "_cpp_rust_proto",
        }),
        **alias_args
    )

    rust_upb_proto_library(
        name = name + "_upb_rust_proto",
        deps = deps,
        visibility = ["//visibility:private"],
        **args
    )

    rust_cc_proto_library(
        name = name + "_cpp_rust_proto",
        deps = deps,
        visibility = ["//visibility:private"],
        **args
    )

def _user_visible_label(ctx):
    label = str(ctx.label)
    label = label.removesuffix("_cpp_rust_proto")
    label = label.removesuffix("_upb_rust_proto")
    return label + "_rust_proto"

def _rust_proto_library_impl(ctx):
    if not ctx.label.name.endswith("_rust_proto"):
        fail(
            "{}: Name of rust_proto_library target should end with `_rust_proto`."
                .format(_user_visible_label(ctx)),
        )
    deps = ctx.attr.deps
    if not deps:
        fail(
            "{}: Exactly 1 dependency in `deps` attribute expected, none were provided."
                .format(_user_visible_label(ctx)),
        )
    if len(deps) > 1:
        fail(
            "{}: Exactly 1 dependency in `deps` attribute expected, too many were provided."
                .format(_user_visible_label(ctx)),
        )

    dep = deps[0]
    rust_proto_info = dep[RustProtoInfo]

    dep_variant_info = rust_proto_info.dep_variant_info
    return [
        dep_variant_info.crate_info,
        dep_variant_info.dep_info,
        dep_variant_info.cc_info,
        DefaultInfo(files = dep_variant_info.crate_info.srcs),
    ]

def _make_rust_proto_library(is_upb):
    return rule(
        implementation = _rust_proto_library_impl,
        attrs = {
            "deps": attr.label_list(
                mandatory = True,
                providers = [ProtoInfo],
                aspects = [rust_upb_proto_library_aspect if is_upb else rust_cc_proto_library_aspect],
            ),
            "_proto_lang_toolchain": attr.label(
                default = Label(proto_rust_toolchain_label(is_upb)),
            ),
        },
    )

rust_upb_proto_library = _make_rust_proto_library(is_upb = True)
rust_cc_proto_library = _make_rust_proto_library(is_upb = False)
