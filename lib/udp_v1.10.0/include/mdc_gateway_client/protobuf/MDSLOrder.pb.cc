// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLOrder.proto

#include "MDSLOrder.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
PROTOBUF_CONSTEXPR MDSLOrder::MDSLOrder(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.htscsecurityid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ordernum_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.mddate_)*/0
  , /*decltype(_impl_.mdtime_)*/0
  , /*decltype(_impl_.datatimestamp_)*/int64_t{0}
  , /*decltype(_impl_.securityidsource_)*/0
  , /*decltype(_impl_.securitytype_)*/0
  , /*decltype(_impl_.exchangedate_)*/0
  , /*decltype(_impl_.exchangetime_)*/0
  , /*decltype(_impl_.orderindex_)*/int64_t{0}
  , /*decltype(_impl_.orderprice_)*/int64_t{0}
  , /*decltype(_impl_.ordertype_)*/0
  , /*decltype(_impl_.orderbsflag_)*/0
  , /*decltype(_impl_.orderqty_)*/int64_t{0}
  , /*decltype(_impl_.orderterm_)*/0
  , /*decltype(_impl_.datamultiplepowerof10_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MDSLOrderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MDSLOrderDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MDSLOrderDefaultTypeInternal() {}
  union {
    MDSLOrder _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MDSLOrderDefaultTypeInternal _MDSLOrder_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
static ::_pb::Metadata file_level_metadata_MDSLOrder_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MDSLOrder_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MDSLOrder_2eproto = nullptr;

const uint32_t TableStruct_MDSLOrder_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.htscsecurityid_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.mddate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.mdtime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.datatimestamp_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.securityidsource_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.securitytype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.exchangedate_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.exchangetime_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.orderindex_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.ordertype_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.orderprice_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.orderqty_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.orderbsflag_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.orderterm_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.ordernum_),
  PROTOBUF_FIELD_OFFSET(::com::htsc::mdc::insight::model::MDSLOrder, _impl_.datamultiplepowerof10_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::com::htsc::mdc::insight::model::MDSLOrder)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::com::htsc::mdc::insight::model::_MDSLOrder_default_instance_._instance,
};

const char descriptor_table_protodef_MDSLOrder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017MDSLOrder.proto\022\032com.htsc.mdc.insight."
  "model\032\027ESecurityIDSource.proto\032\023ESecurit"
  "yType.proto\"\246\003\n\tMDSLOrder\022\026\n\016HTSCSecurit"
  "yID\030\001 \001(\t\022\016\n\006MDDate\030\002 \001(\005\022\016\n\006MDTime\030\003 \001("
  "\005\022\025\n\rDataTimestamp\030\004 \001(\003\022\?\n\020securityIDSo"
  "urce\030\005 \001(\0162%.com.htsc.mdc.model.ESecurit"
  "yIDSource\0227\n\014securityType\030\006 \001(\0162!.com.ht"
  "sc.mdc.model.ESecurityType\022\024\n\014ExchangeDa"
  "te\030\007 \001(\005\022\024\n\014ExchangeTime\030\010 \001(\005\022\022\n\nOrderI"
  "ndex\030\t \001(\003\022\021\n\tOrderType\030\n \001(\005\022\022\n\nOrderPr"
  "ice\030\013 \001(\003\022\020\n\010OrderQty\030\014 \001(\003\022\023\n\013OrderBSFl"
  "ag\030\r \001(\005\022\021\n\tOrderTerm\030\016 \001(\005\022\020\n\010OrderNum\030"
  "\017 \001(\t\022\035\n\025DataMultiplePowerOf10\030\020 \001(\005B2\n\032"
  "com.htsc.mdc.insight.modelB\017MDSLOrderPro"
  "tosH\001\240\001\001b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MDSLOrder_2eproto_deps[2] = {
  &::descriptor_table_ESecurityIDSource_2eproto,
  &::descriptor_table_ESecurityType_2eproto,
};
static ::_pbi::once_flag descriptor_table_MDSLOrder_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MDSLOrder_2eproto = {
    false, false, 576, descriptor_table_protodef_MDSLOrder_2eproto,
    "MDSLOrder.proto",
    &descriptor_table_MDSLOrder_2eproto_once, descriptor_table_MDSLOrder_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_MDSLOrder_2eproto::offsets,
    file_level_metadata_MDSLOrder_2eproto, file_level_enum_descriptors_MDSLOrder_2eproto,
    file_level_service_descriptors_MDSLOrder_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MDSLOrder_2eproto_getter() {
  return &descriptor_table_MDSLOrder_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MDSLOrder_2eproto(&descriptor_table_MDSLOrder_2eproto);
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDSLOrder::_Internal {
 public:
};

MDSLOrder::MDSLOrder(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:com.htsc.mdc.insight.model.MDSLOrder)
}
MDSLOrder::MDSLOrder(const MDSLOrder& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MDSLOrder* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.ordernum_){}
    , decltype(_impl_.mddate_){}
    , decltype(_impl_.mdtime_){}
    , decltype(_impl_.datatimestamp_){}
    , decltype(_impl_.securityidsource_){}
    , decltype(_impl_.securitytype_){}
    , decltype(_impl_.exchangedate_){}
    , decltype(_impl_.exchangetime_){}
    , decltype(_impl_.orderindex_){}
    , decltype(_impl_.orderprice_){}
    , decltype(_impl_.ordertype_){}
    , decltype(_impl_.orderbsflag_){}
    , decltype(_impl_.orderqty_){}
    , decltype(_impl_.orderterm_){}
    , decltype(_impl_.datamultiplepowerof10_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_htscsecurityid().empty()) {
    _this->_impl_.htscsecurityid_.Set(from._internal_htscsecurityid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.ordernum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ordernum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_ordernum().empty()) {
    _this->_impl_.ordernum_.Set(from._internal_ordernum(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.mddate_, &from._impl_.mddate_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
    reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  // @@protoc_insertion_point(copy_constructor:com.htsc.mdc.insight.model.MDSLOrder)
}

inline void MDSLOrder::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.htscsecurityid_){}
    , decltype(_impl_.ordernum_){}
    , decltype(_impl_.mddate_){0}
    , decltype(_impl_.mdtime_){0}
    , decltype(_impl_.datatimestamp_){int64_t{0}}
    , decltype(_impl_.securityidsource_){0}
    , decltype(_impl_.securitytype_){0}
    , decltype(_impl_.exchangedate_){0}
    , decltype(_impl_.exchangetime_){0}
    , decltype(_impl_.orderindex_){int64_t{0}}
    , decltype(_impl_.orderprice_){int64_t{0}}
    , decltype(_impl_.ordertype_){0}
    , decltype(_impl_.orderbsflag_){0}
    , decltype(_impl_.orderqty_){int64_t{0}}
    , decltype(_impl_.orderterm_){0}
    , decltype(_impl_.datamultiplepowerof10_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.htscsecurityid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.ordernum_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ordernum_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MDSLOrder::~MDSLOrder() {
  // @@protoc_insertion_point(destructor:com.htsc.mdc.insight.model.MDSLOrder)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MDSLOrder::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.htscsecurityid_.Destroy();
  _impl_.ordernum_.Destroy();
}

void MDSLOrder::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MDSLOrder::Clear() {
// @@protoc_insertion_point(message_clear_start:com.htsc.mdc.insight.model.MDSLOrder)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.htscsecurityid_.ClearToEmpty();
  _impl_.ordernum_.ClearToEmpty();
  ::memset(&_impl_.mddate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.datamultiplepowerof10_) -
      reinterpret_cast<char*>(&_impl_.mddate_)) + sizeof(_impl_.datamultiplepowerof10_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MDSLOrder::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string HTSCSecurityID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_htscsecurityid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDSLOrder.HTSCSecurityID"));
        } else
          goto handle_unusual;
        continue;
      // int32 MDDate = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.mddate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 MDTime = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.mdtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 DataTimestamp = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.datatimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securityidsource(static_cast<::com::htsc::mdc::model::ESecurityIDSource>(val));
        } else
          goto handle_unusual;
        continue;
      // .com.htsc.mdc.model.ESecurityType securityType = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_securitytype(static_cast<::com::htsc::mdc::model::ESecurityType>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 ExchangeDate = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.exchangedate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 ExchangeTime = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.exchangetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 OrderIndex = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.orderindex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 OrderType = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.ordertype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 OrderPrice = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.orderprice_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 OrderQty = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _impl_.orderqty_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 OrderBSFlag = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _impl_.orderbsflag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 OrderTerm = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 112)) {
          _impl_.orderterm_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string OrderNum = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 122)) {
          auto str = _internal_mutable_ordernum();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "com.htsc.mdc.insight.model.MDSLOrder.OrderNum"));
        } else
          goto handle_unusual;
        continue;
      // int32 DataMultiplePowerOf10 = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 128)) {
          _impl_.datamultiplepowerof10_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MDSLOrder::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.htsc.mdc.insight.model.MDSLOrder)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_htscsecurityid().data(), static_cast<int>(this->_internal_htscsecurityid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDSLOrder.HTSCSecurityID");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_htscsecurityid(), target);
  }

  // int32 MDDate = 2;
  if (this->_internal_mddate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_mddate(), target);
  }

  // int32 MDTime = 3;
  if (this->_internal_mdtime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_mdtime(), target);
  }

  // int64 DataTimestamp = 4;
  if (this->_internal_datatimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_datatimestamp(), target);
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->_internal_securityidsource() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_securityidsource(), target);
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->_internal_securitytype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_securitytype(), target);
  }

  // int32 ExchangeDate = 7;
  if (this->_internal_exchangedate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(7, this->_internal_exchangedate(), target);
  }

  // int32 ExchangeTime = 8;
  if (this->_internal_exchangetime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(8, this->_internal_exchangetime(), target);
  }

  // int64 OrderIndex = 9;
  if (this->_internal_orderindex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(9, this->_internal_orderindex(), target);
  }

  // int32 OrderType = 10;
  if (this->_internal_ordertype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(10, this->_internal_ordertype(), target);
  }

  // int64 OrderPrice = 11;
  if (this->_internal_orderprice() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(11, this->_internal_orderprice(), target);
  }

  // int64 OrderQty = 12;
  if (this->_internal_orderqty() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(12, this->_internal_orderqty(), target);
  }

  // int32 OrderBSFlag = 13;
  if (this->_internal_orderbsflag() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(13, this->_internal_orderbsflag(), target);
  }

  // int32 OrderTerm = 14;
  if (this->_internal_orderterm() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(14, this->_internal_orderterm(), target);
  }

  // string OrderNum = 15;
  if (!this->_internal_ordernum().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ordernum().data(), static_cast<int>(this->_internal_ordernum().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "com.htsc.mdc.insight.model.MDSLOrder.OrderNum");
    target = stream->WriteStringMaybeAliased(
        15, this->_internal_ordernum(), target);
  }

  // int32 DataMultiplePowerOf10 = 16;
  if (this->_internal_datamultiplepowerof10() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(16, this->_internal_datamultiplepowerof10(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.htsc.mdc.insight.model.MDSLOrder)
  return target;
}

size_t MDSLOrder::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.htsc.mdc.insight.model.MDSLOrder)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string HTSCSecurityID = 1;
  if (!this->_internal_htscsecurityid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_htscsecurityid());
  }

  // string OrderNum = 15;
  if (!this->_internal_ordernum().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ordernum());
  }

  // int32 MDDate = 2;
  if (this->_internal_mddate() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mddate());
  }

  // int32 MDTime = 3;
  if (this->_internal_mdtime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mdtime());
  }

  // int64 DataTimestamp = 4;
  if (this->_internal_datatimestamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_datatimestamp());
  }

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  if (this->_internal_securityidsource() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securityidsource());
  }

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  if (this->_internal_securitytype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_securitytype());
  }

  // int32 ExchangeDate = 7;
  if (this->_internal_exchangedate() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_exchangedate());
  }

  // int32 ExchangeTime = 8;
  if (this->_internal_exchangetime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_exchangetime());
  }

  // int64 OrderIndex = 9;
  if (this->_internal_orderindex() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_orderindex());
  }

  // int64 OrderPrice = 11;
  if (this->_internal_orderprice() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_orderprice());
  }

  // int32 OrderType = 10;
  if (this->_internal_ordertype() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_ordertype());
  }

  // int32 OrderBSFlag = 13;
  if (this->_internal_orderbsflag() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_orderbsflag());
  }

  // int64 OrderQty = 12;
  if (this->_internal_orderqty() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_orderqty());
  }

  // int32 OrderTerm = 14;
  if (this->_internal_orderterm() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_orderterm());
  }

  // int32 DataMultiplePowerOf10 = 16;
  if (this->_internal_datamultiplepowerof10() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::Int32Size(
        this->_internal_datamultiplepowerof10());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MDSLOrder::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MDSLOrder::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MDSLOrder::GetClassData() const { return &_class_data_; }


void MDSLOrder::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MDSLOrder*>(&to_msg);
  auto& from = static_cast<const MDSLOrder&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:com.htsc.mdc.insight.model.MDSLOrder)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_htscsecurityid().empty()) {
    _this->_internal_set_htscsecurityid(from._internal_htscsecurityid());
  }
  if (!from._internal_ordernum().empty()) {
    _this->_internal_set_ordernum(from._internal_ordernum());
  }
  if (from._internal_mddate() != 0) {
    _this->_internal_set_mddate(from._internal_mddate());
  }
  if (from._internal_mdtime() != 0) {
    _this->_internal_set_mdtime(from._internal_mdtime());
  }
  if (from._internal_datatimestamp() != 0) {
    _this->_internal_set_datatimestamp(from._internal_datatimestamp());
  }
  if (from._internal_securityidsource() != 0) {
    _this->_internal_set_securityidsource(from._internal_securityidsource());
  }
  if (from._internal_securitytype() != 0) {
    _this->_internal_set_securitytype(from._internal_securitytype());
  }
  if (from._internal_exchangedate() != 0) {
    _this->_internal_set_exchangedate(from._internal_exchangedate());
  }
  if (from._internal_exchangetime() != 0) {
    _this->_internal_set_exchangetime(from._internal_exchangetime());
  }
  if (from._internal_orderindex() != 0) {
    _this->_internal_set_orderindex(from._internal_orderindex());
  }
  if (from._internal_orderprice() != 0) {
    _this->_internal_set_orderprice(from._internal_orderprice());
  }
  if (from._internal_ordertype() != 0) {
    _this->_internal_set_ordertype(from._internal_ordertype());
  }
  if (from._internal_orderbsflag() != 0) {
    _this->_internal_set_orderbsflag(from._internal_orderbsflag());
  }
  if (from._internal_orderqty() != 0) {
    _this->_internal_set_orderqty(from._internal_orderqty());
  }
  if (from._internal_orderterm() != 0) {
    _this->_internal_set_orderterm(from._internal_orderterm());
  }
  if (from._internal_datamultiplepowerof10() != 0) {
    _this->_internal_set_datamultiplepowerof10(from._internal_datamultiplepowerof10());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MDSLOrder::CopyFrom(const MDSLOrder& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.htsc.mdc.insight.model.MDSLOrder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MDSLOrder::IsInitialized() const {
  return true;
}

void MDSLOrder::InternalSwap(MDSLOrder* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.htscsecurityid_, lhs_arena,
      &other->_impl_.htscsecurityid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ordernum_, lhs_arena,
      &other->_impl_.ordernum_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MDSLOrder, _impl_.datamultiplepowerof10_)
      + sizeof(MDSLOrder::_impl_.datamultiplepowerof10_)
      - PROTOBUF_FIELD_OFFSET(MDSLOrder, _impl_.mddate_)>(
          reinterpret_cast<char*>(&_impl_.mddate_),
          reinterpret_cast<char*>(&other->_impl_.mddate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MDSLOrder::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MDSLOrder_2eproto_getter, &descriptor_table_MDSLOrder_2eproto_once,
      file_level_metadata_MDSLOrder_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::com::htsc::mdc::insight::model::MDSLOrder*
Arena::CreateMaybeMessage< ::com::htsc::mdc::insight::model::MDSLOrder >(Arena* arena) {
  return Arena::CreateMessageInternal< ::com::htsc::mdc::insight::model::MDSLOrder >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
