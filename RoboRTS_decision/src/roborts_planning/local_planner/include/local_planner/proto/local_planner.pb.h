// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: local_planner.proto

#ifndef PROTOBUF_INCLUDED_local_5fplanner_2eproto
#define PROTOBUF_INCLUDED_local_5fplanner_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_local_5fplanner_2eproto 

namespace protobuf_local_5fplanner_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_local_5fplanner_2eproto
namespace roborts_local_planner {
class LocalAlgorithms;
class LocalAlgorithmsDefaultTypeInternal;
extern LocalAlgorithmsDefaultTypeInternal _LocalAlgorithms_default_instance_;
}  // namespace roborts_local_planner
namespace google {
namespace protobuf {
template<> ::roborts_local_planner::LocalAlgorithms* Arena::CreateMaybeMessage<::roborts_local_planner::LocalAlgorithms>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace roborts_local_planner {

// ===================================================================

class LocalAlgorithms : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roborts_local_planner.LocalAlgorithms) */ {
 public:
  LocalAlgorithms();
  virtual ~LocalAlgorithms();

  LocalAlgorithms(const LocalAlgorithms& from);

  inline LocalAlgorithms& operator=(const LocalAlgorithms& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LocalAlgorithms(LocalAlgorithms&& from) noexcept
    : LocalAlgorithms() {
    *this = ::std::move(from);
  }

  inline LocalAlgorithms& operator=(LocalAlgorithms&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LocalAlgorithms& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LocalAlgorithms* internal_default_instance() {
    return reinterpret_cast<const LocalAlgorithms*>(
               &_LocalAlgorithms_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LocalAlgorithms* other);
  friend void swap(LocalAlgorithms& a, LocalAlgorithms& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LocalAlgorithms* New() const final {
    return CreateMaybeMessage<LocalAlgorithms>(NULL);
  }

  LocalAlgorithms* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LocalAlgorithms>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LocalAlgorithms& from);
  void MergeFrom(const LocalAlgorithms& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LocalAlgorithms* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string name = 1;
  int name_size() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name(int index) const;
  ::std::string* mutable_name(int index);
  void set_name(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_name(int index, ::std::string&& value);
  #endif
  void set_name(int index, const char* value);
  void set_name(int index, const char* value, size_t size);
  ::std::string* add_name();
  void add_name(const ::std::string& value);
  #if LANG_CXX11
  void add_name(::std::string&& value);
  #endif
  void add_name(const char* value);
  void add_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // optional string selected_algorithm = 2;
  bool has_selected_algorithm() const;
  void clear_selected_algorithm();
  static const int kSelectedAlgorithmFieldNumber = 2;
  const ::std::string& selected_algorithm() const;
  void set_selected_algorithm(const ::std::string& value);
  #if LANG_CXX11
  void set_selected_algorithm(::std::string&& value);
  #endif
  void set_selected_algorithm(const char* value);
  void set_selected_algorithm(const char* value, size_t size);
  ::std::string* mutable_selected_algorithm();
  ::std::string* release_selected_algorithm();
  void set_allocated_selected_algorithm(::std::string* selected_algorithm);

  // optional double frequency = 3;
  bool has_frequency() const;
  void clear_frequency();
  static const int kFrequencyFieldNumber = 3;
  double frequency() const;
  void set_frequency(double value);

  // @@protoc_insertion_point(class_scope:roborts_local_planner.LocalAlgorithms)
 private:
  void set_has_selected_algorithm();
  void clear_has_selected_algorithm();
  void set_has_frequency();
  void clear_has_frequency();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::internal::ArenaStringPtr selected_algorithm_;
  double frequency_;
  friend struct ::protobuf_local_5fplanner_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocalAlgorithms

// repeated string name = 1;
inline int LocalAlgorithms::name_size() const {
  return name_.size();
}
inline void LocalAlgorithms::clear_name() {
  name_.Clear();
}
inline const ::std::string& LocalAlgorithms::name(int index) const {
  // @@protoc_insertion_point(field_get:roborts_local_planner.LocalAlgorithms.name)
  return name_.Get(index);
}
inline ::std::string* LocalAlgorithms::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:roborts_local_planner.LocalAlgorithms.name)
  return name_.Mutable(index);
}
inline void LocalAlgorithms::set_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:roborts_local_planner.LocalAlgorithms.name)
  name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void LocalAlgorithms::set_name(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:roborts_local_planner.LocalAlgorithms.name)
  name_.Mutable(index)->assign(std::move(value));
}
#endif
inline void LocalAlgorithms::set_name(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:roborts_local_planner.LocalAlgorithms.name)
}
inline void LocalAlgorithms::set_name(int index, const char* value, size_t size) {
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:roborts_local_planner.LocalAlgorithms.name)
}
inline ::std::string* LocalAlgorithms::add_name() {
  // @@protoc_insertion_point(field_add_mutable:roborts_local_planner.LocalAlgorithms.name)
  return name_.Add();
}
inline void LocalAlgorithms::add_name(const ::std::string& value) {
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:roborts_local_planner.LocalAlgorithms.name)
}
#if LANG_CXX11
inline void LocalAlgorithms::add_name(::std::string&& value) {
  name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:roborts_local_planner.LocalAlgorithms.name)
}
#endif
inline void LocalAlgorithms::add_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:roborts_local_planner.LocalAlgorithms.name)
}
inline void LocalAlgorithms::add_name(const char* value, size_t size) {
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:roborts_local_planner.LocalAlgorithms.name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LocalAlgorithms::name() const {
  // @@protoc_insertion_point(field_list:roborts_local_planner.LocalAlgorithms.name)
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LocalAlgorithms::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:roborts_local_planner.LocalAlgorithms.name)
  return &name_;
}

// optional string selected_algorithm = 2;
inline bool LocalAlgorithms::has_selected_algorithm() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LocalAlgorithms::set_has_selected_algorithm() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LocalAlgorithms::clear_has_selected_algorithm() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LocalAlgorithms::clear_selected_algorithm() {
  selected_algorithm_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_selected_algorithm();
}
inline const ::std::string& LocalAlgorithms::selected_algorithm() const {
  // @@protoc_insertion_point(field_get:roborts_local_planner.LocalAlgorithms.selected_algorithm)
  return selected_algorithm_.GetNoArena();
}
inline void LocalAlgorithms::set_selected_algorithm(const ::std::string& value) {
  set_has_selected_algorithm();
  selected_algorithm_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:roborts_local_planner.LocalAlgorithms.selected_algorithm)
}
#if LANG_CXX11
inline void LocalAlgorithms::set_selected_algorithm(::std::string&& value) {
  set_has_selected_algorithm();
  selected_algorithm_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:roborts_local_planner.LocalAlgorithms.selected_algorithm)
}
#endif
inline void LocalAlgorithms::set_selected_algorithm(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_selected_algorithm();
  selected_algorithm_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:roborts_local_planner.LocalAlgorithms.selected_algorithm)
}
inline void LocalAlgorithms::set_selected_algorithm(const char* value, size_t size) {
  set_has_selected_algorithm();
  selected_algorithm_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:roborts_local_planner.LocalAlgorithms.selected_algorithm)
}
inline ::std::string* LocalAlgorithms::mutable_selected_algorithm() {
  set_has_selected_algorithm();
  // @@protoc_insertion_point(field_mutable:roborts_local_planner.LocalAlgorithms.selected_algorithm)
  return selected_algorithm_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LocalAlgorithms::release_selected_algorithm() {
  // @@protoc_insertion_point(field_release:roborts_local_planner.LocalAlgorithms.selected_algorithm)
  if (!has_selected_algorithm()) {
    return NULL;
  }
  clear_has_selected_algorithm();
  return selected_algorithm_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LocalAlgorithms::set_allocated_selected_algorithm(::std::string* selected_algorithm) {
  if (selected_algorithm != NULL) {
    set_has_selected_algorithm();
  } else {
    clear_has_selected_algorithm();
  }
  selected_algorithm_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), selected_algorithm);
  // @@protoc_insertion_point(field_set_allocated:roborts_local_planner.LocalAlgorithms.selected_algorithm)
}

// optional double frequency = 3;
inline bool LocalAlgorithms::has_frequency() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LocalAlgorithms::set_has_frequency() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LocalAlgorithms::clear_has_frequency() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LocalAlgorithms::clear_frequency() {
  frequency_ = 0;
  clear_has_frequency();
}
inline double LocalAlgorithms::frequency() const {
  // @@protoc_insertion_point(field_get:roborts_local_planner.LocalAlgorithms.frequency)
  return frequency_;
}
inline void LocalAlgorithms::set_frequency(double value) {
  set_has_frequency();
  frequency_ = value;
  // @@protoc_insertion_point(field_set:roborts_local_planner.LocalAlgorithms.frequency)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace roborts_local_planner

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_local_5fplanner_2eproto
