// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ADIndicatorsRanking.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ADIndicatorsRanking_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ADIndicatorsRanking_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
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
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ADIndicatorsRanking_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class ADIndicatorsRanking;
struct ADIndicatorsRankingDefaultTypeInternal;
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

class ADIndicatorsRanking final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.ADIndicatorsRanking) */ {
 public:
  inline ADIndicatorsRanking() : ADIndicatorsRanking(nullptr) {}
  ~ADIndicatorsRanking() override;
  explicit PROTOBUF_CONSTEXPR ADIndicatorsRanking(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

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
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ADIndicatorsRanking& default_instance() {
    return *internal_default_instance();
  }
  static inline const ADIndicatorsRanking* internal_default_instance() {
    return reinterpret_cast<const ADIndicatorsRanking*>(
               &_ADIndicatorsRanking_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ADIndicatorsRanking& a, ADIndicatorsRanking& b) {
    a.Swap(&b);
  }
  inline void Swap(ADIndicatorsRanking* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ADIndicatorsRanking* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ADIndicatorsRanking* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ADIndicatorsRanking>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ADIndicatorsRanking& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ADIndicatorsRanking& from) {
    ADIndicatorsRanking::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ADIndicatorsRanking* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.ADIndicatorsRanking";
  }
  protected:
  explicit ADIndicatorsRanking(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRankingListFieldNumber = 9,
    kHTSCSecurityIDFieldNumber = 1,
    kTypicalValueFieldNumber = 8,
    kMDDateFieldNumber = 2,
    kMDTimeFieldNumber = 3,
    kDataTimestampFieldNumber = 4,
    kSecurityIDSourceFieldNumber = 5,
    kSecurityTypeFieldNumber = 6,
    kRankingTypeFieldNumber = 7,
    kExchangeDateFieldNumber = 10,
    kExchangeTimeFieldNumber = 11,
    kDataMultiplePowerOf10FieldNumber = 12,
  };
  // repeated .com.htsc.mdc.insight.model.MDSimpleTick RankingList = 9;
  int rankinglist_size() const;
  private:
  int _internal_rankinglist_size() const;
  public:
  void clear_rankinglist();
  ::com::htsc::mdc::insight::model::MDSimpleTick* mutable_rankinglist(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >*
      mutable_rankinglist();
  private:
  const ::com::htsc::mdc::insight::model::MDSimpleTick& _internal_rankinglist(int index) const;
  ::com::htsc::mdc::insight::model::MDSimpleTick* _internal_add_rankinglist();
  public:
  const ::com::htsc::mdc::insight::model::MDSimpleTick& rankinglist(int index) const;
  ::com::htsc::mdc::insight::model::MDSimpleTick* add_rankinglist();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >&
      rankinglist() const;

  // string HTSCSecurityID = 1;
  void clear_htscsecurityid();
  const std::string& htscsecurityid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_htscsecurityid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_htscsecurityid();
  PROTOBUF_NODISCARD std::string* release_htscsecurityid();
  void set_allocated_htscsecurityid(std::string* htscsecurityid);
  private:
  const std::string& _internal_htscsecurityid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_htscsecurityid(const std::string& value);
  std::string* _internal_mutable_htscsecurityid();
  public:

  // .com.htsc.mdc.insight.model.MDSimpleTick TypicalValue = 8;
  bool has_typicalvalue() const;
  private:
  bool _internal_has_typicalvalue() const;
  public:
  void clear_typicalvalue();
  const ::com::htsc::mdc::insight::model::MDSimpleTick& typicalvalue() const;
  PROTOBUF_NODISCARD ::com::htsc::mdc::insight::model::MDSimpleTick* release_typicalvalue();
  ::com::htsc::mdc::insight::model::MDSimpleTick* mutable_typicalvalue();
  void set_allocated_typicalvalue(::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue);
  private:
  const ::com::htsc::mdc::insight::model::MDSimpleTick& _internal_typicalvalue() const;
  ::com::htsc::mdc::insight::model::MDSimpleTick* _internal_mutable_typicalvalue();
  public:
  void unsafe_arena_set_allocated_typicalvalue(
      ::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue);
  ::com::htsc::mdc::insight::model::MDSimpleTick* unsafe_arena_release_typicalvalue();

  // int32 MDDate = 2;
  void clear_mddate();
  int32_t mddate() const;
  void set_mddate(int32_t value);
  private:
  int32_t _internal_mddate() const;
  void _internal_set_mddate(int32_t value);
  public:

  // int32 MDTime = 3;
  void clear_mdtime();
  int32_t mdtime() const;
  void set_mdtime(int32_t value);
  private:
  int32_t _internal_mdtime() const;
  void _internal_set_mdtime(int32_t value);
  public:

  // int64 DataTimestamp = 4;
  void clear_datatimestamp();
  int64_t datatimestamp() const;
  void set_datatimestamp(int64_t value);
  private:
  int64_t _internal_datatimestamp() const;
  void _internal_set_datatimestamp(int64_t value);
  public:

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
  void clear_securityidsource();
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  private:
  ::com::htsc::mdc::model::ESecurityIDSource _internal_securityidsource() const;
  void _internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  public:

  // .com.htsc.mdc.model.ESecurityType securityType = 6;
  void clear_securitytype();
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  private:
  ::com::htsc::mdc::model::ESecurityType _internal_securitytype() const;
  void _internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  public:

  // int32 RankingType = 7;
  void clear_rankingtype();
  int32_t rankingtype() const;
  void set_rankingtype(int32_t value);
  private:
  int32_t _internal_rankingtype() const;
  void _internal_set_rankingtype(int32_t value);
  public:

  // int32 ExchangeDate = 10;
  void clear_exchangedate();
  int32_t exchangedate() const;
  void set_exchangedate(int32_t value);
  private:
  int32_t _internal_exchangedate() const;
  void _internal_set_exchangedate(int32_t value);
  public:

  // int32 ExchangeTime = 11;
  void clear_exchangetime();
  int32_t exchangetime() const;
  void set_exchangetime(int32_t value);
  private:
  int32_t _internal_exchangetime() const;
  void _internal_set_exchangetime(int32_t value);
  public:

  // int32 DataMultiplePowerOf10 = 12;
  void clear_datamultiplepowerof10();
  int32_t datamultiplepowerof10() const;
  void set_datamultiplepowerof10(int32_t value);
  private:
  int32_t _internal_datamultiplepowerof10() const;
  void _internal_set_datamultiplepowerof10(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.ADIndicatorsRanking)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick > rankinglist_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
    ::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue_;
    int32_t mddate_;
    int32_t mdtime_;
    int64_t datatimestamp_;
    int securityidsource_;
    int securitytype_;
    int32_t rankingtype_;
    int32_t exchangedate_;
    int32_t exchangetime_;
    int32_t datamultiplepowerof10_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
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
  _impl_.htscsecurityid_.ClearToEmpty();
}
inline const std::string& ADIndicatorsRanking::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  return _internal_htscsecurityid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ADIndicatorsRanking::set_htscsecurityid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.htscsecurityid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}
inline std::string* ADIndicatorsRanking::mutable_htscsecurityid() {
  std::string* _s = _internal_mutable_htscsecurityid();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  return _s;
}
inline const std::string& ADIndicatorsRanking::_internal_htscsecurityid() const {
  return _impl_.htscsecurityid_.Get();
}
inline void ADIndicatorsRanking::_internal_set_htscsecurityid(const std::string& value) {
  
  _impl_.htscsecurityid_.Set(value, GetArenaForAllocation());
}
inline std::string* ADIndicatorsRanking::_internal_mutable_htscsecurityid() {
  
  return _impl_.htscsecurityid_.Mutable(GetArenaForAllocation());
}
inline std::string* ADIndicatorsRanking::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
  return _impl_.htscsecurityid_.Release();
}
inline void ADIndicatorsRanking::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  _impl_.htscsecurityid_.SetAllocated(htscsecurityid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.htscsecurityid_.IsDefault()) {
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.ADIndicatorsRanking.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void ADIndicatorsRanking::clear_mddate() {
  _impl_.mddate_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_mddate() const {
  return _impl_.mddate_;
}
inline int32_t ADIndicatorsRanking::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDDate)
  return _internal_mddate();
}
inline void ADIndicatorsRanking::_internal_set_mddate(int32_t value) {
  
  _impl_.mddate_ = value;
}
inline void ADIndicatorsRanking::set_mddate(int32_t value) {
  _internal_set_mddate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDDate)
}

// int32 MDTime = 3;
inline void ADIndicatorsRanking::clear_mdtime() {
  _impl_.mdtime_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_mdtime() const {
  return _impl_.mdtime_;
}
inline int32_t ADIndicatorsRanking::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDTime)
  return _internal_mdtime();
}
inline void ADIndicatorsRanking::_internal_set_mdtime(int32_t value) {
  
  _impl_.mdtime_ = value;
}
inline void ADIndicatorsRanking::set_mdtime(int32_t value) {
  _internal_set_mdtime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.MDTime)
}

// int64 DataTimestamp = 4;
inline void ADIndicatorsRanking::clear_datatimestamp() {
  _impl_.datatimestamp_ = int64_t{0};
}
inline int64_t ADIndicatorsRanking::_internal_datatimestamp() const {
  return _impl_.datatimestamp_;
}
inline int64_t ADIndicatorsRanking::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataTimestamp)
  return _internal_datatimestamp();
}
inline void ADIndicatorsRanking::_internal_set_datatimestamp(int64_t value) {
  
  _impl_.datatimestamp_ = value;
}
inline void ADIndicatorsRanking::set_datatimestamp(int64_t value) {
  _internal_set_datatimestamp(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void ADIndicatorsRanking::clear_securityidsource() {
  _impl_.securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource ADIndicatorsRanking::_internal_securityidsource() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(_impl_.securityidsource_);
}
inline ::com::htsc::mdc::model::ESecurityIDSource ADIndicatorsRanking::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityIDSource)
  return _internal_securityidsource();
}
inline void ADIndicatorsRanking::_internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  _impl_.securityidsource_ = value;
}
inline void ADIndicatorsRanking::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  _internal_set_securityidsource(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void ADIndicatorsRanking::clear_securitytype() {
  _impl_.securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType ADIndicatorsRanking::_internal_securitytype() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(_impl_.securitytype_);
}
inline ::com::htsc::mdc::model::ESecurityType ADIndicatorsRanking::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityType)
  return _internal_securitytype();
}
inline void ADIndicatorsRanking::_internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  _impl_.securitytype_ = value;
}
inline void ADIndicatorsRanking::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  _internal_set_securitytype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.securityType)
}

// int32 RankingType = 7;
inline void ADIndicatorsRanking::clear_rankingtype() {
  _impl_.rankingtype_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_rankingtype() const {
  return _impl_.rankingtype_;
}
inline int32_t ADIndicatorsRanking::rankingtype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingType)
  return _internal_rankingtype();
}
inline void ADIndicatorsRanking::_internal_set_rankingtype(int32_t value) {
  
  _impl_.rankingtype_ = value;
}
inline void ADIndicatorsRanking::set_rankingtype(int32_t value) {
  _internal_set_rankingtype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingType)
}

// .com.htsc.mdc.insight.model.MDSimpleTick TypicalValue = 8;
inline bool ADIndicatorsRanking::_internal_has_typicalvalue() const {
  return this != internal_default_instance() && _impl_.typicalvalue_ != nullptr;
}
inline bool ADIndicatorsRanking::has_typicalvalue() const {
  return _internal_has_typicalvalue();
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::_internal_typicalvalue() const {
  const ::com::htsc::mdc::insight::model::MDSimpleTick* p = _impl_.typicalvalue_;
  return p != nullptr ? *p : reinterpret_cast<const ::com::htsc::mdc::insight::model::MDSimpleTick&>(
      ::com::htsc::mdc::insight::model::_MDSimpleTick_default_instance_);
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::typicalvalue() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  return _internal_typicalvalue();
}
inline void ADIndicatorsRanking::unsafe_arena_set_allocated_typicalvalue(
    ::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.typicalvalue_);
  }
  _impl_.typicalvalue_ = typicalvalue;
  if (typicalvalue) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::release_typicalvalue() {
  
  ::com::htsc::mdc::insight::model::MDSimpleTick* temp = _impl_.typicalvalue_;
  _impl_.typicalvalue_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::unsafe_arena_release_typicalvalue() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  
  ::com::htsc::mdc::insight::model::MDSimpleTick* temp = _impl_.typicalvalue_;
  _impl_.typicalvalue_ = nullptr;
  return temp;
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::_internal_mutable_typicalvalue() {
  
  if (_impl_.typicalvalue_ == nullptr) {
    auto* p = CreateMaybeMessage<::com::htsc::mdc::insight::model::MDSimpleTick>(GetArenaForAllocation());
    _impl_.typicalvalue_ = p;
  }
  return _impl_.typicalvalue_;
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::mutable_typicalvalue() {
  ::com::htsc::mdc::insight::model::MDSimpleTick* _msg = _internal_mutable_typicalvalue();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
  return _msg;
}
inline void ADIndicatorsRanking::set_allocated_typicalvalue(::com::htsc::mdc::insight::model::MDSimpleTick* typicalvalue) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.typicalvalue_);
  }
  if (typicalvalue) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(typicalvalue));
    if (message_arena != submessage_arena) {
      typicalvalue = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, typicalvalue, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.typicalvalue_ = typicalvalue;
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.ADIndicatorsRanking.TypicalValue)
}

// repeated .com.htsc.mdc.insight.model.MDSimpleTick RankingList = 9;
inline int ADIndicatorsRanking::_internal_rankinglist_size() const {
  return _impl_.rankinglist_.size();
}
inline int ADIndicatorsRanking::rankinglist_size() const {
  return _internal_rankinglist_size();
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::mutable_rankinglist(int index) {
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return _impl_.rankinglist_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >*
ADIndicatorsRanking::mutable_rankinglist() {
  // @@protoc_insertion_point(field_mutable_list:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return &_impl_.rankinglist_;
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::_internal_rankinglist(int index) const {
  return _impl_.rankinglist_.Get(index);
}
inline const ::com::htsc::mdc::insight::model::MDSimpleTick& ADIndicatorsRanking::rankinglist(int index) const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return _internal_rankinglist(index);
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::_internal_add_rankinglist() {
  return _impl_.rankinglist_.Add();
}
inline ::com::htsc::mdc::insight::model::MDSimpleTick* ADIndicatorsRanking::add_rankinglist() {
  ::com::htsc::mdc::insight::model::MDSimpleTick* _add = _internal_add_rankinglist();
  // @@protoc_insertion_point(field_add:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::htsc::mdc::insight::model::MDSimpleTick >&
ADIndicatorsRanking::rankinglist() const {
  // @@protoc_insertion_point(field_list:com.htsc.mdc.insight.model.ADIndicatorsRanking.RankingList)
  return _impl_.rankinglist_;
}

// int32 ExchangeDate = 10;
inline void ADIndicatorsRanking::clear_exchangedate() {
  _impl_.exchangedate_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_exchangedate() const {
  return _impl_.exchangedate_;
}
inline int32_t ADIndicatorsRanking::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeDate)
  return _internal_exchangedate();
}
inline void ADIndicatorsRanking::_internal_set_exchangedate(int32_t value) {
  
  _impl_.exchangedate_ = value;
}
inline void ADIndicatorsRanking::set_exchangedate(int32_t value) {
  _internal_set_exchangedate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeDate)
}

// int32 ExchangeTime = 11;
inline void ADIndicatorsRanking::clear_exchangetime() {
  _impl_.exchangetime_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_exchangetime() const {
  return _impl_.exchangetime_;
}
inline int32_t ADIndicatorsRanking::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeTime)
  return _internal_exchangetime();
}
inline void ADIndicatorsRanking::_internal_set_exchangetime(int32_t value) {
  
  _impl_.exchangetime_ = value;
}
inline void ADIndicatorsRanking::set_exchangetime(int32_t value) {
  _internal_set_exchangetime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.ADIndicatorsRanking.ExchangeTime)
}

// int32 DataMultiplePowerOf10 = 12;
inline void ADIndicatorsRanking::clear_datamultiplepowerof10() {
  _impl_.datamultiplepowerof10_ = 0;
}
inline int32_t ADIndicatorsRanking::_internal_datamultiplepowerof10() const {
  return _impl_.datamultiplepowerof10_;
}
inline int32_t ADIndicatorsRanking::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.ADIndicatorsRanking.DataMultiplePowerOf10)
  return _internal_datamultiplepowerof10();
}
inline void ADIndicatorsRanking::_internal_set_datamultiplepowerof10(int32_t value) {
  
  _impl_.datamultiplepowerof10_ = value;
}
inline void ADIndicatorsRanking::set_datamultiplepowerof10(int32_t value) {
  _internal_set_datamultiplepowerof10(value);
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
