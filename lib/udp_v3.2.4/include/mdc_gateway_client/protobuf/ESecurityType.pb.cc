// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ESecurityType.proto

#include "ESecurityType.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace com {
namespace htsc {
namespace mdc {
namespace model {
}  // namespace model
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_ESecurityType_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ESecurityType_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ESecurityType_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ESecurityType_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ESecurityType_2eproto[] =
  "\n\023ESecurityType.proto\022\022com.htsc.mdc.mode"
  "l*\217\002\n\rESecurityType\022\027\n\023DefaultSecurityTy"
  "pe\020\000\022\r\n\tIndexType\020\001\022\r\n\tStockType\020\002\022\014\n\010Fu"
  "ndType\020\003\022\014\n\010BondType\020\004\022\014\n\010RepoType\020\005\022\017\n\013"
  "WarrantType\020\006\022\016\n\nOptionType\020\007\022\017\n\013Futures"
  "Type\020\010\022\r\n\tForexType\020\t\022\014\n\010RateType\020\n\022\016\n\nN"
  "metalType\020\013\022\020\n\014CashBondType\020\014\022\014\n\010SpotTyp"
  "e\020\r\022\017\n\013InsightType\020\024\022\r\n\tOtherType\020cB.\n\022c"
  "om.htsc.mdc.modelB\023ESecurityTypeProtosH\001"
  "\240\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ESecurityType_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ESecurityType_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ESecurityType_2eproto_once;
static bool descriptor_table_ESecurityType_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ESecurityType_2eproto = {
  &descriptor_table_ESecurityType_2eproto_initialized, descriptor_table_protodef_ESecurityType_2eproto, "ESecurityType.proto", 371,
  &descriptor_table_ESecurityType_2eproto_once, descriptor_table_ESecurityType_2eproto_sccs, descriptor_table_ESecurityType_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_ESecurityType_2eproto::offsets,
  file_level_metadata_ESecurityType_2eproto, 0, file_level_enum_descriptors_ESecurityType_2eproto, file_level_service_descriptors_ESecurityType_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ESecurityType_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ESecurityType_2eproto), true);
namespace com {
namespace htsc {
namespace mdc {
namespace model {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ESecurityType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ESecurityType_2eproto);
  return file_level_enum_descriptors_ESecurityType_2eproto[0];
}
bool ESecurityType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 20:
    case 99:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>