// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ADVolumeByPrice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ADVolumeByPrice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ADVolumeByPrice_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ADVolumeByPrice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ADVolumeByPrice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ADVolumeByPrice_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class ADVolumeByPrice;
class ADVolumeByPriceDefaultTypeInternal;
extern ADVolumeByPriceDefaultTypeInternal _ADVolumeByPrice_default_instance_;
class ADVolumeByPriceDetail;
class ADVolumeByPriceDetailDefaultTypeInternal;
extern ADVolumeByPriceDetailDefaultTypeInternal _ADVolumeByPriceDetail_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::ADVolumeByPrice* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::ADVolumeByPrice>(Arena*);
template<> ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::ADVolumeByPriceDetail>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class ADVolumeByPrice :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.ADVolumeByPrice) */ {
 public:
  ADVolumeByPrice();
  virtual ~ADVolumeByPrice();

  ADVolumeByPrice(const ADVolumeByPrice& from);
  ADVolumeByPrice(ADVolumeByPrice&& from) noexcept
    : ADVolumeByPrice() {
    *this = ::std::move(from);
  }

  inline ADVolumeByPrice& operator=(const ADVolumeByPrice& from) {
    CopyFrom(from);
    return *this;
  }
  inline ADVolumeByPrice& operator=(ADVolumeByPrice&& from) noexcept {
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
  static const ADVolumeByPrice& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ADVolumeByPrice* internal_default_instance() {
    return reinterpret_cast<const ADVolumeByPrice*>(
               &_ADVolumeByPrice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ADVolumeByPrice* other);
  friend void swap(ADVolumeByPrice& a, ADVolumeByPrice& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ADVolumeByPrice* New() const final {
    return CreateMaybeMessage<ADVolumeByPrice>(nullptr);
  }

  ADVolumeByPrice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ADVolumeByPrice>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ADVolumeByPrice& from);
  void MergeFrom(const ADVolumeByPrice& from);
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
  void InternalSwap(ADVolumeByPrice* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.ADVolumeByPrice";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ADVolumeByPrice_2eproto);
    return ::descriptor_table_ADVolumeByPrice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com.htsc.mdc.insight.model.ADVolumeByPriceDetail Details = 8;
  int details_size() const;
  void clear_details();
  static const int kDetailsFieldNumber = 8;
  ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail* mutable_details(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail >*
      mutable_details();
  const ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail& details(int index) const;
  ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail* add_details();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail >&
      details() const;

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

  // int64 TotalVolumeTrade = 7;
  void clear_totalvolumetrade();
  static const int kTotalVolumeTradeFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvolumetrade() const;
  void set_totalvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int32 ExchangeDate = 9;
  void clear_exchangedate();
  static const int kExchangeDateFieldNumber = 9;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate() const;
  void set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 ExchangeTime = 10;
  void clear_exchangetime();
  static const int kExchangeTimeFieldNumber = 10;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime() const;
  void set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 DataMultiplePowerOf10 = 11;
  void clear_datamultiplepowerof10();
  static const int kDataMultiplePowerOf10FieldNumber = 11;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10() const;
  void set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.ADVolumeByPrice)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail > details_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
  ::PROTOBUF_NAMESPACE_ID::int32 mddate_;
  ::PROTOBUF_NAMESPACE_ID::int32 mdtime_;
  ::PROTOBUF_NAMESPACE_ID::int64 datatimestamp_;
  int securityidsource_;
  int securitytype_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalvolumetrade_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangedate_;
  ::PROTOBUF_NAMESPACE_ID::int32 exchangetime_;
  ::PROTOBUF_NAMESPACE_ID::int32 datamultiplepowerof10_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ADVolumeByPrice_2eproto;
};
// -------------------------------------------------------------------

class ADVolumeByPriceDetail :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.ADVolumeByPriceDetail) */ {
 public:
  ADVolumeByPriceDetail();
  virtual ~ADVolumeByPriceDetail();

  ADVolumeByPriceDetail(const ADVolumeByPriceDetail& from);
  ADVolumeByPriceDetail(ADVolumeByPriceDetail&& from) noexcept
    : ADVolumeByPriceDetail() {
    *this = ::std::move(from);
  }

  inline ADVolumeByPriceDetail& operator=(const ADVolumeByPriceDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline ADVolumeByPriceDetail& operator=(ADVolumeByPriceDetail&& from) noexcept {
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
  static const ADVolumeByPriceDetail& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ADVolumeByPriceDetail* internal_default_instance() {
    return reinterpret_cast<const ADVolumeByPriceDetail*>(
               &_ADVolumeByPriceDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ADVolumeByPriceDetail* other);
  friend void swap(ADVolumeByPriceDetail& a, ADVolumeByPriceDetail& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ADVolumeByPriceDetail* New() const final {
    return CreateMaybeMessage<ADVolumeByPriceDetail>(nullptr);
  }

  ADVolumeByPriceDetail* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ADVolumeByPriceDetail>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ADVolumeByPriceDetail& from);
  void MergeFrom(const ADVolumeByPriceDetail& from);
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
  void InternalSwap(ADVolumeByPriceDetail* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.ADVolumeByPriceDetail";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ADVolumeByPrice_2eproto);
    return ::descriptor_table_ADVolumeByPrice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 TradePrice = 1;
  void clear_tradeprice();
  static const int kTradePriceFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int64 tradeprice() const;
  void set_tradeprice(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalQty = 2;
  void clear_totalqty();
  static const int kTotalQtyFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::int64 totalqty() const;
  void set_totalqty(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 BuyQty = 3;
  void clear_buyqty();
  static const int kBuyQtyFieldNumber = 3;
  ::PROTOBUF_NAMESPACE_ID::int64 buyqty() const;
  void set_buyqty(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 SellQty = 4;
  void clear_sellqty();
  static const int kSellQtyFieldNumber = 4;
  ::PROTOBUF_NAMESPACE_ID::int64 sellqty() const;
  void set_sellqty(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 TotalNumbers = 5;
  void clear_totalnumbers();
  static const int kTotalNumbersFieldNumber = 5;
  ::PROTOBUF_NAMESPACE_ID::int64 totalnumbers() const;
  void set_totalnumbers(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 BuyNumbers = 6;
  void clear_buynumbers();
  static const int kBuyNumbersFieldNumber = 6;
  ::PROTOBUF_NAMESPACE_ID::int64 buynumbers() const;
  void set_buynumbers(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 SellNumbers = 7;
  void clear_sellnumbers();
  static const int kSellNumbersFieldNumber = 7;
  ::PROTOBUF_NAMESPACE_ID::int64 sellnumbers() const;
  void set_sellnumbers(::PROTOBUF_NAMESPACE_ID::int64 value);

  // int64 VolumePerNumber = 8;
  void clear_volumepernumber();
  static const int kVolumePerNumberFieldNumber = 8;
  ::PROTOBUF_NAMESPACE_ID::int64 volumepernumber() const;
  void set_volumepernumber(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.ADVolumeByPriceDetail)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int64 tradeprice_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalqty_;
  ::PROTOBUF_NAMESPACE_ID::int64 buyqty_;
  ::PROTOBUF_NAMESPACE_ID::int64 sellqty_;
  ::PROTOBUF_NAMESPACE_ID::int64 totalnumbers_;
  ::PROTOBUF_NAMESPACE_ID::int64 buynumbers_;
  ::PROTOBUF_NAMESPACE_ID::int64 sellnumbers_;
  ::PROTOBUF_NAMESPACE_ID::int64 volumepernumber_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ADVolumeByPrice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ADVolumeByPrice

// string HTSCSecurityID = 1;
inline void ADVolumeByPrice::clear_htscsecurityid() {
  htscsecurityid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ADVolumeByPrice::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
  return htscsecurityid_.GetNoArena();
}
inline void ADVolumeByPrice::set_htscsecurityid(const std::string& value) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
}
inline void ADVolumeByPrice::set_htscsecurityid(std::string&& value) {
  
  htscsecurityid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
}
inline void ADVolumeByPrice::set_htscsecurityid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
}
inline void ADVolumeByPrice::set_htscsecurityid(const char* value, size_t size) {
  
  htscsecurityid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
}
inline std::string* ADVolumeByPrice::mutable_htscsecurityid() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
  return htscsecurityid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ADVolumeByPrice::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
  
  return htscsecurityid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ADVolumeByPrice::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  htscsecurityid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), htscsecurityid);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.ADVolumeByPrice.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void ADVolumeByPrice::clear_mddate() {
  mddate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADVolumeByPrice::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.MDDate)
  return mddate_;
}
inline void ADVolumeByPrice::set_mddate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mddate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.MDDate)
}

// int32 MDTime = 3;
inline void ADVolumeByPrice::clear_mdtime() {
  mdtime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADVolumeByPrice::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.MDTime)
  return mdtime_;
}
inline void ADVolumeByPrice::set_mdtime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  mdtime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.MDTime)
}

// int64 DataTimestamp = 4;
inline void ADVolumeByPrice::clear_datatimestamp() {
  datatimestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPrice::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.DataTimestamp)
  return datatimestamp_;
}
inline void ADVolumeByPrice::set_datatimestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  datatimestamp_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void ADVolumeByPrice::clear_securityidsource() {
  securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource ADVolumeByPrice::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.securityIDSource)
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(securityidsource_);
}
inline void ADVolumeByPrice::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  securityidsource_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void ADVolumeByPrice::clear_securitytype() {
  securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType ADVolumeByPrice::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.securityType)
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(securitytype_);
}
inline void ADVolumeByPrice::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  securitytype_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.securityType)
}

// int64 TotalVolumeTrade = 7;
inline void ADVolumeByPrice::clear_totalvolumetrade() {
  totalvolumetrade_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPrice::totalvolumetrade() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.TotalVolumeTrade)
  return totalvolumetrade_;
}
inline void ADVolumeByPrice::set_totalvolumetrade(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalvolumetrade_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.TotalVolumeTrade)
}

// repeated .com.htsc.mdc.insight.model.ADVolumeByPriceDetail Details = 8;
inline int ADVolumeByPrice::details_size() const {
  return details_.size();
}
inline void ADVolumeByPrice::clear_details() {
  details_.Clear();
}
inline ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail* ADVolumeByPrice::mutable_details(int index) {
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADVolumeByPrice.Details)
  return details_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail >*
ADVolumeByPrice::mutable_details() {
  // @@protoc_insertion_point(field_mutable_list:com.htsc.mdc.insight.model.ADVolumeByPrice.Details)
  return &details_;
}
inline const ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail& ADVolumeByPrice::details(int index) const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.Details)
  return details_.Get(index);
}
inline ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail* ADVolumeByPrice::add_details() {
  // @@protoc_insertion_point(field_add:com.htsc.mdc.insight.model.ADVolumeByPrice.Details)
  return details_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::ADVolumeByPriceDetail >&
ADVolumeByPrice::details() const {
  // @@protoc_insertion_point(field_list:com.htsc.mdc.insight.model.ADVolumeByPrice.Details)
  return details_;
}

// int32 ExchangeDate = 9;
inline void ADVolumeByPrice::clear_exchangedate() {
  exchangedate_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADVolumeByPrice::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.ExchangeDate)
  return exchangedate_;
}
inline void ADVolumeByPrice::set_exchangedate(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangedate_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.ExchangeDate)
}

// int32 ExchangeTime = 10;
inline void ADVolumeByPrice::clear_exchangetime() {
  exchangetime_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADVolumeByPrice::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.ExchangeTime)
  return exchangetime_;
}
inline void ADVolumeByPrice::set_exchangetime(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  exchangetime_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.ExchangeTime)
}

// int32 DataMultiplePowerOf10 = 11;
inline void ADVolumeByPrice::clear_datamultiplepowerof10() {
  datamultiplepowerof10_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ADVolumeByPrice::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPrice.DataMultiplePowerOf10)
  return datamultiplepowerof10_;
}
inline void ADVolumeByPrice::set_datamultiplepowerof10(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  datamultiplepowerof10_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPrice.DataMultiplePowerOf10)
}

// -------------------------------------------------------------------

// ADVolumeByPriceDetail

// int64 TradePrice = 1;
inline void ADVolumeByPriceDetail::clear_tradeprice() {
  tradeprice_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::tradeprice() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TradePrice)
  return tradeprice_;
}
inline void ADVolumeByPriceDetail::set_tradeprice(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  tradeprice_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TradePrice)
}

// int64 TotalQty = 2;
inline void ADVolumeByPriceDetail::clear_totalqty() {
  totalqty_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::totalqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TotalQty)
  return totalqty_;
}
inline void ADVolumeByPriceDetail::set_totalqty(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalqty_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TotalQty)
}

// int64 BuyQty = 3;
inline void ADVolumeByPriceDetail::clear_buyqty() {
  buyqty_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::buyqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.BuyQty)
  return buyqty_;
}
inline void ADVolumeByPriceDetail::set_buyqty(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  buyqty_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.BuyQty)
}

// int64 SellQty = 4;
inline void ADVolumeByPriceDetail::clear_sellqty() {
  sellqty_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::sellqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.SellQty)
  return sellqty_;
}
inline void ADVolumeByPriceDetail::set_sellqty(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sellqty_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.SellQty)
}

// int64 TotalNumbers = 5;
inline void ADVolumeByPriceDetail::clear_totalnumbers() {
  totalnumbers_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::totalnumbers() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TotalNumbers)
  return totalnumbers_;
}
inline void ADVolumeByPriceDetail::set_totalnumbers(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  totalnumbers_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.TotalNumbers)
}

// int64 BuyNumbers = 6;
inline void ADVolumeByPriceDetail::clear_buynumbers() {
  buynumbers_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::buynumbers() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.BuyNumbers)
  return buynumbers_;
}
inline void ADVolumeByPriceDetail::set_buynumbers(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  buynumbers_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.BuyNumbers)
}

// int64 SellNumbers = 7;
inline void ADVolumeByPriceDetail::clear_sellnumbers() {
  sellnumbers_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::sellnumbers() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.SellNumbers)
  return sellnumbers_;
}
inline void ADVolumeByPriceDetail::set_sellnumbers(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  sellnumbers_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.SellNumbers)
}

// int64 VolumePerNumber = 8;
inline void ADVolumeByPriceDetail::clear_volumepernumber() {
  volumepernumber_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ADVolumeByPriceDetail::volumepernumber() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.VolumePerNumber)
  return volumepernumber_;
}
inline void ADVolumeByPriceDetail::set_volumepernumber(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  volumepernumber_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADVolumeByPriceDetail.VolumePerNumber)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ADVolumeByPrice_2eproto