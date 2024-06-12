// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Login.proto
// Protobuf C++ Version: 5.27.0

#include "Login.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace PHM {

inline constexpr RegisterResp::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR RegisterResp::RegisterResp(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct RegisterRespDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RegisterRespDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RegisterRespDefaultTypeInternal() {}
  union {
    RegisterResp _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RegisterRespDefaultTypeInternal _RegisterResp_default_instance_;

inline constexpr Register::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : account_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        pwd_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        phonenum_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Register::Register(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct RegisterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RegisterDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RegisterDefaultTypeInternal() {}
  union {
    Register _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RegisterDefaultTypeInternal _Register_default_instance_;

inline constexpr LoginResp::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR LoginResp::LoginResp(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct LoginRespDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginRespDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginRespDefaultTypeInternal() {}
  union {
    LoginResp _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginRespDefaultTypeInternal _LoginResp_default_instance_;

inline constexpr Login::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : account_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        pwd_md5_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Login::Login(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct LoginDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginDefaultTypeInternal() {}
  union {
    Login _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginDefaultTypeInternal _Login_default_instance_;
}  // namespace PHM
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Login_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Login_2eproto = nullptr;
const ::uint32_t
    TableStruct_Login_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PHM::Register, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PHM::Register, _impl_.account_),
        PROTOBUF_FIELD_OFFSET(::PHM::Register, _impl_.pwd_),
        PROTOBUF_FIELD_OFFSET(::PHM::Register, _impl_.phonenum_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PHM::RegisterResp, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PHM::RegisterResp, _impl_.token_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PHM::Login, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PHM::Login, _impl_.account_),
        PROTOBUF_FIELD_OFFSET(::PHM::Login, _impl_.pwd_md5_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::PHM::LoginResp, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::PHM::LoginResp, _impl_.token_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::PHM::Register)},
        {11, -1, -1, sizeof(::PHM::RegisterResp)},
        {20, -1, -1, sizeof(::PHM::Login)},
        {30, -1, -1, sizeof(::PHM::LoginResp)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::PHM::_Register_default_instance_._instance,
    &::PHM::_RegisterResp_default_instance_._instance,
    &::PHM::_Login_default_instance_._instance,
    &::PHM::_LoginResp_default_instance_._instance,
};
const char descriptor_table_protodef_Login_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\013Login.proto\022\003PHM\":\n\010Register\022\017\n\007accoun"
    "t\030\001 \001(\t\022\013\n\003pwd\030\002 \001(\t\022\020\n\010phoneNum\030\003 \001(\005\"\035"
    "\n\014RegisterResp\022\r\n\005token\030\001 \001(\t\")\n\005Login\022\017"
    "\n\007account\030\001 \001(\t\022\017\n\007pwd_md5\030\002 \001(\t\"\032\n\tLogi"
    "nResp\022\r\n\005token\030\001 \001(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_Login_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Login_2eproto = {
    false,
    false,
    188,
    descriptor_table_protodef_Login_2eproto,
    "Login.proto",
    &descriptor_table_Login_2eproto_once,
    nullptr,
    0,
    4,
    schemas,
    file_default_instances,
    TableStruct_Login_2eproto::offsets,
    file_level_enum_descriptors_Login_2eproto,
    file_level_service_descriptors_Login_2eproto,
};
namespace PHM {
// ===================================================================

class Register::_Internal {
 public:
};

Register::Register(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PHM.Register)
}
inline PROTOBUF_NDEBUG_INLINE Register::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::PHM::Register& from_msg)
      : account_(arena, from.account_),
        pwd_(arena, from.pwd_),
        _cached_size_{0} {}

Register::Register(
    ::google::protobuf::Arena* arena,
    const Register& from)
    : ::google::protobuf::Message(arena) {
  Register* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.phonenum_ = from._impl_.phonenum_;

  // @@protoc_insertion_point(copy_constructor:PHM.Register)
}
inline PROTOBUF_NDEBUG_INLINE Register::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : account_(arena),
        pwd_(arena),
        _cached_size_{0} {}

inline void Register::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.phonenum_ = {};
}
Register::~Register() {
  // @@protoc_insertion_point(destructor:PHM.Register)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Register::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.account_.Destroy();
  _impl_.pwd_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Register::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Register, _impl_._cached_size_),
              false,
          },
          &Register::MergeImpl,
          &Register::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 31, 2> Register::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Register_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PHM::Register>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string account = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Register, _impl_.account_)}},
    // string pwd = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Register, _impl_.pwd_)}},
    // int32 phoneNum = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Register, _impl_.phonenum_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Register, _impl_.phonenum_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string account = 1;
    {PROTOBUF_FIELD_OFFSET(Register, _impl_.account_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string pwd = 2;
    {PROTOBUF_FIELD_OFFSET(Register, _impl_.pwd_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int32 phoneNum = 3;
    {PROTOBUF_FIELD_OFFSET(Register, _impl_.phonenum_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
    "\14\7\3\0\0\0\0\0"
    "PHM.Register"
    "account"
    "pwd"
  }},
};

PROTOBUF_NOINLINE void Register::Clear() {
// @@protoc_insertion_point(message_clear_start:PHM.Register)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.account_.ClearToEmpty();
  _impl_.pwd_.ClearToEmpty();
  _impl_.phonenum_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Register::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PHM.Register)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string account = 1;
  if (!this->_internal_account().empty()) {
    const std::string& _s = this->_internal_account();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.Register.account");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string pwd = 2;
  if (!this->_internal_pwd().empty()) {
    const std::string& _s = this->_internal_pwd();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.Register.pwd");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // int32 phoneNum = 3;
  if (this->_internal_phonenum() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_phonenum(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PHM.Register)
  return target;
}

::size_t Register::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PHM.Register)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string account = 1;
  if (!this->_internal_account().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_account());
  }

  // string pwd = 2;
  if (!this->_internal_pwd().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_pwd());
  }

  // int32 phoneNum = 3;
  if (this->_internal_phonenum() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_phonenum());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Register::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Register*>(&to_msg);
  auto& from = static_cast<const Register&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PHM.Register)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_account().empty()) {
    _this->_internal_set_account(from._internal_account());
  }
  if (!from._internal_pwd().empty()) {
    _this->_internal_set_pwd(from._internal_pwd());
  }
  if (from._internal_phonenum() != 0) {
    _this->_impl_.phonenum_ = from._impl_.phonenum_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Register::CopyFrom(const Register& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PHM.Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Register::InternalSwap(Register* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.account_, &other->_impl_.account_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.pwd_, &other->_impl_.pwd_, arena);
        swap(_impl_.phonenum_, other->_impl_.phonenum_);
}

::google::protobuf::Metadata Register::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class RegisterResp::_Internal {
 public:
};

RegisterResp::RegisterResp(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PHM.RegisterResp)
}
inline PROTOBUF_NDEBUG_INLINE RegisterResp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::PHM::RegisterResp& from_msg)
      : token_(arena, from.token_),
        _cached_size_{0} {}

RegisterResp::RegisterResp(
    ::google::protobuf::Arena* arena,
    const RegisterResp& from)
    : ::google::protobuf::Message(arena) {
  RegisterResp* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:PHM.RegisterResp)
}
inline PROTOBUF_NDEBUG_INLINE RegisterResp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : token_(arena),
        _cached_size_{0} {}

inline void RegisterResp::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
RegisterResp::~RegisterResp() {
  // @@protoc_insertion_point(destructor:PHM.RegisterResp)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void RegisterResp::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.token_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
RegisterResp::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(RegisterResp, _impl_._cached_size_),
              false,
          },
          &RegisterResp::MergeImpl,
          &RegisterResp::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 30, 2> RegisterResp::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_RegisterResp_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PHM::RegisterResp>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string token = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(RegisterResp, _impl_.token_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string token = 1;
    {PROTOBUF_FIELD_OFFSET(RegisterResp, _impl_.token_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\20\5\0\0\0\0\0\0"
    "PHM.RegisterResp"
    "token"
  }},
};

PROTOBUF_NOINLINE void RegisterResp::Clear() {
// @@protoc_insertion_point(message_clear_start:PHM.RegisterResp)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.token_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* RegisterResp::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PHM.RegisterResp)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string token = 1;
  if (!this->_internal_token().empty()) {
    const std::string& _s = this->_internal_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.RegisterResp.token");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PHM.RegisterResp)
  return target;
}

::size_t RegisterResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PHM.RegisterResp)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string token = 1;
  if (!this->_internal_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_token());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void RegisterResp::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<RegisterResp*>(&to_msg);
  auto& from = static_cast<const RegisterResp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PHM.RegisterResp)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_token().empty()) {
    _this->_internal_set_token(from._internal_token());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RegisterResp::CopyFrom(const RegisterResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PHM.RegisterResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void RegisterResp::InternalSwap(RegisterResp* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.token_, &other->_impl_.token_, arena);
}

::google::protobuf::Metadata RegisterResp::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Login::_Internal {
 public:
};

Login::Login(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PHM.Login)
}
inline PROTOBUF_NDEBUG_INLINE Login::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::PHM::Login& from_msg)
      : account_(arena, from.account_),
        pwd_md5_(arena, from.pwd_md5_),
        _cached_size_{0} {}

Login::Login(
    ::google::protobuf::Arena* arena,
    const Login& from)
    : ::google::protobuf::Message(arena) {
  Login* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:PHM.Login)
}
inline PROTOBUF_NDEBUG_INLINE Login::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : account_(arena),
        pwd_md5_(arena),
        _cached_size_{0} {}

inline void Login::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Login::~Login() {
  // @@protoc_insertion_point(destructor:PHM.Login)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Login::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.account_.Destroy();
  _impl_.pwd_md5_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Login::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Login, _impl_._cached_size_),
              false,
          },
          &Login::MergeImpl,
          &Login::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 32, 2> Login::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Login_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PHM::Login>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string pwd_md5 = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Login, _impl_.pwd_md5_)}},
    // string account = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Login, _impl_.account_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string account = 1;
    {PROTOBUF_FIELD_OFFSET(Login, _impl_.account_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string pwd_md5 = 2;
    {PROTOBUF_FIELD_OFFSET(Login, _impl_.pwd_md5_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\11\7\7\0\0\0\0\0"
    "PHM.Login"
    "account"
    "pwd_md5"
  }},
};

PROTOBUF_NOINLINE void Login::Clear() {
// @@protoc_insertion_point(message_clear_start:PHM.Login)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.account_.ClearToEmpty();
  _impl_.pwd_md5_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Login::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PHM.Login)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string account = 1;
  if (!this->_internal_account().empty()) {
    const std::string& _s = this->_internal_account();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.Login.account");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string pwd_md5 = 2;
  if (!this->_internal_pwd_md5().empty()) {
    const std::string& _s = this->_internal_pwd_md5();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.Login.pwd_md5");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PHM.Login)
  return target;
}

::size_t Login::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PHM.Login)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string account = 1;
  if (!this->_internal_account().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_account());
  }

  // string pwd_md5 = 2;
  if (!this->_internal_pwd_md5().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_pwd_md5());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Login::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Login*>(&to_msg);
  auto& from = static_cast<const Login&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PHM.Login)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_account().empty()) {
    _this->_internal_set_account(from._internal_account());
  }
  if (!from._internal_pwd_md5().empty()) {
    _this->_internal_set_pwd_md5(from._internal_pwd_md5());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Login::CopyFrom(const Login& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PHM.Login)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Login::InternalSwap(Login* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.account_, &other->_impl_.account_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.pwd_md5_, &other->_impl_.pwd_md5_, arena);
}

::google::protobuf::Metadata Login::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class LoginResp::_Internal {
 public:
};

LoginResp::LoginResp(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:PHM.LoginResp)
}
inline PROTOBUF_NDEBUG_INLINE LoginResp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::PHM::LoginResp& from_msg)
      : token_(arena, from.token_),
        _cached_size_{0} {}

LoginResp::LoginResp(
    ::google::protobuf::Arena* arena,
    const LoginResp& from)
    : ::google::protobuf::Message(arena) {
  LoginResp* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:PHM.LoginResp)
}
inline PROTOBUF_NDEBUG_INLINE LoginResp::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : token_(arena),
        _cached_size_{0} {}

inline void LoginResp::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
LoginResp::~LoginResp() {
  // @@protoc_insertion_point(destructor:PHM.LoginResp)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void LoginResp::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.token_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
LoginResp::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(LoginResp, _impl_._cached_size_),
              false,
          },
          &LoginResp::MergeImpl,
          &LoginResp::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 27, 2> LoginResp::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_LoginResp_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::PHM::LoginResp>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string token = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(LoginResp, _impl_.token_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string token = 1;
    {PROTOBUF_FIELD_OFFSET(LoginResp, _impl_.token_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\15\5\0\0\0\0\0\0"
    "PHM.LoginResp"
    "token"
  }},
};

PROTOBUF_NOINLINE void LoginResp::Clear() {
// @@protoc_insertion_point(message_clear_start:PHM.LoginResp)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.token_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* LoginResp::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PHM.LoginResp)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string token = 1;
  if (!this->_internal_token().empty()) {
    const std::string& _s = this->_internal_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "PHM.LoginResp.token");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PHM.LoginResp)
  return target;
}

::size_t LoginResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PHM.LoginResp)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string token = 1;
  if (!this->_internal_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_token());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void LoginResp::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<LoginResp*>(&to_msg);
  auto& from = static_cast<const LoginResp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:PHM.LoginResp)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_token().empty()) {
    _this->_internal_set_token(from._internal_token());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void LoginResp::CopyFrom(const LoginResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PHM.LoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void LoginResp::InternalSwap(LoginResp* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.token_, &other->_impl_.token_, arena);
}

::google::protobuf::Metadata LoginResp::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace PHM
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_Login_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
