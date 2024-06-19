// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ADIndicatorsRanking.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ADIndicatorsRanking_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ADIndicatorsRanking_2eproto

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
#include "ESecurityType.pb.h"
#include "ESecurityIDSource.pb.h"
#include "MDSimpleTick.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ADIndicatorsRanking_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ADIndicatorsRanking_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ADIndicatorsRanking_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class ADIndicatorsRanking;
class ADIndicatorsRankingDefaultTypeInternal;
extern ADIndicatorsRankingDefaultTypeInternal _ADIndicatorsRanking_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::ADIndicatorsRanking* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::ADIndicatorsRanking>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class ADIndicatorsRanking :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.ADIndicatorsRanking) */ {
 public:
  ADIndicatorsRanking();
  virtual ~ADIndicatorsRanking();

  ADIndicatorsRanking(const ADIndicatorsRanking& from);
  ADIndicatorsRanking(ADIndicatorsRanking&& from) noexcept
    : ADIndicatorsRanking() {
    *this = ::std::move(from);
  }

  inline ADIndicatorsRanking& operator=(const ADIndicatorsRanking& from) {
    CopyFrom(from);
    return *this;
  }
  inline ADIndicatorsRanking& operator=(ADIndicatorsRanking&& from) noexcept {
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
  static const ADIndicatorsRanking& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ADIndicatorsRanking* internal_default_instance() {
    return reinterpret_cast<const ADIndicatorsRanking*>(
               &_ADIndicatorsRanking_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ADIndicatorsRanking* other);
  friend void swap(ADIndicatorsRanking& a, ADIndicatorsRanking& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ADIndicatorsRanking* New() const final {
    return CreateMaybeMessage<ADIndicatorsRanking>(nullptr);
  }

  ADIndicatorsRanking* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ADIndicatorsRanking>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ADIndicatorsRanking& from);
  void MergeFrom(const ADIndicatorsRanking& from);
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
  void InternalSwap(ADIndicatorsRanking* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.ADIndicatorsRanking";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ADIndicatorsRanking_2eproto);
    return ::descriptor_table_ADIndicatorsRanking_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.htsc.mdc.insight.model.MDSimpleTick RankingList = 9;
  int rankinglist_size() const;
  void clear_rankinglist();
  static const int kRankingListFieldNumber = 9;
  ::com::htsc::mdc::insight::model::MDSimpleTick* mutable_rankinglist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >*
      mutable_rankinglist();
  const ::com::htsc::mdc::insight::model::MDSimpleTick& rankinglist(int index) const;
  ::com::htsc::mdc::insight::model::MDSimpleTick* add_rankinglist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >&
      rankinglist() const;

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

  // .com.htsc.mdc.insight.model.MDSimpleTick TypicalValue = 8;
  bool has_typicalvalue() const;
  void clear_typicalvalue();
  static const int kTypicalValueFieldNumber = 8;
  const ::com::htsc::mdc::insight::model::MDSimpleTick& typicalvalue() const;
  ::com::htsc::mdc::insight::model::MDSimpleTick* release_typicalvalue();
  ::com::htsc::mdc::insight::model::MDSimpleTick* mutable_typicalvalue();
  void set_allocated_typicalvalue(::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue);

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

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  void clear_securityidsource();
  static const int kSecurityIDSourceFieldNumber = 5;
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  void clear_securitytype();
  static const int kSecurityTypeFieldNumber = 6;
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);

  // int32 RankingType = 7;
  void clear_rankingtype();
  static const int kRankingTypeFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::int32 rankingtype() const;
  void set_rankingtype(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeDate = 10;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate() const;
  void set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeTime = 11;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime() const;
  void set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 DataMultiplePowerOf10 = 12;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 12;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.ADIndicatorsRanking)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick > rankinglist_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
  ::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue_;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate_;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime_;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::PROTOBUF_NAMESPACE_ID::int32 rankingtype_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime_;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ADIndicatorsRanking_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ADIndicatorsRanking

// string HTSCSecurityID = 1;
inline void ADIndicatorsRanking::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ADIndicatorsRanking::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  return htscsecurityid_.GetNoArena();
}
inline void ADIndicatorsRanking::set_htscsecurityid(const std::string& value) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}
inline void ADIndicatorsRanking::set_htscsecurityid(std::string&& value) {
  
  htscsecurityid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}
inline void ADIndicatorsRanking::set_htscsecurityid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}
inline void ADIndicatorsRanking::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}
inline std::string* ADIndicatorsRanking::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ADIndicatorsRanking::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ADIndicatorsRanking::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void ADIndicatorsRanking::clear_mddate() {
  mddate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDDate)
  return mddate_;
}
inline void ADIndicatorsRanking::set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDDate)
}

// int32 MDTime = 3;
inline void ADIndicatorsRanking::clear_mdtime() {
  mdtime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDTime)
  return mdtime_;
}
inline void ADIndicatorsRanking::set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDTime)
}

// int64 DataTimestamp = 4;
inline void ADIndicatorsRanking::clear_datatimestamp() {
  datatimestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADIndicatorsRanking::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataTimestamp)
  return datatimestamp_;
}
inline void ADIndicatorsRanking::set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void ADIndicatorsRanking::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource ADIndicatorsRanking::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void ADIndicatorsRanking::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void ADIndicatorsRanking::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType ADIndicatorsRanking::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void ADIndicatorsRanking::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityType)
}

// int32 RankingType = 7;
inline void ADIndicatorsRanking::clear_rankingtype() {
  rankingtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::rankingtype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingType)
  return rankingtype_;
}
inline void ADIndicatorsRanking::set_rankingtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  rankingtype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingType)
}

// .com.htsc.mdc.insight.model.MDSimpleTick TypicalValue = 8;
inline bool ADIndicatorsRanking::has_typicalvalue() const {
  return this != internal_default_instance() && typicalvalue_ != nullptr;
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::typicalvalue() const {
  const ::com::htsc::mdc::insight::model::MDSimpleTick* p = typicalvalue_;
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  return p != nullptr ? *p : *reinterpret_cast<const ::com::htsc::mdc::insight::model::MDSimpleTick*>(
      &::com::htsc::mdc::insight::model::_MDSimpleTick_default_instance_);
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::release_typicalvalue() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  
  ::com::htsc::mdc::insight::model::MDSimpleTick* temp = typicalvalue_;
  typicalvalue_ = nullptr;
  return temp;
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::mutable_typicalvalue() {
  
  if (typicalvalue_ == nullptr) {
    auto* p = CreateMaybeMessage<::com::htsc::mdc::insight::model::MDSimpleTick>(GetArenaNoVirtual());
    typicalvalue_ = p;
  }
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  return typicalvalue_;
}
inline void ADIndicatorsRanking::set_allocated_typicalvalue(::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(typicalvalue_);
  }
  if (typicalvalue) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      typicalvalue = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, typicalvalue, submessage_arena);
    }
    
  } else {
    
  }
  typicalvalue_ = typicalvalue;
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
}

// repeated .com.htsc.mdc.insight.model.MDSimpleTick RankingList = 9;
inline int ADIndicatorsRanking::rankinglist_size() const {
  return rankinglist_.size();
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::mutable_rankinglist(int index) {
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return rankinglist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >*
ADIndicatorsRanking::mutable_rankinglist() {
  // @@protoc_insertion_point(field_mutable_list:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return &rankinglist_;
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::rankinglist(int index) const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return rankinglist_.Get(index);
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::add_rankinglist() {
  // @@protoc_insertion_point(field_add:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return rankinglist_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >&
ADIndicatorsRanking::rankinglist() const {
  // @@protoc_insertion_point(field_list:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return rankinglist_;
}

// int32 ExchangeDate = 10;
inline void ADIndicatorsRanking::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeDate)
  return exchangedate_;
}
inline void ADIndicatorsRanking::set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeDate)
}

// int32 ExchangeTime = 11;
inline void ADIndicatorsRanking::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeTime)
  return exchangetime_;
}
inline void ADIndicatorsRanking::set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeTime)
}

// int32 DataMultiplePowerOf10 = 12;
inline void ADIndicatorsRanking::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADIndicatorsRanking::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void ADIndicatorsRanking::set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataMultiplePowerOf10)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ADIndicatorsRanking_2eproto
