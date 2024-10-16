#!/usr/bin/python
#
# Protocol Buffers - Google's data interchange format
# Copyright 2023 Google LLC.  All rights reserved.
# https://developers.google.com/protocol-buffers/
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#     * Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following disclaimer
# in the documentation and/or other materials provided with the
# distribution.
#     * Neither the name of Google LLC nor the names of its
# contributors may be used to endorse or promote products derived from
# this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

"""A tool to convert MODULE.bazel -> CMakeLists.txt.

This tool is very protobuf-specific at the moment, and should not be seen as a
generic Bazel -> CMake converter.
"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

import os
import sys
import textwrap


class ExtensionFunctions(object):
  """A fake extension that we can use to get the functions we need."""

  def toolchain(self, *args, **kwargs):
    pass

  def parse(self, *args, **kwargs):
    pass

  def spec(self, *args, **kwargs):
    pass

  def from_specs(self, *args, **kwargs):
    pass

  def install(self, *args, **kwargs):
    pass


class ModuleFileFunctions(object):
  """A fake MODULE file that we can exec() to get the functions we need."""

  def __init__(self, converter):
    self.converter = converter

  def module(self, *args, **kwargs):
    pass

  def bazel_dep(self, name, version, **kwargs):
    self.converter.toplevel += textwrap.dedent(
        """\
      set(%(name)s-version "%(version)s")
    """
        % {
            "name": name,
            "version": version,
        }
    )

  def register_toolchains(self, *args):
    pass

  def use_repo(self, *args, **kwargs):
    pass

  def use_extension(self, *args):
    return ExtensionFunctions()


class Converter(object):

  def __init__(self):
    self.toplevel = ""
    self.if_lua = ""

  def convert(self):
    return self.template % {
        "toplevel": converter.toplevel,
    }

  template = textwrap.dedent("""\
    # Auto-generated by @//cmake:make_dependencies
    #
    # This file contains lists of external dependencies based on our Bazel
    # config. It should be included from a hand-written CMake file that uses
    # them.
    #
    # Changes to this file will be overwritten based on Bazel definitions.

    if(${CMAKE_VERSION} VERSION_GREATER 3.10 OR ${CMAKE_VERSION} VERSION_EQUAL 3.10)
      include_guard()
    endif()

    %(toplevel)s

  """)


data = {}
converter = Converter()


def GetDict(obj):
  ret = {}
  for k in dir(obj):
    if not k.startswith("_"):
      ret[k] = getattr(obj, k)
  return ret


# We take the MODULE path as a command-line argument to ensure that we can find
# it regardless of how exactly Bazel was invoked.
exec(open(sys.argv[1]).read(), GetDict(ModuleFileFunctions(converter)))

with open(sys.argv[2], "w") as f:
  f.write(converter.convert())
