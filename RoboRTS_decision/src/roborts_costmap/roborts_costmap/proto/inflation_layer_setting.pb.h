// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: inflation_layer_setting.proto

#ifndef PROTOBUF_inflation_5flayer_5fsetting_2eproto__INCLUDED
#define PROTOBUF_inflation_5flayer_5fsetting_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace roborts_costmap {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_inflation_5flayer_5fsetting_2eproto();
void protobuf_AssignDesc_inflation_5flayer_5fsetting_2eproto();
void protobuf_ShutdownFile_inflation_5flayer_5fsetting_2eproto();

class ParaInflationLayer;

// ===================================================================

class ParaInflationLayer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:roborts_costmap.ParaInflationLayer) */ {
 public:
  ParaInflationLayer();
  virtual ~ParaInflationLayer();

  ParaInflationLayer(const ParaInflationLayer& from);

  inline ParaInflationLayer& operator=(const ParaInflationLayer& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ParaInflationLayer& default_instance();

  void Swap(ParaInflationLayer* other);

  // implements Message ----------------------------------------------

  inline ParaInflationLayer* New() const { return New(NULL); }

  ParaInflationLayer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ParaInflationLayer& from);
  void MergeFrom(const ParaInflationLayer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ParaInflationLayer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double inflation_radius = 1;
  bool has_inflation_radius() const;
  void clear_inflation_radius();
  static const int kInflationRadiusFieldNumber = 1;
  double inflation_radius() const;
  void set_inflation_radius(double value);

  // required double cost_scaling_factor = 2;
  bool has_cost_scaling_factor() const;
  void clear_cost_scaling_factor();
  static const int kCostScalingFactorFieldNumber = 2;
  double cost_scaling_factor() const;
  void set_cost_scaling_factor(double value);

  // required bool is_debug = 3;
  bool has_is_debug() const;
  void clear_is_debug();
  static const int kIsDebugFieldNumber = 3;
  bool is_debug() const;
  void set_is_debug(bool value);

  // required bool is_raw_rosmessage = 4;
  bool has_is_raw_rosmessage() const;
  void clear_is_raw_rosmessage();
  static const int kIsRawRosmessageFieldNumber = 4;
  bool is_raw_rosmessage() const;
  void set_is_raw_rosmessage(bool value);

  // @@protoc_insertion_point(class_scope:roborts_costmap.ParaInflationLayer)
 private:
  inline void set_has_inflation_radius();
  inline void clear_has_inflation_radius();
  inline void set_has_cost_scaling_factor();
  inline void clear_has_cost_scaling_factor();
  inline void set_has_is_debug();
  inline void clear_has_is_debug();
  inline void set_has_is_raw_rosmessage();
  inline void clear_has_is_raw_rosmessage();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double inflation_radius_;
  double cost_scaling_factor_;
  bool is_debug_;
  bool is_raw_rosmessage_;
  friend void  protobuf_AddDesc_inflation_5flayer_5fsetting_2eproto();
  friend void protobuf_AssignDesc_inflation_5flayer_5fsetting_2eproto();
  friend void protobuf_ShutdownFile_inflation_5flayer_5fsetting_2eproto();

  void InitAsDefaultInstance();
  static ParaInflationLayer* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ParaInflationLayer

// required double inflation_radius = 1;
inline bool ParaInflationLayer::has_inflation_radius() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ParaInflationLayer::set_has_inflation_radius() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ParaInflationLayer::clear_has_inflation_radius() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ParaInflationLayer::clear_inflation_radius() {
  inflation_radius_ = 0;
  clear_has_inflation_radius();
}
inline double ParaInflationLayer::inflation_radius() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaInflationLayer.inflation_radius)
  return inflation_radius_;
}
inline void ParaInflationLayer::set_inflation_radius(double value) {
  set_has_inflation_radius();
  inflation_radius_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaInflationLayer.inflation_radius)
}

// required double cost_scaling_factor = 2;
inline bool ParaInflationLayer::has_cost_scaling_factor() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ParaInflationLayer::set_has_cost_scaling_factor() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ParaInflationLayer::clear_has_cost_scaling_factor() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ParaInflationLayer::clear_cost_scaling_factor() {
  cost_scaling_factor_ = 0;
  clear_has_cost_scaling_factor();
}
inline double ParaInflationLayer::cost_scaling_factor() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaInflationLayer.cost_scaling_factor)
  return cost_scaling_factor_;
}
inline void ParaInflationLayer::set_cost_scaling_factor(double value) {
  set_has_cost_scaling_factor();
  cost_scaling_factor_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaInflationLayer.cost_scaling_factor)
}

// required bool is_debug = 3;
inline bool ParaInflationLayer::has_is_debug() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ParaInflationLayer::set_has_is_debug() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ParaInflationLayer::clear_has_is_debug() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ParaInflationLayer::clear_is_debug() {
  is_debug_ = false;
  clear_has_is_debug();
}
inline bool ParaInflationLayer::is_debug() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaInflationLayer.is_debug)
  return is_debug_;
}
inline void ParaInflationLayer::set_is_debug(bool value) {
  set_has_is_debug();
  is_debug_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaInflationLayer.is_debug)
}

// required bool is_raw_rosmessage = 4;
inline bool ParaInflationLayer::has_is_raw_rosmessage() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ParaInflationLayer::set_has_is_raw_rosmessage() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ParaInflationLayer::clear_has_is_raw_rosmessage() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ParaInflationLayer::clear_is_raw_rosmessage() {
  is_raw_rosmessage_ = false;
  clear_has_is_raw_rosmessage();
}
inline bool ParaInflationLayer::is_raw_rosmessage() const {
  // @@protoc_insertion_point(field_get:roborts_costmap.ParaInflationLayer.is_raw_rosmessage)
  return is_raw_rosmessage_;
}
inline void ParaInflationLayer::set_is_raw_rosmessage(bool value) {
  set_has_is_raw_rosmessage();
  is_raw_rosmessage_ = value;
  // @@protoc_insertion_point(field_set:roborts_costmap.ParaInflationLayer.is_raw_rosmessage)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace roborts_costmap

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_inflation_5flayer_5fsetting_2eproto__INCLUDED
