/* This file was generated by upb_generator from the input file:
 *
 *     google/protobuf/compiler/plugin.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "google/protobuf/compiler/plugin.upb_minitable.h"
#include "google/protobuf/descriptor.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableField google_protobuf_compiler_Version__fields[4] = {
  {1, 12, 64, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, 16, 65, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {3, 20, 66, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {4, 24, 67, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__compiler__Version_msg_init = {
  NULL,
  &google_protobuf_compiler_Version__fields[0],
  UPB_SIZE(32, 40), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(255), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.compiler.Version",
#endif
};

const upb_MiniTable* google__protobuf__compiler__Version_msg_init_ptr = &google__protobuf__compiler__Version_msg_init;
static const upb_MiniTableSubInternal google_protobuf_compiler_CodeGeneratorRequest_submsgs[3] = {
  {.UPB_PRIVATE(submsg) = &google__protobuf__compiler__Version_msg_init_ptr},
  {.UPB_PRIVATE(submsg) = &google__protobuf__FileDescriptorProto_msg_init_ptr},
  {.UPB_PRIVATE(submsg) = &google__protobuf__FileDescriptorProto_msg_init_ptr},
};

static const upb_MiniTableField google_protobuf_compiler_CodeGeneratorRequest__fields[5] = {
  {1, UPB_SIZE(12, 16), 0, kUpb_NoSub, 12, (int)kUpb_FieldMode_Array | (int)kUpb_LabelFlags_IsAlternate | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(28, 24), 64, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 40), 65, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(20, 48), 0, 1, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {17, UPB_SIZE(24, 56), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__compiler__CodeGeneratorRequest_msg_init = {
  &google_protobuf_compiler_CodeGeneratorRequest_submsgs[0],
  &google_protobuf_compiler_CodeGeneratorRequest__fields[0],
  UPB_SIZE(40, 64), 5, kUpb_ExtMode_NonExtendable, 3, UPB_FASTTABLE_MASK(248), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.compiler.CodeGeneratorRequest",
#endif
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000003f00000a, &upb_prs_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x003000003f01007a, &upb_prm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x003800003f02018a, &upb_prm_2bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

const upb_MiniTable* google__protobuf__compiler__CodeGeneratorRequest_msg_init_ptr = &google__protobuf__compiler__CodeGeneratorRequest_msg_init;
static const upb_MiniTableSubInternal google_protobuf_compiler_CodeGeneratorResponse_submsgs[1] = {
  {.UPB_PRIVATE(submsg) = &google__protobuf__compiler__CodeGeneratorResponse__File_msg_init_ptr},
};

static const upb_MiniTableField google_protobuf_compiler_CodeGeneratorResponse__fields[5] = {
  {1, 24, 64, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(32, 40), 65, kUpb_NoSub, 4, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {3, 12, 66, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {4, 16, 67, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(20, 48), 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__compiler__CodeGeneratorResponse_msg_init = {
  &google_protobuf_compiler_CodeGeneratorResponse_submsgs[0],
  &google_protobuf_compiler_CodeGeneratorResponse__fields[0],
  UPB_SIZE(40, 56), 5, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(120), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.compiler.CodeGeneratorResponse",
#endif
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x003000003f00007a, &upb_prm_1bt_max128b},
  })
};

const upb_MiniTable* google__protobuf__compiler__CodeGeneratorResponse_msg_init_ptr = &google__protobuf__compiler__CodeGeneratorResponse_msg_init;
static const upb_MiniTableSubInternal google_protobuf_compiler_CodeGeneratorResponse_File_submsgs[1] = {
  {.UPB_PRIVATE(submsg) = &google__protobuf__GeneratedCodeInfo_msg_init_ptr},
};

static const upb_MiniTableField google_protobuf_compiler_CodeGeneratorResponse_File__fields[4] = {
  {1, 16, 64, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(24, 32), 65, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {15, UPB_SIZE(32, 48), 66, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {16, UPB_SIZE(12, 64), 67, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__protobuf__compiler__CodeGeneratorResponse__File_msg_init = {
  &google_protobuf_compiler_CodeGeneratorResponse_File_submsgs[0],
  &google_protobuf_compiler_CodeGeneratorResponse_File__fields[0],
  UPB_SIZE(40, 72), 4, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(255), 0,
#ifdef UPB_TRACING_ENABLED
  "google.protobuf.compiler.CodeGeneratorResponse.File",
#endif
};

const upb_MiniTable* google__protobuf__compiler__CodeGeneratorResponse__File_msg_init_ptr = &google__protobuf__compiler__CodeGeneratorResponse__File_msg_init;
const upb_MiniTableEnum google_protobuf_compiler_CodeGeneratorResponse_Feature_enum_init = {
    64,
    0,
    {
        0x7,
        0x0,
    },
};

static const upb_MiniTable *messages_layout[4] = {
  &google__protobuf__compiler__Version_msg_init,
  &google__protobuf__compiler__CodeGeneratorRequest_msg_init,
  &google__protobuf__compiler__CodeGeneratorResponse_msg_init,
  &google__protobuf__compiler__CodeGeneratorResponse__File_msg_init,
};

static const upb_MiniTableEnum *enums_layout[1] = {
  &google_protobuf_compiler_CodeGeneratorResponse_Feature_enum_init,
};

const upb_MiniTableFile google_protobuf_compiler_plugin_proto_upb_file_layout = {
  messages_layout,
  enums_layout,
  NULL,
  4,
  1,
  0,
};

#include "upb/port/undef.inc"

