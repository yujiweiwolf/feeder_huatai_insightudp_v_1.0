// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InsightErrorContext.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_InsightErrorContext_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_InsightErrorContext_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_InsightErrorContext_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_InsightErrorContext_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InsightErrorContext_2eproto;
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {
class InsightErrorContext;
class InsightErrorContextDefaultTypeInternal;
extern InsightErrorContextDefaultTypeInternal _InsightErrorContext_default_instance_;
}  // namespace model
}  // namespace insight
}  // namespace mdc
}  // namespace htsc
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::htsc::mdc::insight::model::InsightErrorContext* Arena::CreateMaybeMessage<::com::htsc::mdc::insight::model::InsightErrorContext>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace htsc {
namespace mdc {
namespace insight {
namespace model {

// ===================================================================

class InsightErrorContext :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.htsc.mdc.insight.model.InsightErrorContext) */ {
 public:
  InsightErrorContext();
  virtual ~InsightErrorContext();

  InsightErrorContext(const InsightErrorContext& from);
  InsightErrorContext(InsightErrorContext&& from) noexcept
    : InsightErrorContext() {
    *this = ::std::move(from);
  }

  inline InsightErrorContext& operator=(const InsightErrorContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline InsightErrorContext& operator=(InsightErrorContext&& from) noexcept {
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
  static const InsightErrorContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InsightErrorContext* internal_default_instance() {
    return reinterpret_cast<const InsightErrorContext*>(
               &_InsightErrorContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(InsightErrorContext* other);
  friend void swap(InsightErrorContext& a, InsightErrorContext& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InsightErrorContext* New() const final {
    return CreateMaybeMessage<InsightErrorContext>(nullptr);
  }

  InsightErrorContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InsightErrorContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InsightErrorContext& from);
  void MergeFrom(const InsightErrorContext& from);
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
  void InternalSwap(InsightErrorContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.htsc.mdc.insight.model.InsightErrorContext";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_InsightErrorContext_2eproto);
    return ::descriptor_table_InsightErrorContext_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);

  // int32 errorCode = 1;
  void clear_errorcode();
  static const int kErrorCodeFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 errorcode() const;
  void set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:com.htsc.mdc.insight.model.InsightErrorContext)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::int32 errorcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_InsightErrorContext_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InsightErrorContext

// int32 errorCode = 1;
inline void InsightErrorContext::clear_errorcode() {
  errorcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 InsightErrorContext::errorcode() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.InsightErrorContext.errorCode)
  return errorcode_;
}
inline void InsightErrorContext::set_errorcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errorcode_ = value;
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.InsightErrorContext.errorCode)
}

// string message = 2;
inline void InsightErrorContext::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& InsightErrorContext::message() const {
  // @@protoc_insertion_point(field_get:com.htsc.mdc.insight.model.InsightErrorContext.message)
  return message_.GetNoArena();
}
inline void InsightErrorContext::set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.htsc.mdc.insight.model.InsightErrorContext.message)
}
inline void InsightErrorContext::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.htsc.mdc.insight.model.InsightErrorContext.message)
}
inline void InsightErrorContext::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.htsc.mdc.insight.model.InsightErrorContext.message)
}
inline void InsightErrorContext::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.htsc.mdc.insight.model.InsightErrorContext.message)
}
inline std::string* InsightErrorContext::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:com.htsc.mdc.insight.model.InsightErrorContext.message)
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* InsightErrorContext::release_message() {
  // @@protoc_insertion_point(field_release:com.htsc.mdc.insight.model.InsightErrorContext.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void InsightErrorContext::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:com.htsc.mdc.insight.model.InsightErrorContext.message)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_InsightErrorContext_2eproto