// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLStatistics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDSLStatistics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDSLStatistics_2eproto

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
#include "ESecurityIDSource.pb.h"
#include "ESecurityType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MDSLStatistics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MDSLStatistics_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDSLStatistics_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDSLStatistics;
struct MDSLStatisticsDefaultTypeInternal;
extern MDSLStatisticsDefaultTypeInternal _MDSLStatistics_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::MDSLStatistics* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::MDSLStatistics>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDSLStatistics final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDSLStatistics) */ {
 public:
  inline MDSLStatistics() : MDSLStatistics(nullptr) {}
  ~MDSLStatistics() override;
  explicit PROTOBUF_CONSTEXPR MDSLStatistics(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MDSLStatistics(const MDSLStatistics& from);
  MDSLStatistics(MDSLStatistics&& from) noexcept
    : MDSLStatistics() {
    *this = ::std::move(from);
  }

  inline MDSLStatistics& operator=(const MDSLStatistics& from) {
    CopyFrom(from);
    return *this;
  }
  inline MDSLStatistics& operator=(MDSLStatistics&& from) noexcept {
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
  static const MDSLStatistics& default_instance() {
    return *internal_default_instance();
  }
  static inline const MDSLStatistics* internal_default_instance() {
    return reinterpret_cast<const MDSLStatistics*>(
               &_MDSLStatistics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MDSLStatistics& a, MDSLStatistics& b) {
    a.Swap(&b);
  }
  inline void Swap(MDSLStatistics* other) {
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
  void UnsafeArenaSwap(MDSLStatistics* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MDSLStatistics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MDSLStatistics>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MDSLStatistics& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MDSLStatistics& from) {
    MDSLStatistics::MergeImpl(*this, from);
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
  void InternalSwap(MDSLStatistics* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDSLStatistics";
  }
  protected:
  explicit MDSLStatistics(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHTSCSecurityIDFieldNumber = 1,
    kTradingPhaseCodeFieldNumber = 5,
    kTradeDateFieldNumber = 11,
    kMDDateFieldNumber = 2,
    kMDTimeFieldNumber = 3,
    kDataTimestampFieldNumber = 4,
    kSecurityIDSourceFieldNumber = 6,
    kSecurityTypeFieldNumber = 7,
    kHtscBorrowTradeVolumeFieldNumber = 8,
    kHtscLendTradeVolumeFieldNumber = 9,
    kMarketTradeVolumeFieldNumber = 10,
    kDataMultiplePowerOf10FieldNumber = 12,
  };
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

  // string TradingPhaseCode = 5;
  void clear_tradingphasecode();
  const std::string& tradingphasecode() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tradingphasecode(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tradingphasecode();
  PROTOBUF_NODISCARD std::string* release_tradingphasecode();
  void set_allocated_tradingphasecode(std::string* tradingphasecode);
  private:
  const std::string& _internal_tradingphasecode() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tradingphasecode(const std::string& value);
  std::string* _internal_mutable_tradingphasecode();
  public:

  // string TradeDate = 11;
  void clear_tradedate();
  const std::string& tradedate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tradedate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tradedate();
  PROTOBUF_NODISCARD std::string* release_tradedate();
  void set_allocated_tradedate(std::string* tradedate);
  private:
  const std::string& _internal_tradedate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tradedate(const std::string& value);
  std::string* _internal_mutable_tradedate();
  public:

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

  // .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
  void clear_securityidsource();
  ::com::htsc::mdc::model::ESecurityIDSource securityidsource() const;
  void set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  private:
  ::com::htsc::mdc::model::ESecurityIDSource _internal_securityidsource() const;
  void _internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value);
  public:

  // .com.htsc.mdc.model.ESecurityType securityType = 7;
  void clear_securitytype();
  ::com::htsc::mdc::model::ESecurityType securitytype() const;
  void set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  private:
  ::com::htsc::mdc::model::ESecurityType _internal_securitytype() const;
  void _internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value);
  public:

  // int64 HtscBorrowTradeVolume = 8;
  void clear_htscborrowtradevolume();
  int64_t htscborrowtradevolume() const;
  void set_htscborrowtradevolume(int64_t value);
  private:
  int64_t _internal_htscborrowtradevolume() const;
  void _internal_set_htscborrowtradevolume(int64_t value);
  public:

  // int64 HtscLendTradeVolume = 9;
  void clear_htsclendtradevolume();
  int64_t htsclendtradevolume() const;
  void set_htsclendtradevolume(int64_t value);
  private:
  int64_t _internal_htsclendtradevolume() const;
  void _internal_set_htsclendtradevolume(int64_t value);
  public:

  // int64 MarketTradeVolume = 10;
  void clear_markettradevolume();
  int64_t markettradevolume() const;
  void set_markettradevolume(int64_t value);
  private:
  int64_t _internal_markettradevolume() const;
  void _internal_set_markettradevolume(int64_t value);
  public:

  // int32 DataMultiplePowerOf10 = 12;
  void clear_datamultiplepowerof10();
  int32_t datamultiplepowerof10() const;
  void set_datamultiplepowerof10(int32_t value);
  private:
  int32_t _internal_datamultiplepowerof10() const;
  void _internal_set_datamultiplepowerof10(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDSLStatistics)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tradingphasecode_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tradedate_;
    int32_t mddate_;
    int32_t mdtime_;
    int64_t datatimestamp_;
    int securityidsource_;
    int securitytype_;
    int64_t htscborrowtradevolume_;
    int64_t htsclendtradevolume_;
    int64_t markettradevolume_;
    int32_t datamultiplepowerof10_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MDSLStatistics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MDSLStatistics

// string HTSCSecurityID = 1;
inline void MDSLStatistics::clear_htscsecurityid() {
  _impl_.htscsecurityid_.ClearToEmpty();
}
inline const std::string& MDSLStatistics::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  return _internal_htscsecurityid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDSLStatistics::set_htscsecurityid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.htscsecurityid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}
inline std::string* MDSLStatistics::mutable_htscsecurityid() {
  std::string* _s = _internal_mutable_htscsecurityid();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  return _s;
}
inline const std::string& MDSLStatistics::_internal_htscsecurityid() const {
  return _impl_.htscsecurityid_.Get();
}
inline void MDSLStatistics::_internal_set_htscsecurityid(const std::string& value) {
  
  _impl_.htscsecurityid_.Set(value, GetArenaForAllocation());
}
inline std::string* MDSLStatistics::_internal_mutable_htscsecurityid() {
  
  return _impl_.htscsecurityid_.Mutable(GetArenaForAllocation());
}
inline std::string* MDSLStatistics::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
  return _impl_.htscsecurityid_.Release();
}
inline void MDSLStatistics::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  _impl_.htscsecurityid_.SetAllocated(htscsecurityid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.htscsecurityid_.IsDefault()) {
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void MDSLStatistics::clear_mddate() {
  _impl_.mddate_ = 0;
}
inline int32_t MDSLStatistics::_internal_mddate() const {
  return _impl_.mddate_;
}
inline int32_t MDSLStatistics::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MDDate)
  return _internal_mddate();
}
inline void MDSLStatistics::_internal_set_mddate(int32_t value) {
  
  _impl_.mddate_ = value;
}
inline void MDSLStatistics::set_mddate(int32_t value) {
  _internal_set_mddate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MDDate)
}

// int32 MDTime = 3;
inline void MDSLStatistics::clear_mdtime() {
  _impl_.mdtime_ = 0;
}
inline int32_t MDSLStatistics::_internal_mdtime() const {
  return _impl_.mdtime_;
}
inline int32_t MDSLStatistics::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MDTime)
  return _internal_mdtime();
}
inline void MDSLStatistics::_internal_set_mdtime(int32_t value) {
  
  _impl_.mdtime_ = value;
}
inline void MDSLStatistics::set_mdtime(int32_t value) {
  _internal_set_mdtime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MDTime)
}

// int64 DataTimestamp = 4;
inline void MDSLStatistics::clear_datatimestamp() {
  _impl_.datatimestamp_ = int64_t{0};
}
inline int64_t MDSLStatistics::_internal_datatimestamp() const {
  return _impl_.datatimestamp_;
}
inline int64_t MDSLStatistics::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.DataTimestamp)
  return _internal_datatimestamp();
}
inline void MDSLStatistics::_internal_set_datatimestamp(int64_t value) {
  
  _impl_.datatimestamp_ = value;
}
inline void MDSLStatistics::set_datatimestamp(int64_t value) {
  _internal_set_datatimestamp(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.DataTimestamp)
}

// string TradingPhaseCode = 5;
inline void MDSLStatistics::clear_tradingphasecode() {
  _impl_.tradingphasecode_.ClearToEmpty();
}
inline const std::string& MDSLStatistics::tradingphasecode() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  return _internal_tradingphasecode();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDSLStatistics::set_tradingphasecode(ArgT0&& arg0, ArgT... args) {
 
 _impl_.tradingphasecode_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}
inline std::string* MDSLStatistics::mutable_tradingphasecode() {
  std::string* _s = _internal_mutable_tradingphasecode();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  return _s;
}
inline const std::string& MDSLStatistics::_internal_tradingphasecode() const {
  return _impl_.tradingphasecode_.Get();
}
inline void MDSLStatistics::_internal_set_tradingphasecode(const std::string& value) {
  
  _impl_.tradingphasecode_.Set(value, GetArenaForAllocation());
}
inline std::string* MDSLStatistics::_internal_mutable_tradingphasecode() {
  
  return _impl_.tradingphasecode_.Mutable(GetArenaForAllocation());
}
inline std::string* MDSLStatistics::release_tradingphasecode() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
  return _impl_.tradingphasecode_.Release();
}
inline void MDSLStatistics::set_allocated_tradingphasecode(std::string* tradingphasecode) {
  if (tradingphasecode != nullptr) {
    
  } else {
    
  }
  _impl_.tradingphasecode_.SetAllocated(tradingphasecode, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.tradingphasecode_.IsDefault()) {
    _impl_.tradingphasecode_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.TradingPhaseCode)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 6;
inline void MDSLStatistics::clear_securityidsource() {
  _impl_.securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLStatistics::_internal_securityidsource() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(_impl_.securityidsource_);
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLStatistics::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.securityIDSource)
  return _internal_securityidsource();
}
inline void MDSLStatistics::_internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  _impl_.securityidsource_ = value;
}
inline void MDSLStatistics::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  _internal_set_securityidsource(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 7;
inline void MDSLStatistics::clear_securitytype() {
  _impl_.securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDSLStatistics::_internal_securitytype() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(_impl_.securitytype_);
}
inline ::com::htsc::mdc::model::ESecurityType MDSLStatistics::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.securityType)
  return _internal_securitytype();
}
inline void MDSLStatistics::_internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  _impl_.securitytype_ = value;
}
inline void MDSLStatistics::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  _internal_set_securitytype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.securityType)
}

// int64 HtscBorrowTradeVolume = 8;
inline void MDSLStatistics::clear_htscborrowtradevolume() {
  _impl_.htscborrowtradevolume_ = int64_t{0};
}
inline int64_t MDSLStatistics::_internal_htscborrowtradevolume() const {
  return _impl_.htscborrowtradevolume_;
}
inline int64_t MDSLStatistics::htscborrowtradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HtscBorrowTradeVolume)
  return _internal_htscborrowtradevolume();
}
inline void MDSLStatistics::_internal_set_htscborrowtradevolume(int64_t value) {
  
  _impl_.htscborrowtradevolume_ = value;
}
inline void MDSLStatistics::set_htscborrowtradevolume(int64_t value) {
  _internal_set_htscborrowtradevolume(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HtscBorrowTradeVolume)
}

// int64 HtscLendTradeVolume = 9;
inline void MDSLStatistics::clear_htsclendtradevolume() {
  _impl_.htsclendtradevolume_ = int64_t{0};
}
inline int64_t MDSLStatistics::_internal_htsclendtradevolume() const {
  return _impl_.htsclendtradevolume_;
}
inline int64_t MDSLStatistics::htsclendtradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.HtscLendTradeVolume)
  return _internal_htsclendtradevolume();
}
inline void MDSLStatistics::_internal_set_htsclendtradevolume(int64_t value) {
  
  _impl_.htsclendtradevolume_ = value;
}
inline void MDSLStatistics::set_htsclendtradevolume(int64_t value) {
  _internal_set_htsclendtradevolume(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.HtscLendTradeVolume)
}

// int64 MarketTradeVolume = 10;
inline void MDSLStatistics::clear_markettradevolume() {
  _impl_.markettradevolume_ = int64_t{0};
}
inline int64_t MDSLStatistics::_internal_markettradevolume() const {
  return _impl_.markettradevolume_;
}
inline int64_t MDSLStatistics::markettradevolume() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.MarketTradeVolume)
  return _internal_markettradevolume();
}
inline void MDSLStatistics::_internal_set_markettradevolume(int64_t value) {
  
  _impl_.markettradevolume_ = value;
}
inline void MDSLStatistics::set_markettradevolume(int64_t value) {
  _internal_set_markettradevolume(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.MarketTradeVolume)
}

// string TradeDate = 11;
inline void MDSLStatistics::clear_tradedate() {
  _impl_.tradedate_.ClearToEmpty();
}
inline const std::string& MDSLStatistics::tradedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  return _internal_tradedate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDSLStatistics::set_tradedate(ArgT0&& arg0, ArgT... args) {
 
 _impl_.tradedate_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}
inline std::string* MDSLStatistics::mutable_tradedate() {
  std::string* _s = _internal_mutable_tradedate();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  return _s;
}
inline const std::string& MDSLStatistics::_internal_tradedate() const {
  return _impl_.tradedate_.Get();
}
inline void MDSLStatistics::_internal_set_tradedate(const std::string& value) {
  
  _impl_.tradedate_.Set(value, GetArenaForAllocation());
}
inline std::string* MDSLStatistics::_internal_mutable_tradedate() {
  
  return _impl_.tradedate_.Mutable(GetArenaForAllocation());
}
inline std::string* MDSLStatistics::release_tradedate() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
  return _impl_.tradedate_.Release();
}
inline void MDSLStatistics::set_allocated_tradedate(std::string* tradedate) {
  if (tradedate != nullptr) {
    
  } else {
    
  }
  _impl_.tradedate_.SetAllocated(tradedate, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.tradedate_.IsDefault()) {
    _impl_.tradedate_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLStatistics.TradeDate)
}

// int32 DataMultiplePowerOf10 = 12;
inline void MDSLStatistics::clear_datamultiplepowerof10() {
  _impl_.datamultiplepowerof10_ = 0;
}
inline int32_t MDSLStatistics::_internal_datamultiplepowerof10() const {
  return _impl_.datamultiplepowerof10_;
}
inline int32_t MDSLStatistics::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLStatistics.DataMultiplePowerOf10)
  return _internal_datamultiplepowerof10();
}
inline void MDSLStatistics::_internal_set_datamultiplepowerof10(int32_t value) {
  
  _impl_.datamultiplepowerof10_ = value;
}
inline void MDSLStatistics::set_datamultiplepowerof10(int32_t value) {
  _internal_set_datamultiplepowerof10(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLStatistics.DataMultiplePowerOf10)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MDSLStatistics_2eproto