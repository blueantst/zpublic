// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 15001_S2CGetPlayerProfileRsp.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "15001_S2CGetPlayerProfileRsp.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

namespace {

const ::google::protobuf::Descriptor* S2CGetPlayerProfileRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  S2CGetPlayerProfileRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_15001_5fS2CGetPlayerProfileRsp_2eproto() {
  protobuf_AddDesc_15001_5fS2CGetPlayerProfileRsp_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "15001_S2CGetPlayerProfileRsp.proto");
  GOOGLE_CHECK(file != NULL);
  S2CGetPlayerProfileRsp_descriptor_ = file->message_type(0);
  static const int S2CGetPlayerProfileRsp_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, guid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, gender_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, nickname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, last_login_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, guild_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, guild_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, gold_),
  };
  S2CGetPlayerProfileRsp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      S2CGetPlayerProfileRsp_descriptor_,
      S2CGetPlayerProfileRsp::default_instance_,
      S2CGetPlayerProfileRsp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(S2CGetPlayerProfileRsp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(S2CGetPlayerProfileRsp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_15001_5fS2CGetPlayerProfileRsp_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    S2CGetPlayerProfileRsp_descriptor_, &S2CGetPlayerProfileRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_15001_5fS2CGetPlayerProfileRsp_2eproto() {
  delete S2CGetPlayerProfileRsp::default_instance_;
  delete S2CGetPlayerProfileRsp_reflection_;
}

void protobuf_AddDesc_15001_5fS2CGetPlayerProfileRsp_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"15001_S2CGetPlayerProfileRsp.proto\022\010Pr"
    "otocol\"\220\001\n\026S2CGetPlayerProfileRsp\022\014\n\004gui"
    "d\030\001 \002(\004\022\016\n\006gender\030\002 \002(\005\022\020\n\010nickname\030\003 \002("
    "\014\022\022\n\nlast_login\030\004 \002(\003\022\020\n\010guild_id\030\005 \002(\004\022"
    "\022\n\nguild_name\030\006 \002(\014\022\014\n\004gold\030\007 \002(\r", 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "15001_S2CGetPlayerProfileRsp.proto", &protobuf_RegisterTypes);
  S2CGetPlayerProfileRsp::default_instance_ = new S2CGetPlayerProfileRsp();
  S2CGetPlayerProfileRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_15001_5fS2CGetPlayerProfileRsp_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_15001_5fS2CGetPlayerProfileRsp_2eproto {
  StaticDescriptorInitializer_15001_5fS2CGetPlayerProfileRsp_2eproto() {
    protobuf_AddDesc_15001_5fS2CGetPlayerProfileRsp_2eproto();
  }
} static_descriptor_initializer_15001_5fS2CGetPlayerProfileRsp_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int S2CGetPlayerProfileRsp::kGuidFieldNumber;
const int S2CGetPlayerProfileRsp::kGenderFieldNumber;
const int S2CGetPlayerProfileRsp::kNicknameFieldNumber;
const int S2CGetPlayerProfileRsp::kLastLoginFieldNumber;
const int S2CGetPlayerProfileRsp::kGuildIdFieldNumber;
const int S2CGetPlayerProfileRsp::kGuildNameFieldNumber;
const int S2CGetPlayerProfileRsp::kGoldFieldNumber;
#endif  // !_MSC_VER

S2CGetPlayerProfileRsp::S2CGetPlayerProfileRsp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void S2CGetPlayerProfileRsp::InitAsDefaultInstance() {
}

S2CGetPlayerProfileRsp::S2CGetPlayerProfileRsp(const S2CGetPlayerProfileRsp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void S2CGetPlayerProfileRsp::SharedCtor() {
  _cached_size_ = 0;
  guid_ = GOOGLE_ULONGLONG(0);
  gender_ = 0;
  nickname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  last_login_ = GOOGLE_LONGLONG(0);
  guild_id_ = GOOGLE_ULONGLONG(0);
  guild_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  gold_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

S2CGetPlayerProfileRsp::~S2CGetPlayerProfileRsp() {
  SharedDtor();
}

void S2CGetPlayerProfileRsp::SharedDtor() {
  if (nickname_ != &::google::protobuf::internal::kEmptyString) {
    delete nickname_;
  }
  if (guild_name_ != &::google::protobuf::internal::kEmptyString) {
    delete guild_name_;
  }
  if (this != default_instance_) {
  }
}

void S2CGetPlayerProfileRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* S2CGetPlayerProfileRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return S2CGetPlayerProfileRsp_descriptor_;
}

const S2CGetPlayerProfileRsp& S2CGetPlayerProfileRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_15001_5fS2CGetPlayerProfileRsp_2eproto();
  return *default_instance_;
}

S2CGetPlayerProfileRsp* S2CGetPlayerProfileRsp::default_instance_ = NULL;

S2CGetPlayerProfileRsp* S2CGetPlayerProfileRsp::New() const {
  return new S2CGetPlayerProfileRsp;
}

void S2CGetPlayerProfileRsp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    guid_ = GOOGLE_ULONGLONG(0);
    gender_ = 0;
    if (has_nickname()) {
      if (nickname_ != &::google::protobuf::internal::kEmptyString) {
        nickname_->clear();
      }
    }
    last_login_ = GOOGLE_LONGLONG(0);
    guild_id_ = GOOGLE_ULONGLONG(0);
    if (has_guild_name()) {
      if (guild_name_ != &::google::protobuf::internal::kEmptyString) {
        guild_name_->clear();
      }
    }
    gold_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool S2CGetPlayerProfileRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 guid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
          set_has_guid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_gender;
        break;
      }

      // required int32 gender = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gender:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gender_)));
          set_has_gender();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_nickname;
        break;
      }

      // required bytes nickname = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nickname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nickname()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_last_login;
        break;
      }

      // required int64 last_login = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_login:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &last_login_)));
          set_has_last_login();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_guild_id;
        break;
      }

      // required uint64 guild_id = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_guild_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guild_id_)));
          set_has_guild_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_guild_name;
        break;
      }

      // required bytes guild_name = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_guild_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_guild_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_gold;
        break;
      }

      // required uint32 gold = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gold:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gold_)));
          set_has_gold();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void S2CGetPlayerProfileRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 guid = 1;
  if (has_guid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->guid(), output);
  }

  // required int32 gender = 2;
  if (has_gender()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->gender(), output);
  }

  // required bytes nickname = 3;
  if (has_nickname()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->nickname(), output);
  }

  // required int64 last_login = 4;
  if (has_last_login()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->last_login(), output);
  }

  // required uint64 guild_id = 5;
  if (has_guild_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->guild_id(), output);
  }

  // required bytes guild_name = 6;
  if (has_guild_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      6, this->guild_name(), output);
  }

  // required uint32 gold = 7;
  if (has_gold()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->gold(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* S2CGetPlayerProfileRsp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 guid = 1;
  if (has_guid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->guid(), target);
  }

  // required int32 gender = 2;
  if (has_gender()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->gender(), target);
  }

  // required bytes nickname = 3;
  if (has_nickname()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->nickname(), target);
  }

  // required int64 last_login = 4;
  if (has_last_login()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->last_login(), target);
  }

  // required uint64 guild_id = 5;
  if (has_guild_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->guild_id(), target);
  }

  // required bytes guild_name = 6;
  if (has_guild_name()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->guild_name(), target);
  }

  // required uint32 gold = 7;
  if (has_gold()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->gold(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int S2CGetPlayerProfileRsp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 guid = 1;
    if (has_guid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->guid());
    }

    // required int32 gender = 2;
    if (has_gender()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gender());
    }

    // required bytes nickname = 3;
    if (has_nickname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->nickname());
    }

    // required int64 last_login = 4;
    if (has_last_login()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->last_login());
    }

    // required uint64 guild_id = 5;
    if (has_guild_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->guild_id());
    }

    // required bytes guild_name = 6;
    if (has_guild_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->guild_name());
    }

    // required uint32 gold = 7;
    if (has_gold()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->gold());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void S2CGetPlayerProfileRsp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const S2CGetPlayerProfileRsp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const S2CGetPlayerProfileRsp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void S2CGetPlayerProfileRsp::MergeFrom(const S2CGetPlayerProfileRsp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_guid()) {
      set_guid(from.guid());
    }
    if (from.has_gender()) {
      set_gender(from.gender());
    }
    if (from.has_nickname()) {
      set_nickname(from.nickname());
    }
    if (from.has_last_login()) {
      set_last_login(from.last_login());
    }
    if (from.has_guild_id()) {
      set_guild_id(from.guild_id());
    }
    if (from.has_guild_name()) {
      set_guild_name(from.guild_name());
    }
    if (from.has_gold()) {
      set_gold(from.gold());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void S2CGetPlayerProfileRsp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void S2CGetPlayerProfileRsp::CopyFrom(const S2CGetPlayerProfileRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool S2CGetPlayerProfileRsp::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void S2CGetPlayerProfileRsp::Swap(S2CGetPlayerProfileRsp* other) {
  if (other != this) {
    std::swap(guid_, other->guid_);
    std::swap(gender_, other->gender_);
    std::swap(nickname_, other->nickname_);
    std::swap(last_login_, other->last_login_);
    std::swap(guild_id_, other->guild_id_);
    std::swap(guild_name_, other->guild_name_);
    std::swap(gold_, other->gold_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata S2CGetPlayerProfileRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = S2CGetPlayerProfileRsp_descriptor_;
  metadata.reflection = S2CGetPlayerProfileRsp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
