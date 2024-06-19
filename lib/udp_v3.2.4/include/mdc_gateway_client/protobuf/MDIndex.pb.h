// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDIndex.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDIndex_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDIndex_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ESecurityIDSource.pb.h"
#include "ESecurityType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MDIndex_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MDIndex_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDIndex_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDIndex;
class MDIndexDefaultTypeInternal;
extern MDIndexDefaultTypeInternal _MDIndex_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::MDIndex* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::MDIndex>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDIndex :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDIndex) */ {
 public:
  MDIndex();
  virtual ~MDIndex();

  MDIndex(const MDIndex& from);
  MDIndex(MDIndex&& from) noexcept
    : MDIndex() {
    *this = ::std::move(from);
  }

  inline MDIndex& operator=(const MDIndex& from) {
    CopyFrom(from);
    return *this;
  }
  inline MDIndex& operator=(MDIndex&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MDIndex& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MDIndex* internal_default_instance() {
    return reinterpret_cast<const MDIndex*>(
               &_MDIndex_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MDIndex* other);
  friend void swap(MDIndex& a, MDIndex& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MDIndex* New() const final {
    return CreateMaybeMessage<MDIndex>(nullptr);
  }

  MDIndex* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MDIndex>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MDIndex& from);
  void MergeFrom(const MDIndex& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MDIndex* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDIndex";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MDIndex_2eproto);
    return ::descriptor_table_MDIndex_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  static const int kHTSCSecurityIDFieldNumber = 1;
  const std::string& htscsecurityid() const;
  void set_htscsecurityid(const std::string& value);
  void set_htscsecurityid(std::string&& value);
  void set_htscsecurityid(const char* value);
  void set_htscsecurityid(const char* value, size_t size);
  std::string* mutable_htscsecurityid();
  std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(std::string* htscsecurityid);

  // string TradingPhaseCode = 5;
  void clear_tradingphasecode();
  static const int kTradingPhaseCodeFieldNumber = 5;
  const std::string& tradingphasecode() const;
  void set_tradingphasecode(const std::string& value);
  void set_tradingphasecode(std::string&& value);
  void set_tradingphasecode(const char* value);
  void set_tradingphasecode(const char* value, size_t size);
  std::string* mutable_tradingphasecode();
  std::string* release_tradingphasecode();
  void set_allocated_tradingphasecode(std::string* tradingphasecode);

  // int32 MDDate = 2;
  void clear_mddate();
  static const int kMDDateFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate() const;
  void set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 MDTime = 3;
  void clear_mdtime();
  static const int kMDTimeFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime() const;
  void set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int64 DataTimestamp = 4;
  void clear_datatimestamp();
  static const int kDataTimestampFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp() const;
  void set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value);

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 6;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // .com.htsc.mdc.model.ESecurityType securityType = 7;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 7;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // int64 MaxPx = 8;
  void clear_maxpx();
  static const int kMaxPxFieldNumber = 8;
  ::PROTOBUF_NAMESPACE_ID::int64 maxpx() const;
  void set_maxpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 MinPx = 9;
  void clear_minpx();
  static const int kMinPxFieldNumber = 9;
  ::PROTOBUF_NAMESPACE_ID::int64 minpx() const;
  void set_minpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 PreClosePx = 10;
  void clear_preclosepx();
  static const int kPreClosePxFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int64 preclosepx() const;
  void set_preclosepx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 NumTrades = 11;
  void clear_numtrades();
  static const int kNumTradesFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int64 numtrades() const;
  void set_numtrades(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalVolumeTrade = 12;
  void clear_totalvolumetrade();
  static const int kTotalVolumeTradeFieldNumber = 12;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvolumetrade() const;
  void set_totalvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalValueTrade = 13;
  void clear_totalvaluetrade();
  static const int kTotalValueTradeFieldNumber = 13;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvaluetrade() const;
  void set_totalvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 LastPx = 14;
  void clear_lastpx();
  static const int kLastPxFieldNumber = 14;
  ::PROTOBUF_NAMESPACE_ID::int64 lastpx() const;
  void set_lastpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 OpenPx = 15;
  void clear_openpx();
  static const int kOpenPxFieldNumber = 15;
  ::PROTOBUF_NAMESPACE_ID::int64 openpx() const;
  void set_openpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 ClosePx = 16;
  void clear_closepx();
  static const int kClosePxFieldNumber = 16;
  ::PROTOBUF_NAMESPACE_ID::int64 closepx() const;
  void set_closepx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 HighPx = 17;
  void clear_highpx();
  static const int kHighPxFieldNumber = 17;
  ::PROTOBUF_NAMESPACE_ID::int64 highpx() const;
  void set_highpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 LowPx = 18;
  void clear_lowpx();
  static const int kLowPxFieldNumber = 18;
  ::PROTOBUF_NAMESPACE_ID::int64 lowpx() const;
  void set_lowpx(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int32 ChannelNo = 19;
  void clear_channelno();
  static const int kChannelNoFieldNumber = 19;
  ::PROTOBUF_NAMESPACE_ID::int32 channelno() const;
  void set_channelno(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeDate = 20;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 20;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate() const;
  void set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int64 TotalBuyVolumeTrade = 22;
  void clear_totalbuyvolumetrade();
  static const int kTotalBuyVolumeTradeFieldNumber = 22;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuyvolumetrade() const;
  void set_totalbuyvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalBuyValueTrade = 23;
  void clear_totalbuyvaluetrade();
  static const int kTotalBuyValueTradeFieldNumber = 23;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuyvaluetrade() const;
  void set_totalbuyvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalBuyNumber = 24;
  void clear_totalbuynumber();
  static const int kTotalBuyNumberFieldNumber = 24;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuynumber() const;
  void set_totalbuynumber(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int32 ExchangeTime = 21;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 21;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime() const;
  void set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 DataMultiplePowerOf10 = 28;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 28;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int64 TotalSellVolumeTrade = 25;
  void clear_totalsellvolumetrade();
  static const int kTotalSellVolumeTradeFieldNumber = 25;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellvolumetrade() const;
  void set_totalsellvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalSellValueTrade = 26;
  void clear_totalsellvaluetrade();
  static const int kTotalSellValueTradeFieldNumber = 26;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellvaluetrade() const;
  void set_totalsellvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalSellNumber = 27;
  void clear_totalsellnumber();
  static const int kTotalSellNumberFieldNumber = 27;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellnumber() const;
  void set_totalsellnumber(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDIndex)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tradingphasecode_;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate_;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime_;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::PROTOBUF_NAMESPACE_ID::int64 maxpx_;
  ::PROTOBUF_NAMESPACE_ID::int64 minpx_;
  ::PROTOBUF_NAMESPACE_ID::int64 preclosepx_;
  ::PROTOBUF_NAMESPACE_ID::int64 numtrades_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvolumetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvaluetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 lastpx_;
  ::PROTOBUF_NAMESPACE_ID::int64 openpx_;
  ::PROTOBUF_NAMESPACE_ID::int64 closepx_;
  ::PROTOBUF_NAMESPACE_ID::int64 highpx_;
  ::PROTOBUF_NAMESPACE_ID::int64 lowpx_;
  ::PROTOBUF_NAMESPACE_ID::int32 channelno_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuyvolumetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuyvaluetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalbuynumber_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime_;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellvolumetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellvaluetrade_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalsellnumber_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_MDIndex_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MDIndex

// string HTSCSecurityID = 1;
inline void MDIndex::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MDIndex::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
  return htscsecurityid_.GetNoArena();
}
inline void MDIndex::set_htscsecurityid(const std::string& value) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
}
inline void MDIndex::set_htscsecurityid(std::string&& value) {
  
  htscsecurityid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
}
inline void MDIndex::set_htscsecurityid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
}
inline void MDIndex::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
}
inline std::string* MDIndex::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MDIndex::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MDIndex::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIndex.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void MDIndex::clear_mddate() {
  mddate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.MDDate)
  return mddate_;
}
inline void MDIndex::set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.MDDate)
}

// int32 MDTime = 3;
inline void MDIndex::clear_mdtime() {
  mdtime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.MDTime)
  return mdtime_;
}
inline void MDIndex::set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.MDTime)
}

// int64 DataTimestamp = 4;
inline void MDIndex::clear_datatimestamp() {
  datatimestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.DataTimestamp)
  return datatimestamp_;
}
inline void MDIndex::set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.DataTimestamp)
}

// string TradingPhaseCode = 5;
inline void MDIndex::clear_tradingphasecode() {
  tradingphasecode_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& MDIndex::tradingphasecode() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
  return tradingphasecode_.GetNoArena();
}
inline void MDIndex::set_tradingphasecode(const std::string& value) {
  
  tradingphasecode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
}
inline void MDIndex::set_tradingphasecode(std::string&& value) {
  
  tradingphasecode_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
}
inline void MDIndex::set_tradingphasecode(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  tradingphasecode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
}
inline void MDIndex::set_tradingphasecode(const char* value, size_t size) {
  
  tradingphasecode_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
}
inline std::string* MDIndex::mutable_tradingphasecode() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
  return tradingphasecode_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* MDIndex::release_tradingphasecode() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
  
  return tradingphasecode_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void MDIndex::set_allocated_tradingphasecode(std::string* tradingphasecode) {
  if (tradingphasecode != nullptr) {
    
  } else {
    
  }
  tradingphasecode_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tradingphasecode);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDIndex.TradingPhaseCode)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
inline void MDIndex::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDIndex::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void MDIndex::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 7;
inline void MDIndex::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDIndex::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void MDIndex::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.securityType)
}

// int64 MaxPx = 8;
inline void MDIndex::clear_maxpx() {
  maxpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::maxpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.MaxPx)
  return maxpx_;
}
inline void MDIndex::set_maxpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  maxpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.MaxPx)
}

// int64 MinPx = 9;
inline void MDIndex::clear_minpx() {
  minpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::minpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.MinPx)
  return minpx_;
}
inline void MDIndex::set_minpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  minpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.MinPx)
}

// int64 PreClosePx = 10;
inline void MDIndex::clear_preclosepx() {
  preclosepx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::preclosepx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.PreClosePx)
  return preclosepx_;
}
inline void MDIndex::set_preclosepx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  preclosepx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.PreClosePx)
}

// int64 NumTrades = 11;
inline void MDIndex::clear_numtrades() {
  numtrades_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::numtrades() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.NumTrades)
  return numtrades_;
}
inline void MDIndex::set_numtrades(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  numtrades_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.NumTrades)
}

// int64 TotalVolumeTrade = 12;
inline void MDIndex::clear_totalvolumetrade() {
  totalvolumetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalvolumetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalVolumeTrade)
  return totalvolumetrade_;
}
inline void MDIndex::set_totalvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalvolumetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalVolumeTrade)
}

// int64 TotalValueTrade = 13;
inline void MDIndex::clear_totalvaluetrade() {
  totalvaluetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalvaluetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalValueTrade)
  return totalvaluetrade_;
}
inline void MDIndex::set_totalvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalvaluetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalValueTrade)
}

// int64 LastPx = 14;
inline void MDIndex::clear_lastpx() {
  lastpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::lastpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.LastPx)
  return lastpx_;
}
inline void MDIndex::set_lastpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  lastpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.LastPx)
}

// int64 OpenPx = 15;
inline void MDIndex::clear_openpx() {
  openpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::openpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.OpenPx)
  return openpx_;
}
inline void MDIndex::set_openpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  openpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.OpenPx)
}

// int64 ClosePx = 16;
inline void MDIndex::clear_closepx() {
  closepx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::closepx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.ClosePx)
  return closepx_;
}
inline void MDIndex::set_closepx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  closepx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.ClosePx)
}

// int64 HighPx = 17;
inline void MDIndex::clear_highpx() {
  highpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::highpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.HighPx)
  return highpx_;
}
inline void MDIndex::set_highpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  highpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.HighPx)
}

// int64 LowPx = 18;
inline void MDIndex::clear_lowpx() {
  lowpx_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::lowpx() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.LowPx)
  return lowpx_;
}
inline void MDIndex::set_lowpx(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  lowpx_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.LowPx)
}

// int32 ChannelNo = 19;
inline void MDIndex::clear_channelno() {
  channelno_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::channelno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.ChannelNo)
  return channelno_;
}
inline void MDIndex::set_channelno(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  channelno_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.ChannelNo)
}

// int32 ExchangeDate = 20;
inline void MDIndex::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.ExchangeDate)
  return exchangedate_;
}
inline void MDIndex::set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.ExchangeDate)
}

// int32 ExchangeTime = 21;
inline void MDIndex::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.ExchangeTime)
  return exchangetime_;
}
inline void MDIndex::set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.ExchangeTime)
}

// int64 TotalBuyVolumeTrade = 22;
inline void MDIndex::clear_totalbuyvolumetrade() {
  totalbuyvolumetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalbuyvolumetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalBuyVolumeTrade)
  return totalbuyvolumetrade_;
}
inline void MDIndex::set_totalbuyvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalbuyvolumetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalBuyVolumeTrade)
}

// int64 TotalBuyValueTrade = 23;
inline void MDIndex::clear_totalbuyvaluetrade() {
  totalbuyvaluetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalbuyvaluetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalBuyValueTrade)
  return totalbuyvaluetrade_;
}
inline void MDIndex::set_totalbuyvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalbuyvaluetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalBuyValueTrade)
}

// int64 TotalBuyNumber = 24;
inline void MDIndex::clear_totalbuynumber() {
  totalbuynumber_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalbuynumber() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalBuyNumber)
  return totalbuynumber_;
}
inline void MDIndex::set_totalbuynumber(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalbuynumber_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalBuyNumber)
}

// int64 TotalSellVolumeTrade = 25;
inline void MDIndex::clear_totalsellvolumetrade() {
  totalsellvolumetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalsellvolumetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalSellVolumeTrade)
  return totalsellvolumetrade_;
}
inline void MDIndex::set_totalsellvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalsellvolumetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalSellVolumeTrade)
}

// int64 TotalSellValueTrade = 26;
inline void MDIndex::clear_totalsellvaluetrade() {
  totalsellvaluetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalsellvaluetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalSellValueTrade)
  return totalsellvaluetrade_;
}
inline void MDIndex::set_totalsellvaluetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalsellvaluetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalSellValueTrade)
}

// int64 TotalSellNumber = 27;
inline void MDIndex::clear_totalsellnumber() {
  totalsellnumber_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MDIndex::totalsellnumber() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.TotalSellNumber)
  return totalsellnumber_;
}
inline void MDIndex::set_totalsellnumber(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalsellnumber_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.TotalSellNumber)
}

// int32 DataMultiplePowerOf10 = 28;
inline void MDIndex::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MDIndex::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDIndex.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void MDIndex::set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDIndex.DataMultiplePowerOf10)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MDIndex_2eproto