// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DynamicPacket.proto

#include "DynamicPacket.pb.h"

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
namespace insight {
namespace model {
class DynamicPacketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<DynamicPacket> _instance;
} _DynamicPacket_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static void InitDefaultsscc_info_DynamicPacket_DynamicPacket_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::com::htsc::mdc::insight::model::_DynamicPacket_default_instance_;
    new (ptr) ::com::htsc::mdc::insight::model::DynamicPacket();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::com::htsc::mdc::insight::model::DynamicPacket::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_DynamicPacket_DynamicPacket_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_DynamicPacket_DynamicPacket_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_DynamicPacket_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_DynamicPacket_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_DynamicPacket_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_DynamicPacket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, htscsecurityid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, mddate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, mdtime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, datatimestamp_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, securityidsource_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, securitytype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, packettype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, stringcontent_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, bytescontent_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, exchangedate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, exchangetime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::DynamicPacket, datamultiplepowerof10_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::com::htsc::mdc::insight::model::DynamicPacket)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::com::htsc::mdc::insight::model::_DynamicPacket_default_instance_),
};

const char descriptor_table_protodef_DynamicPacket_2eproto[] =
  "\n\023DynamicPacket.proto\022\032com.htsc.mdc.insi"
  "ght.model\032\027ESecurityIDSource.proto\032\023ESec"
  "urityType.proto\"\344\002\n\rDynamicPacket\022\026\n\016HTS"
  "CSecurityID\030\001 \001(\t\022\016\n\006MDDate\030\002 \001(\005\022\016\n\006MDT"
  "ime\030\003 \001(\005\022\025\n\rDataTimestamp\030\004 \001(\003\022\?\n\020secu"
  "rityIDSource\030\005 \001(\0162%.com.htsc.mdc.model."
  "ESecurityIDSource\0227\n\014securityType\030\006 \001(\0162"
  "!.com.htsc.mdc.model.ESecurityType\022\022\n\npa"
  "cketType\030\007 \001(\005\022\025\n\rstringContent\030\010 \001(\t\022\024\n"
  "\014bytesContent\030\t \001(\014\022\024\n\014ExchangeDate\030\n \001("
  "\005\022\024\n\014ExchangeTime\030\013 \001(\005\022\035\n\025DataMultipleP"
  "owerOf10\030\014 \001(\005B6\n\032com.htsc.mdc.insight.m"
  "odelB\023DynamicPacketProtosH\001\240\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_DynamicPacket_2eproto_deps[2] = {
  &::descriptor_table_ESecurityIDSource_2eproto,
  &::descriptor_table_ESecurityType_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_DynamicPacket_2eproto_sccs[1] = {
  &scc_info_DynamicPacket_DynamicPacket_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_DynamicPacket_2eproto_once;
static bool descriptor_table_DynamicPacket_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DynamicPacket_2eproto = {
  &descriptor_table_DynamicPacket_2eproto_initialized, descriptor_table_protodef_DynamicPacket_2eproto, "DynamicPacket.proto", 518,
  &descriptor_table_DynamicPacket_2eproto_once, descriptor_table_DynamicPacket_2eproto_sccs, descriptor_table_DynamicPacket_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_DynamicPacket_2eproto::offsets,
  file_level_metadata_DynamicPacket_2eproto, 1, file_level_enum_descriptors_DynamicPacket_2eproto, file_level_service_descriptors_DynamicPacket_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_DynamicPacket_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_DynamicPacket_2eproto), true);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

void DynamicPacket::InitAsDefaultInstance() {
}
class DynamicPacket::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DynamicPacket::kHTSCSecurityIDFieldNumber;
const int DynamicPacket::kMDDateFieldNumber;
const int DynamicPacket::kMDTimeFieldNumber;
const int DynamicPacket::kDataTimestampFieldNumber;
const int DynamicPacket::kSecurityIDSourceFieldNumber;
const int DynamicPacket::kSecurityTypeFieldNumber;
const int DynamicPacket::kPacketTypeFieldNumber;
const int DynamicPacket::kStringContentFieldNumber;
const int DynamicPacket::kBytesContentFieldNumber;
const int DynamicPacket::kExchangeDateFieldNumber;
const int DynamicPacket::kExchangeTimeFieldNumber;
const int DynamicPacket::kDataMultiplePowerOf10FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DynamicPacket::DynamicPacket()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.htsc.mdc.insight.model.DynamicPacket)
}
DynamicPacket::DynamicPacket(const DynamicPacket& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  htscsecurityid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.htscsecurityid().size() > 0) {
    htscsecurityid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.htscsecurityid_);
  }
  stringcontent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.stringcontent().size() > 0) {
    stringcontent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.stringcontent_);
  }
  bytescontent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.bytescontent().size() > 0) {
    bytescontent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.bytescontent_);
  }
  ::memcpy(&mddate_, &from.mddate_,
    static_cast<size_t>(reinterpret_cast<char*>(&datamultiplepowerof10_) -
    reinterpret_cast<char*>(&mddate_)) + sizeof(datamultiplepowerof10_));
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.DynamicPacket)
}

void DynamicPacket::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_DynamicPacket_DynamicPacket_2eproto.base);
  htscsecurityid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stringcontent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bytescontent_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&mddate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&datamultiplepowerof10_) -
      reinterpret_cast<char*>(&mddate_)) + sizeof(datamultiplepowerof10_));
}

DynamicPacket::~DynamicPacket() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.DynamicPacket)
  SharedDtor();
}

void DynamicPacket::SharedDtor() {
  htscsecurityid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stringcontent_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bytescontent_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void DynamicPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const DynamicPacket& DynamicPacket::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_DynamicPacket_DynamicPacket_2eproto.base);
  return *internal_default_instance();
}


void DynamicPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.DynamicPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stringcontent_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bytescontent_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&mddate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&datamultiplepowerof10_) -
      reinterpret_cast<char*>(&mddate_)) + sizeof(datamultiplepowerof10_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* DynamicPacket::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string HTSCSecurityID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_htscsecurityid(), ptr, ctx, "com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 MDDate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          mddate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 MDTime = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          mdtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 DataTimestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          datatimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_securityidsource(static_cast<::com::htsc::mdc::model::ESecurityIDSource>(val));
        } else goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityType securityType = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          set_securitytype(static_cast<::com::htsc::mdc::model::ESecurityType>(val));
        } else goto handle_unusual;
        continue;
      // int32 packetType = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          packettype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string stringContent = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_stringcontent(), ptr, ctx, "com.htsc.mdc.insight.model.DynamicPacket.stringContent");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes bytesContent = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(mutable_bytescontent(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 ExchangeDate = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          exchangedate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 ExchangeTime = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          exchangetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 DataMultiplePowerOf10 = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          datamultiplepowerof10_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool DynamicPacket::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.htsc.mdc.insight.model.DynamicPacket)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string HTSCSecurityID = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_htscsecurityid()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->htscsecurityid().data(), static_cast<int>(this->htscsecurityid().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 MDDate = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &mddate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 MDTime = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &mdtime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 DataTimestamp = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &datatimestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_securityidsource(static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .com.htsc.mdc.model.ESecurityType securityType = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_securitytype(static_cast< ::com::htsc::mdc::model::ESecurityType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 packetType = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (56 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &packettype_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string stringContent = 8;
      case 8: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (66 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_stringcontent()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->stringcontent().data(), static_cast<int>(this->stringcontent().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "com.htsc.mdc.insight.model.DynamicPacket.stringContent"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes bytesContent = 9;
      case 9: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (74 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bytescontent()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 ExchangeDate = 10;
      case 10: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (80 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &exchangedate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 ExchangeTime = 11;
      case 11: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (88 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &exchangetime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 DataMultiplePowerOf10 = 12;
      case 12: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (96 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &datamultiplepowerof10_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.htsc.mdc.insight.model.DynamicPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.htsc.mdc.insight.model.DynamicPacket)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void DynamicPacket::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.htsc.mdc.insight.model.DynamicPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->htscsecurityid().data(), static_cast<int>(this->htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->htscsecurityid(), output);
  }

  // int32 MDDate = 2;
  if (this->mddate() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(2, this->mddate(), output);
  }

  // int32 MDTime = 3;
  if (this->mdtime() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(3, this->mdtime(), output);
  }

  // int64 DataTimestamp = 4;
  if (this->datatimestamp() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(4, this->datatimestamp(), output);
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->securityidsource() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      5, this->securityidsource(), output);
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->securitytype() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      6, this->securitytype(), output);
  }

  // int32 packetType = 7;
  if (this->packettype() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(7, this->packettype(), output);
  }

  // string stringContent = 8;
  if (this->stringcontent().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->stringcontent().data(), static_cast<int>(this->stringcontent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.DynamicPacket.stringContent");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->stringcontent(), output);
  }

  // bytes bytesContent = 9;
  if (this->bytescontent().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBytesMaybeAliased(
      9, this->bytescontent(), output);
  }

  // int32 ExchangeDate = 10;
  if (this->exchangedate() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(10, this->exchangedate(), output);
  }

  // int32 ExchangeTime = 11;
  if (this->exchangetime() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(11, this->exchangetime(), output);
  }

  // int32 DataMultiplePowerOf10 = 12;
  if (this->datamultiplepowerof10() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(12, this->datamultiplepowerof10(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:com.htsc.mdc.insight.model.DynamicPacket)
}

::PROTOBUF_NAMESPACE_ID::uint8* DynamicPacket::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.DynamicPacket)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->htscsecurityid().data(), static_cast<int>(this->htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.DynamicPacket.HTSCSecurityID");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->htscsecurityid(), target);
  }

  // int32 MDDate = 2;
  if (this->mddate() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->mddate(), target);
  }

  // int32 MDTime = 3;
  if (this->mdtime() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->mdtime(), target);
  }

  // int64 DataTimestamp = 4;
  if (this->datatimestamp() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(4, this->datatimestamp(), target);
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->securityidsource() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      5, this->securityidsource(), target);
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->securitytype() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      6, this->securitytype(), target);
  }

  // int32 packetType = 7;
  if (this->packettype() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(7, this->packettype(), target);
  }

  // string stringContent = 8;
  if (this->stringcontent().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->stringcontent().data(), static_cast<int>(this->stringcontent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.DynamicPacket.stringContent");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        8, this->stringcontent(), target);
  }

  // bytes bytesContent = 9;
  if (this->bytescontent().size() > 0) {
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBytesToArray(
        9, this->bytescontent(), target);
  }

  // int32 ExchangeDate = 10;
  if (this->exchangedate() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(10, this->exchangedate(), target);
  }

  // int32 ExchangeTime = 11;
  if (this->exchangetime() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(11, this->exchangetime(), target);
  }

  // int32 DataMultiplePowerOf10 = 12;
  if (this->datamultiplepowerof10() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(12, this->datamultiplepowerof10(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.DynamicPacket)
  return target;
}

size_t DynamicPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.DynamicPacket)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (this->htscsecurityid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->htscsecurityid());
  }

  // string stringContent = 8;
  if (this->stringcontent().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->stringcontent());
  }

  // bytes bytesContent = 9;
  if (this->bytescontent().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->bytescontent());
  }

  // int32 MDDate = 2;
  if (this->mddate() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->mddate());
  }

  // int32 MDTime = 3;
  if (this->mdtime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->mdtime());
  }

  // int64 DataTimestamp = 4;
  if (this->datatimestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->datatimestamp());
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->securityidsource() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->securityidsource());
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->securitytype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->securitytype());
  }

  // int32 packetType = 7;
  if (this->packettype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->packettype());
  }

  // int32 ExchangeDate = 10;
  if (this->exchangedate() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->exchangedate());
  }

  // int32 ExchangeTime = 11;
  if (this->exchangetime() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->exchangetime());
  }

  // int32 DataMultiplePowerOf10 = 12;
  if (this->datamultiplepowerof10() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->datamultiplepowerof10());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void DynamicPacket::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.htsc.mdc.insight.model.DynamicPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const DynamicPacket* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<DynamicPacket>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.htsc.mdc.insight.model.DynamicPacket)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.htsc.mdc.insight.model.DynamicPacket)
    MergeFrom(*source);
  }
}

void DynamicPacket::MergeFrom(const DynamicPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.DynamicPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.htscsecurityid().size() > 0) {

    htscsecurityid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.htscsecurityid_);
  }
  if (from.stringcontent().size() > 0) {

    stringcontent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.stringcontent_);
  }
  if (from.bytescontent().size() > 0) {

    bytescontent_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.bytescontent_);
  }
  if (from.mddate() != 0) {
    set_mddate(from.mddate());
  }
  if (from.mdtime() != 0) {
    set_mdtime(from.mdtime());
  }
  if (from.datatimestamp() != 0) {
    set_datatimestamp(from.datatimestamp());
  }
  if (from.securityidsource() != 0) {
    set_securityidsource(from.securityidsource());
  }
  if (from.securitytype() != 0) {
    set_securitytype(from.securitytype());
  }
  if (from.packettype() != 0) {
    set_packettype(from.packettype());
  }
  if (from.exchangedate() != 0) {
    set_exchangedate(from.exchangedate());
  }
  if (from.exchangetime() != 0) {
    set_exchangetime(from.exchangetime());
  }
  if (from.datamultiplepowerof10() != 0) {
    set_datamultiplepowerof10(from.datamultiplepowerof10());
  }
}

void DynamicPacket::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.htsc.mdc.insight.model.DynamicPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DynamicPacket::CopyFrom(const DynamicPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.DynamicPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DynamicPacket::IsInitialized() const {
  return true;
}

void DynamicPacket::Swap(DynamicPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DynamicPacket::InternalSwap(DynamicPacket* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  htscsecurityid_.Swap(&other->htscsecurityid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  stringcontent_.Swap(&other->stringcontent_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  bytescontent_.Swap(&other->bytescontent_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(mddate_, other->mddate_);
  swap(mdtime_, other->mdtime_);
  swap(datatimestamp_, other->datatimestamp_);
  swap(securityidsource_, other->securityidsource_);
  swap(securitytype_, other->securitytype_);
  swap(packettype_, other->packettype_);
  swap(exchangedate_, other->exchangedate_);
  swap(exchangetime_, other->exchangetime_);
  swap(datamultiplepowerof10_, other->datamultiplepowerof10_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DynamicPacket::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::htsc::mdc::insight::model::DynamicPacket* Arena::CreateMaybeMessage< ::com::htsc::mdc::insight::model::DynamicPacket >(Arena* arena) {
  return Arena::CreateInternal< ::com::htsc::mdc::insight::model::DynamicPacket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>