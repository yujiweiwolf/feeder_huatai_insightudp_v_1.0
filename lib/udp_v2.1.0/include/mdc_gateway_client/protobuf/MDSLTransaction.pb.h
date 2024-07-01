// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MDSLTransaction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MDSLTransaction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MDSLTransaction_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MDSLTransaction_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MDSLTransaction_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MDSLTransaction_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class MDSLTransaction;
struct MDSLTransactionDefaultTypeInternal;
extern MDSLTransactionDefaultTypeInternal _MDSLTransaction_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::MDSLTransaction* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::MDSLTransaction>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class MDSLTransaction final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.MDSLTransaction) */ {
 public:
  inline MDSLTransaction() : MDSLTransaction(nullptr) {}
  ~MDSLTransaction() override;
  explicit PROTOBUF_CONSTEXPR MDSLTransaction(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MDSLTransaction(const MDSLTransaction& from);
  MDSLTransaction(MDSLTransaction&& from) noexcept
    : MDSLTransaction() {
    *this = ::std::move(from);
  }

  inline MDSLTransaction& operator=(const MDSLTransaction& from) {
    CopyFrom(from);
    return *this;
  }
  inline MDSLTransaction& operator=(MDSLTransaction&& from) noexcept {
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
  static const MDSLTransaction& default_instance() {
    return *internal_default_instance();
  }
  static inline const MDSLTransaction* internal_default_instance() {
    return reinterpret_cast<const MDSLTransaction*>(
               &_MDSLTransaction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MDSLTransaction& a, MDSLTransaction& b) {
    a.Swap(&b);
  }
  inline void Swap(MDSLTransaction* other) {
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
  void UnsafeArenaSwap(MDSLTransaction* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MDSLTransaction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MDSLTransaction>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MDSLTransaction& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MDSLTransaction& from) {
    MDSLTransaction::MergeImpl(*this, from);
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
  void InternalSwap(MDSLTransaction* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.MDSLTransaction";
  }
  protected:
  explicit MDSLTransaction(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHTSCSecurityIDFieldNumber = 1,
    kTradeNumFieldNumber = 19,
    kMDDateFieldNumber = 2,
    kMDTimeFieldNumber = 3,
    kDataTimestampFieldNumber = 4,
    kSecurityIDSourceFieldNumber = 5,
    kSecurityTypeFieldNumber = 6,
    kExchangeDateFieldNumber = 7,
    kExchangeTimeFieldNumber = 8,
    kTradeIndexFieldNumber = 9,
    kTradeBuyNoFieldNumber = 10,
    kTradeSellNoFieldNumber = 11,
    kTradeTypeFieldNumber = 12,
    kTradeBSFlagFieldNumber = 13,
    kTradePriceFieldNumber = 14,
    kTradeQtyFieldNumber = 15,
    kTradeMoneyFieldNumber = 16,
    kNumTradesFieldNumber = 17,
    kTradeTermFieldNumber = 18,
    kDataMultiplePowerOf10FieldNumber = 20,
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

  // string TradeNum = 19;
  void clear_tradenum();
  const std::string& tradenum() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tradenum(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tradenum();
  PROTOBUF_NODISCARD std::string* release_tradenum();
  void set_allocated_tradenum(std::string* tradenum);
  private:
  const std::string& _internal_tradenum() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tradenum(const std::string& value);
  std::string* _internal_mutable_tradenum();
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

  // int32 ExchangeDate = 7;
  void clear_exchangedate();
  int32_t exchangedate() const;
  void set_exchangedate(int32_t value);
  private:
  int32_t _internal_exchangedate() const;
  void _internal_set_exchangedate(int32_t value);
  public:

  // int32 ExchangeTime = 8;
  void clear_exchangetime();
  int32_t exchangetime() const;
  void set_exchangetime(int32_t value);
  private:
  int32_t _internal_exchangetime() const;
  void _internal_set_exchangetime(int32_t value);
  public:

  // int64 TradeIndex = 9;
  void clear_tradeindex();
  int64_t tradeindex() const;
  void set_tradeindex(int64_t value);
  private:
  int64_t _internal_tradeindex() const;
  void _internal_set_tradeindex(int64_t value);
  public:

  // int64 TradeBuyNo = 10;
  void clear_tradebuyno();
  int64_t tradebuyno() const;
  void set_tradebuyno(int64_t value);
  private:
  int64_t _internal_tradebuyno() const;
  void _internal_set_tradebuyno(int64_t value);
  public:

  // int64 TradeSellNo = 11;
  void clear_tradesellno();
  int64_t tradesellno() const;
  void set_tradesellno(int64_t value);
  private:
  int64_t _internal_tradesellno() const;
  void _internal_set_tradesellno(int64_t value);
  public:

  // int32 TradeType = 12;
  void clear_tradetype();
  int32_t tradetype() const;
  void set_tradetype(int32_t value);
  private:
  int32_t _internal_tradetype() const;
  void _internal_set_tradetype(int32_t value);
  public:

  // int32 TradeBSFlag = 13;
  void clear_tradebsflag();
  int32_t tradebsflag() const;
  void set_tradebsflag(int32_t value);
  private:
  int32_t _internal_tradebsflag() const;
  void _internal_set_tradebsflag(int32_t value);
  public:

  // int64 TradePrice = 14;
  void clear_tradeprice();
  int64_t tradeprice() const;
  void set_tradeprice(int64_t value);
  private:
  int64_t _internal_tradeprice() const;
  void _internal_set_tradeprice(int64_t value);
  public:

  // int64 TradeQty = 15;
  void clear_tradeqty();
  int64_t tradeqty() const;
  void set_tradeqty(int64_t value);
  private:
  int64_t _internal_tradeqty() const;
  void _internal_set_tradeqty(int64_t value);
  public:

  // int64 TradeMoney = 16;
  void clear_trademoney();
  int64_t trademoney() const;
  void set_trademoney(int64_t value);
  private:
  int64_t _internal_trademoney() const;
  void _internal_set_trademoney(int64_t value);
  public:

  // int64 NumTrades = 17;
  void clear_numtrades();
  int64_t numtrades() const;
  void set_numtrades(int64_t value);
  private:
  int64_t _internal_numtrades() const;
  void _internal_set_numtrades(int64_t value);
  public:

  // int32 TradeTerm = 18;
  void clear_tradeterm();
  int32_t tradeterm() const;
  void set_tradeterm(int32_t value);
  private:
  int32_t _internal_tradeterm() const;
  void _internal_set_tradeterm(int32_t value);
  public:

  // int32 DataMultiplePowerOf10 = 20;
  void clear_datamultiplepowerof10();
  int32_t datamultiplepowerof10() const;
  void set_datamultiplepowerof10(int32_t value);
  private:
  int32_t _internal_datamultiplepowerof10() const;
  void _internal_set_datamultiplepowerof10(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.MDSLTransaction)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr htscsecurityid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tradenum_;
    int32_t mddate_;
    int32_t mdtime_;
    int64_t datatimestamp_;
    int securityidsource_;
    int securitytype_;
    int32_t exchangedate_;
    int32_t exchangetime_;
    int64_t tradeindex_;
    int64_t tradebuyno_;
    int64_t tradesellno_;
    int32_t tradetype_;
    int32_t tradebsflag_;
    int64_t tradeprice_;
    int64_t tradeqty_;
    int64_t trademoney_;
    int64_t numtrades_;
    int32_t tradeterm_;
    int32_t datamultiplepowerof10_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MDSLTransaction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MDSLTransaction

// string HTSCSecurityID = 1;
inline void MDSLTransaction::clear_htscsecurityid() {
  _impl_.htscsecurityid_.ClearToEmpty();
}
inline const std::string& MDSLTransaction::htscsecurityid() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  return _internal_htscsecurityid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDSLTransaction::set_htscsecurityid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.htscsecurityid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}
inline std::string* MDSLTransaction::mutable_htscsecurityid() {
  std::string* _s = _internal_mutable_htscsecurityid();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  return _s;
}
inline const std::string& MDSLTransaction::_internal_htscsecurityid() const {
  return _impl_.htscsecurityid_.Get();
}
inline void MDSLTransaction::_internal_set_htscsecurityid(const std::string& value) {
  
  _impl_.htscsecurityid_.Set(value, GetArenaForAllocation());
}
inline std::string* MDSLTransaction::_internal_mutable_htscsecurityid() {
  
  return _impl_.htscsecurityid_.Mutable(GetArenaForAllocation());
}
inline std::string* MDSLTransaction::release_htscsecurityid() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
  return _impl_.htscsecurityid_.Release();
}
inline void MDSLTransaction::set_allocated_htscsecurityid(std::string* htscsecurityid) {
  if (htscsecurityid != nullptr) {
    
  } else {
    
  }
  _impl_.htscsecurityid_.SetAllocated(htscsecurityid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.htscsecurityid_.IsDefault()) {
    _impl_.htscsecurityid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLTransaction.HTSCSecurityID)
}

// int32 MDDate = 2;
inline void MDSLTransaction::clear_mddate() {
  _impl_.mddate_ = 0;
}
inline int32_t MDSLTransaction::_internal_mddate() const {
  return _impl_.mddate_;
}
inline int32_t MDSLTransaction::mddate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.MDDate)
  return _internal_mddate();
}
inline void MDSLTransaction::_internal_set_mddate(int32_t value) {
  
  _impl_.mddate_ = value;
}
inline void MDSLTransaction::set_mddate(int32_t value) {
  _internal_set_mddate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.MDDate)
}

// int32 MDTime = 3;
inline void MDSLTransaction::clear_mdtime() {
  _impl_.mdtime_ = 0;
}
inline int32_t MDSLTransaction::_internal_mdtime() const {
  return _impl_.mdtime_;
}
inline int32_t MDSLTransaction::mdtime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.MDTime)
  return _internal_mdtime();
}
inline void MDSLTransaction::_internal_set_mdtime(int32_t value) {
  
  _impl_.mdtime_ = value;
}
inline void MDSLTransaction::set_mdtime(int32_t value) {
  _internal_set_mdtime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.MDTime)
}

// int64 DataTimestamp = 4;
inline void MDSLTransaction::clear_datatimestamp() {
  _impl_.datatimestamp_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_datatimestamp() const {
  return _impl_.datatimestamp_;
}
inline int64_t MDSLTransaction::datatimestamp() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.DataTimestamp)
  return _internal_datatimestamp();
}
inline void MDSLTransaction::_internal_set_datatimestamp(int64_t value) {
  
  _impl_.datatimestamp_ = value;
}
inline void MDSLTransaction::set_datatimestamp(int64_t value) {
  _internal_set_datatimestamp(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.DataTimestamp)
}

// .com.htsc.mdc.model.ESecurityIDSource securityIDSource = 5;
inline void MDSLTransaction::clear_securityidsource() {
  _impl_.securityidsource_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLTransaction::_internal_securityidsource() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityIDSource >(_impl_.securityidsource_);
}
inline ::com::htsc::mdc::model::ESecurityIDSource MDSLTransaction::securityidsource() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.securityIDSource)
  return _internal_securityidsource();
}
inline void MDSLTransaction::_internal_set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  
  _impl_.securityidsource_ = value;
}
inline void MDSLTransaction::set_securityidsource(::com::htsc::mdc::model::ESecurityIDSource value) {
  _internal_set_securityidsource(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.securityIDSource)
}

// .com.htsc.mdc.model.ESecurityType securityType = 6;
inline void MDSLTransaction::clear_securitytype() {
  _impl_.securitytype_ = 0;
}
inline ::com::htsc::mdc::model::ESecurityType MDSLTransaction::_internal_securitytype() const {
  return static_cast< ::com::htsc::mdc::model::ESecurityType >(_impl_.securitytype_);
}
inline ::com::htsc::mdc::model::ESecurityType MDSLTransaction::securitytype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.securityType)
  return _internal_securitytype();
}
inline void MDSLTransaction::_internal_set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  
  _impl_.securitytype_ = value;
}
inline void MDSLTransaction::set_securitytype(::com::htsc::mdc::model::ESecurityType value) {
  _internal_set_securitytype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.securityType)
}

// int32 ExchangeDate = 7;
inline void MDSLTransaction::clear_exchangedate() {
  _impl_.exchangedate_ = 0;
}
inline int32_t MDSLTransaction::_internal_exchangedate() const {
  return _impl_.exchangedate_;
}
inline int32_t MDSLTransaction::exchangedate() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeDate)
  return _internal_exchangedate();
}
inline void MDSLTransaction::_internal_set_exchangedate(int32_t value) {
  
  _impl_.exchangedate_ = value;
}
inline void MDSLTransaction::set_exchangedate(int32_t value) {
  _internal_set_exchangedate(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeDate)
}

// int32 ExchangeTime = 8;
inline void MDSLTransaction::clear_exchangetime() {
  _impl_.exchangetime_ = 0;
}
inline int32_t MDSLTransaction::_internal_exchangetime() const {
  return _impl_.exchangetime_;
}
inline int32_t MDSLTransaction::exchangetime() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeTime)
  return _internal_exchangetime();
}
inline void MDSLTransaction::_internal_set_exchangetime(int32_t value) {
  
  _impl_.exchangetime_ = value;
}
inline void MDSLTransaction::set_exchangetime(int32_t value) {
  _internal_set_exchangetime(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.ExchangeTime)
}

// int64 TradeIndex = 9;
inline void MDSLTransaction::clear_tradeindex() {
  _impl_.tradeindex_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_tradeindex() const {
  return _impl_.tradeindex_;
}
inline int64_t MDSLTransaction::tradeindex() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeIndex)
  return _internal_tradeindex();
}
inline void MDSLTransaction::_internal_set_tradeindex(int64_t value) {
  
  _impl_.tradeindex_ = value;
}
inline void MDSLTransaction::set_tradeindex(int64_t value) {
  _internal_set_tradeindex(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeIndex)
}

// int64 TradeBuyNo = 10;
inline void MDSLTransaction::clear_tradebuyno() {
  _impl_.tradebuyno_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_tradebuyno() const {
  return _impl_.tradebuyno_;
}
inline int64_t MDSLTransaction::tradebuyno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeBuyNo)
  return _internal_tradebuyno();
}
inline void MDSLTransaction::_internal_set_tradebuyno(int64_t value) {
  
  _impl_.tradebuyno_ = value;
}
inline void MDSLTransaction::set_tradebuyno(int64_t value) {
  _internal_set_tradebuyno(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeBuyNo)
}

// int64 TradeSellNo = 11;
inline void MDSLTransaction::clear_tradesellno() {
  _impl_.tradesellno_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_tradesellno() const {
  return _impl_.tradesellno_;
}
inline int64_t MDSLTransaction::tradesellno() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeSellNo)
  return _internal_tradesellno();
}
inline void MDSLTransaction::_internal_set_tradesellno(int64_t value) {
  
  _impl_.tradesellno_ = value;
}
inline void MDSLTransaction::set_tradesellno(int64_t value) {
  _internal_set_tradesellno(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeSellNo)
}

// int32 TradeType = 12;
inline void MDSLTransaction::clear_tradetype() {
  _impl_.tradetype_ = 0;
}
inline int32_t MDSLTransaction::_internal_tradetype() const {
  return _impl_.tradetype_;
}
inline int32_t MDSLTransaction::tradetype() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeType)
  return _internal_tradetype();
}
inline void MDSLTransaction::_internal_set_tradetype(int32_t value) {
  
  _impl_.tradetype_ = value;
}
inline void MDSLTransaction::set_tradetype(int32_t value) {
  _internal_set_tradetype(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeType)
}

// int32 TradeBSFlag = 13;
inline void MDSLTransaction::clear_tradebsflag() {
  _impl_.tradebsflag_ = 0;
}
inline int32_t MDSLTransaction::_internal_tradebsflag() const {
  return _impl_.tradebsflag_;
}
inline int32_t MDSLTransaction::tradebsflag() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeBSFlag)
  return _internal_tradebsflag();
}
inline void MDSLTransaction::_internal_set_tradebsflag(int32_t value) {
  
  _impl_.tradebsflag_ = value;
}
inline void MDSLTransaction::set_tradebsflag(int32_t value) {
  _internal_set_tradebsflag(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeBSFlag)
}

// int64 TradePrice = 14;
inline void MDSLTransaction::clear_tradeprice() {
  _impl_.tradeprice_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_tradeprice() const {
  return _impl_.tradeprice_;
}
inline int64_t MDSLTransaction::tradeprice() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradePrice)
  return _internal_tradeprice();
}
inline void MDSLTransaction::_internal_set_tradeprice(int64_t value) {
  
  _impl_.tradeprice_ = value;
}
inline void MDSLTransaction::set_tradeprice(int64_t value) {
  _internal_set_tradeprice(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradePrice)
}

// int64 TradeQty = 15;
inline void MDSLTransaction::clear_tradeqty() {
  _impl_.tradeqty_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_tradeqty() const {
  return _impl_.tradeqty_;
}
inline int64_t MDSLTransaction::tradeqty() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeQty)
  return _internal_tradeqty();
}
inline void MDSLTransaction::_internal_set_tradeqty(int64_t value) {
  
  _impl_.tradeqty_ = value;
}
inline void MDSLTransaction::set_tradeqty(int64_t value) {
  _internal_set_tradeqty(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeQty)
}

// int64 TradeMoney = 16;
inline void MDSLTransaction::clear_trademoney() {
  _impl_.trademoney_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_trademoney() const {
  return _impl_.trademoney_;
}
inline int64_t MDSLTransaction::trademoney() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeMoney)
  return _internal_trademoney();
}
inline void MDSLTransaction::_internal_set_trademoney(int64_t value) {
  
  _impl_.trademoney_ = value;
}
inline void MDSLTransaction::set_trademoney(int64_t value) {
  _internal_set_trademoney(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeMoney)
}

// int64 NumTrades = 17;
inline void MDSLTransaction::clear_numtrades() {
  _impl_.numtrades_ = int64_t{0};
}
inline int64_t MDSLTransaction::_internal_numtrades() const {
  return _impl_.numtrades_;
}
inline int64_t MDSLTransaction::numtrades() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.NumTrades)
  return _internal_numtrades();
}
inline void MDSLTransaction::_internal_set_numtrades(int64_t value) {
  
  _impl_.numtrades_ = value;
}
inline void MDSLTransaction::set_numtrades(int64_t value) {
  _internal_set_numtrades(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.NumTrades)
}

// int32 TradeTerm = 18;
inline void MDSLTransaction::clear_tradeterm() {
  _impl_.tradeterm_ = 0;
}
inline int32_t MDSLTransaction::_internal_tradeterm() const {
  return _impl_.tradeterm_;
}
inline int32_t MDSLTransaction::tradeterm() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeTerm)
  return _internal_tradeterm();
}
inline void MDSLTransaction::_internal_set_tradeterm(int32_t value) {
  
  _impl_.tradeterm_ = value;
}
inline void MDSLTransaction::set_tradeterm(int32_t value) {
  _internal_set_tradeterm(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeTerm)
}

// string TradeNum = 19;
inline void MDSLTransaction::clear_tradenum() {
  _impl_.tradenum_.ClearToEmpty();
}
inline const std::string& MDSLTransaction::tradenum() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  return _internal_tradenum();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MDSLTransaction::set_tradenum(ArgT0&& arg0, ArgT... args) {
 
 _impl_.tradenum_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}
inline std::string* MDSLTransaction::mutable_tradenum() {
  std::string* _s = _internal_mutable_tradenum();
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  return _s;
}
inline const std::string& MDSLTransaction::_internal_tradenum() const {
  return _impl_.tradenum_.Get();
}
inline void MDSLTransaction::_internal_set_tradenum(const std::string& value) {
  
  _impl_.tradenum_.Set(value, GetArenaForAllocation());
}
inline std::string* MDSLTransaction::_internal_mutable_tradenum() {
  
  return _impl_.tradenum_.Mutable(GetArenaForAllocation());
}
inline std::string* MDSLTransaction::release_tradenum() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
  return _impl_.tradenum_.Release();
}
inline void MDSLTransaction::set_allocated_tradenum(std::string* tradenum) {
  if (tradenum != nullptr) {
    
  } else {
    
  }
  _impl_.tradenum_.SetAllocated(tradenum, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.tradenum_.IsDefault()) {
    _impl_.tradenum_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.MDSLTransaction.TradeNum)
}

// int32 DataMultiplePowerOf10 = 20;
inline void MDSLTransaction::clear_datamultiplepowerof10() {
  _impl_.datamultiplepowerof10_ = 0;
}
inline int32_t MDSLTransaction::_internal_datamultiplepowerof10() const {
  return _impl_.datamultiplepowerof10_;
}
inline int32_t MDSLTransaction::datamultiplepowerof10() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.MDSLTransaction.DataMultiplePowerOf10)
  return _internal_datamultiplepowerof10();
}
inline void MDSLTransaction::_internal_set_datamultiplepowerof10(int32_t value) {
  
  _impl_.datamultiplepowerof10_ = value;
}
inline void MDSLTransaction::set_datamultiplepowerof10(int32_t value) {
  _internal_set_datamultiplepowerof10(value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.MDSLTransaction.DataMultiplePowerOf10)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MDSLTransaction_2eproto