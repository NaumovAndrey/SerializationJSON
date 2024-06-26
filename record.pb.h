// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: record.proto
// Protobuf C++ Version: 5.26.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_record_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_record_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION != 5026001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_record_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_record_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_record_2eproto;
class Record;
struct RecordDefaultTypeInternal;
extern RecordDefaultTypeInternal _Record_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Record final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Record) */ {
 public:
  inline Record() : Record(nullptr) {}
  ~Record() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Record(
      ::google::protobuf::internal::ConstantInitialized);

  inline Record(const Record& from) : Record(nullptr, from) {}
  inline Record(Record&& from) noexcept
      : Record(nullptr, std::move(from)) {}
  inline Record& operator=(const Record& from) {
    CopyFrom(from);
    return *this;
  }
  inline Record& operator=(Record&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Record& default_instance() {
    return *internal_default_instance();
  }
  static inline const Record* internal_default_instance() {
    return reinterpret_cast<const Record*>(
        &_Record_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Record& a, Record& b) { a.Swap(&b); }
  inline void Swap(Record* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Record* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Record* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Record>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Record& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Record& from) { Record::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Record* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Record"; }

 protected:
  explicit Record(::google::protobuf::Arena* arena);
  Record(::google::protobuf::Arena* arena, const Record& from);
  Record(::google::protobuf::Arena* arena, Record&& from) noexcept
      : Record(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::MessageLite::ClassData* GetClassData()
      const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const final;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 1,
    kFamilyFieldNumber = 2,
    kAgeFieldNumber = 3,
    kMarriedFieldNumber = 4,
  };
  // required string name = 1;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // required string family = 2;
  bool has_family() const;
  void clear_family() ;
  const std::string& family() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_family(Arg_&& arg, Args_... args);
  std::string* mutable_family();
  PROTOBUF_NODISCARD std::string* release_family();
  void set_allocated_family(std::string* value);

  private:
  const std::string& _internal_family() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_family(
      const std::string& value);
  std::string* _internal_mutable_family();

  public:
  // optional int32 age = 3;
  bool has_age() const;
  void clear_age() ;
  ::int32_t age() const;
  void set_age(::int32_t value);

  private:
  ::int32_t _internal_age() const;
  void _internal_set_age(::int32_t value);

  public:
  // optional bool married = 4;
  bool has_married() const;
  void clear_married() ;
  bool married() const;
  void set_married(bool value);

  private:
  bool _internal_married() const;
  void _internal_set_married(bool value);

  public:
  // @@protoc_insertion_point(class_scope:Record)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      25, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr family_;
    ::int32_t age_;
    bool married_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_record_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Record

// required string name = 1;
inline bool Record::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Record::clear_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Record::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Record.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Record::set_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Record.name)
}
inline std::string* Record::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Record.name)
  return _s;
}
inline const std::string& Record::_internal_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.name_.Get();
}
inline void Record::_internal_set_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArena());
}
inline std::string* Record::_internal_mutable_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* Record::release_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Record.name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Record::set_allocated_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record.name)
}

// required string family = 2;
inline bool Record::has_family() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Record::clear_family() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.family_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Record::family() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Record.family)
  return _internal_family();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Record::set_family(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.family_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Record.family)
}
inline std::string* Record::mutable_family() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_family();
  // @@protoc_insertion_point(field_mutable:Record.family)
  return _s;
}
inline const std::string& Record::_internal_family() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.family_.Get();
}
inline void Record::_internal_set_family(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.family_.Set(value, GetArena());
}
inline std::string* Record::_internal_mutable_family() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.family_.Mutable( GetArena());
}
inline std::string* Record::release_family() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:Record.family)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.family_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.family_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Record::set_allocated_family(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.family_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.family_.IsDefault()) {
          _impl_.family_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record.family)
}

// optional int32 age = 3;
inline bool Record::has_age() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Record::clear_age() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.age_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t Record::age() const {
  // @@protoc_insertion_point(field_get:Record.age)
  return _internal_age();
}
inline void Record::set_age(::int32_t value) {
  _internal_set_age(value);
  _impl_._has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_set:Record.age)
}
inline ::int32_t Record::_internal_age() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.age_;
}
inline void Record::_internal_set_age(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.age_ = value;
}

// optional bool married = 4;
inline bool Record::has_married() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Record::clear_married() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.married_ = false;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline bool Record::married() const {
  // @@protoc_insertion_point(field_get:Record.married)
  return _internal_married();
}
inline void Record::set_married(bool value) {
  _internal_set_married(value);
  _impl_._has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_set:Record.married)
}
inline bool Record::_internal_married() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.married_;
}
inline void Record::_internal_set_married(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.married_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_record_2eproto_2epb_2eh
