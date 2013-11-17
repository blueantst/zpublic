// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 21006_S2CRoomCancleNotify.proto

#ifndef PROTOBUF_21006_5fS2CRoomCancleNotify_2eproto__INCLUDED
#define PROTOBUF_21006_5fS2CRoomCancleNotify_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_21006_5fS2CRoomCancleNotify_2eproto();
void protobuf_AssignDesc_21006_5fS2CRoomCancleNotify_2eproto();
void protobuf_ShutdownFile_21006_5fS2CRoomCancleNotify_2eproto();

class S2CRoomCancleNotify;

// ===================================================================

class S2CRoomCancleNotify : public ::google::protobuf::Message {
 public:
  S2CRoomCancleNotify();
  virtual ~S2CRoomCancleNotify();

  S2CRoomCancleNotify(const S2CRoomCancleNotify& from);

  inline S2CRoomCancleNotify& operator=(const S2CRoomCancleNotify& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2CRoomCancleNotify& default_instance();

  void Swap(S2CRoomCancleNotify* other);

  // implements Message ----------------------------------------------

  S2CRoomCancleNotify* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const S2CRoomCancleNotify& from);
  void MergeFrom(const S2CRoomCancleNotify& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 room_id = 1;
  inline bool has_room_id() const;
  inline void clear_room_id();
  static const int kRoomIdFieldNumber = 1;
  inline ::google::protobuf::uint32 room_id() const;
  inline void set_room_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Protocol.S2CRoomCancleNotify)
 private:
  inline void set_has_room_id();
  inline void clear_has_room_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 room_id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_21006_5fS2CRoomCancleNotify_2eproto();
  friend void protobuf_AssignDesc_21006_5fS2CRoomCancleNotify_2eproto();
  friend void protobuf_ShutdownFile_21006_5fS2CRoomCancleNotify_2eproto();

  void InitAsDefaultInstance();
  static S2CRoomCancleNotify* default_instance_;
};
// ===================================================================


// ===================================================================

// S2CRoomCancleNotify

// required uint32 room_id = 1;
inline bool S2CRoomCancleNotify::has_room_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2CRoomCancleNotify::set_has_room_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2CRoomCancleNotify::clear_has_room_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2CRoomCancleNotify::clear_room_id() {
  room_id_ = 0u;
  clear_has_room_id();
}
inline ::google::protobuf::uint32 S2CRoomCancleNotify::room_id() const {
  return room_id_;
}
inline void S2CRoomCancleNotify::set_room_id(::google::protobuf::uint32 value) {
  set_has_room_id();
  room_id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_21006_5fS2CRoomCancleNotify_2eproto__INCLUDED