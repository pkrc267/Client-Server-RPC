// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: my.proto

#include "my.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class CallDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Call> _instance;
} _Call_default_instance_;
class ReturnDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Return> _instance;
} _Return_default_instance_;
static void InitDefaultsscc_info_Call_my_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Call_default_instance_;
    new (ptr) ::Call();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Call::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Call_my_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Call_my_2eproto}, {}};

static void InitDefaultsscc_info_Return_my_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Return_default_instance_;
    new (ptr) ::Return();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Return::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Return_my_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Return_my_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_my_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_my_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_my_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_my_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Call, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Call, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Call, name_),
  PROTOBUF_FIELD_OFFSET(::Call, args1_),
  PROTOBUF_FIELD_OFFSET(::Call, args2_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::Return, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Return, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Return, success_),
  PROTOBUF_FIELD_OFFSET(::Return, value_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::Call)},
  { 11, 18, sizeof(::Return)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Call_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Return_default_instance_),
};

const char descriptor_table_protodef_my_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\010my.proto\"2\n\004Call\022\014\n\004name\030\001 \002(\t\022\r\n\005args"
  "1\030\002 \002(\006\022\r\n\005args2\030\003 \002(\006\"(\n\006Return\022\017\n\007succ"
  "ess\030\001 \002(\010\022\r\n\005value\030\002 \002(\006"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_my_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_my_2eproto_sccs[2] = {
  &scc_info_Call_my_2eproto.base,
  &scc_info_Return_my_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_my_2eproto_once;
static bool descriptor_table_my_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_my_2eproto = {
  &descriptor_table_my_2eproto_initialized, descriptor_table_protodef_my_2eproto, "my.proto", 104,
  &descriptor_table_my_2eproto_once, descriptor_table_my_2eproto_sccs, descriptor_table_my_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_my_2eproto::offsets,
  file_level_metadata_my_2eproto, 2, file_level_enum_descriptors_my_2eproto, file_level_service_descriptors_my_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_my_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_my_2eproto), true);

// ===================================================================

void Call::InitAsDefaultInstance() {
}
class Call::_Internal {
 public:
  using HasBits = decltype(std::declval<Call>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_args1(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_args2(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

Call::Call()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Call)
}
Call::Call(const Call& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  ::memcpy(&args1_, &from.args1_,
    static_cast<size_t>(reinterpret_cast<char*>(&args2_) -
    reinterpret_cast<char*>(&args1_)) + sizeof(args2_));
  // @@protoc_insertion_point(copy_constructor:Call)
}

void Call::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Call_my_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&args1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&args2_) -
      reinterpret_cast<char*>(&args1_)) + sizeof(args2_));
}

Call::~Call() {
  // @@protoc_insertion_point(destructor:Call)
  SharedDtor();
}

void Call::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Call::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Call& Call::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Call_my_2eproto.base);
  return *internal_default_instance();
}


void Call::Clear() {
// @@protoc_insertion_point(message_clear_start:Call)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&args1_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&args2_) -
        reinterpret_cast<char*>(&args1_)) + sizeof(args2_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Call::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_name(), ptr, ctx, "Call.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required fixed64 args1 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_args1(&has_bits);
          args1_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint64>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint64);
        } else goto handle_unusual;
        continue;
      // required fixed64 args2 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_args2(&has_bits);
          args2_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint64>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint64);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Call::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Call)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Call.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // required fixed64 args1 = 2;
  if (cached_has_bits & 0x00000002u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(2, this->_internal_args1(), target);
  }

  // required fixed64 args2 = 3;
  if (cached_has_bits & 0x00000004u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(3, this->_internal_args2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Call)
  return target;
}

size_t Call::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Call)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (has_args1()) {
    // required fixed64 args1 = 2;
    total_size += 1 + 8;
  }

  if (has_args2()) {
    // required fixed64 args2 = 3;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t Call::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Call)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required fixed64 args1 = 2;
    total_size += 1 + 8;

    // required fixed64 args2 = 3;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Call::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Call)
  GOOGLE_DCHECK_NE(&from, this);
  const Call* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Call>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Call)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Call)
    MergeFrom(*source);
  }
}

void Call::MergeFrom(const Call& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Call)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      args1_ = from.args1_;
    }
    if (cached_has_bits & 0x00000004u) {
      args2_ = from.args2_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Call::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Call)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Call::CopyFrom(const Call& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Call)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Call::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void Call::InternalSwap(Call* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(args1_, other->args1_);
  swap(args2_, other->args2_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Call::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Return::InitAsDefaultInstance() {
}
class Return::_Internal {
 public:
  using HasBits = decltype(std::declval<Return>()._has_bits_);
  static void set_has_success(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Return::Return()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Return)
}
Return::Return(const Return& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&value_, &from.value_,
    static_cast<size_t>(reinterpret_cast<char*>(&success_) -
    reinterpret_cast<char*>(&value_)) + sizeof(success_));
  // @@protoc_insertion_point(copy_constructor:Return)
}

void Return::SharedCtor() {
  ::memset(&value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&success_) -
      reinterpret_cast<char*>(&value_)) + sizeof(success_));
}

Return::~Return() {
  // @@protoc_insertion_point(destructor:Return)
  SharedDtor();
}

void Return::SharedDtor() {
}

void Return::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Return& Return::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Return_my_2eproto.base);
  return *internal_default_instance();
}


void Return::Clear() {
// @@protoc_insertion_point(message_clear_start:Return)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&value_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&success_) -
        reinterpret_cast<char*>(&value_)) + sizeof(success_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Return::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required bool success = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_success(&has_bits);
          success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required fixed64 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint64>(ptr);
          ptr += sizeof(::PROTOBUF_NAMESPACE_ID::uint64);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Return::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Return)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool success = 1;
  if (cached_has_bits & 0x00000002u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_success(), target);
  }

  // required fixed64 value = 2;
  if (cached_has_bits & 0x00000001u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFixed64ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Return)
  return target;
}

size_t Return::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Return)
  size_t total_size = 0;

  if (has_value()) {
    // required fixed64 value = 2;
    total_size += 1 + 8;
  }

  if (has_success()) {
    // required bool success = 1;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t Return::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Return)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required fixed64 value = 2;
    total_size += 1 + 8;

    // required bool success = 1;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Return::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Return)
  GOOGLE_DCHECK_NE(&from, this);
  const Return* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Return>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Return)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Return)
    MergeFrom(*source);
  }
}

void Return::MergeFrom(const Return& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Return)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      value_ = from.value_;
    }
    if (cached_has_bits & 0x00000002u) {
      success_ = from.success_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Return::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Return)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Return::CopyFrom(const Return& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Return)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Return::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Return::InternalSwap(Return* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(value_, other->value_);
  swap(success_, other->success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Return::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Call* Arena::CreateMaybeMessage< ::Call >(Arena* arena) {
  return Arena::CreateInternal< ::Call >(arena);
}
template<> PROTOBUF_NOINLINE ::Return* Arena::CreateMaybeMessage< ::Return >(Arena* arena) {
  return Arena::CreateInternal< ::Return >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
