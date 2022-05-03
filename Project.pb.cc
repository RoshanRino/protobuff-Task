// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Project.proto

#include "Project.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace projectdata {
PROTOBUF_CONSTEXPR myProject::myProject(
    ::_pbi::ConstantInitialized)
  : datecreated_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , projectname_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , timecreated_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , projectid_(0)
  , currentversion_(0){}
struct myProjectDefaultTypeInternal {
  PROTOBUF_CONSTEXPR myProjectDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~myProjectDefaultTypeInternal() {}
  union {
    myProject _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 myProjectDefaultTypeInternal _myProject_default_instance_;
PROTOBUF_CONSTEXPR myProjects::myProjects(
    ::_pbi::ConstantInitialized)
  : project_(){}
struct myProjectsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR myProjectsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~myProjectsDefaultTypeInternal() {}
  union {
    myProjects _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 myProjectsDefaultTypeInternal _myProjects_default_instance_;
}  // namespace projectdata
static ::_pb::Metadata file_level_metadata_Project_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Project_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Project_2eproto = nullptr;

const uint32_t TableStruct_Project_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, projectid_),
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, datecreated_),
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, projectname_),
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, timecreated_),
  PROTOBUF_FIELD_OFFSET(::projectdata::myProject, currentversion_),
  3,
  0,
  1,
  2,
  4,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::projectdata::myProjects, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::projectdata::myProjects, project_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::projectdata::myProject)},
  { 16, -1, -1, sizeof(::projectdata::myProjects)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::projectdata::_myProject_default_instance_._instance,
  &::projectdata::_myProjects_default_instance_._instance,
};

const char descriptor_table_protodef_Project_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rProject.proto\022\013projectdata\"\337\001\n\tmyProje"
  "ct\022\026\n\tprojectId\030\001 \001(\005H\000\210\001\001\022\030\n\013dateCreate"
  "d\030\003 \001(\tH\001\210\001\001\022\030\n\013projectName\030\004 \001(\tH\002\210\001\001\022\030"
  "\n\013timeCreated\030\005 \001(\tH\003\210\001\001\022\033\n\016currentVersi"
  "on\030\002 \001(\005H\004\210\001\001B\014\n\n_projectIdB\016\n\014_dateCrea"
  "tedB\016\n\014_projectNameB\016\n\014_timeCreatedB\021\n\017_"
  "currentVersion\"5\n\nmyProjects\022\'\n\007project\030"
  "\001 \003(\0132\026.projectdata.myProjectb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Project_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Project_2eproto = {
    false, false, 317, descriptor_table_protodef_Project_2eproto,
    "Project.proto",
    &descriptor_table_Project_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Project_2eproto::offsets,
    file_level_metadata_Project_2eproto, file_level_enum_descriptors_Project_2eproto,
    file_level_service_descriptors_Project_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Project_2eproto_getter() {
  return &descriptor_table_Project_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Project_2eproto(&descriptor_table_Project_2eproto);
namespace projectdata {

// ===================================================================

class myProject::_Internal {
 public:
  using HasBits = decltype(std::declval<myProject>()._has_bits_);
  static void set_has_projectid(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_datecreated(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_projectname(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timecreated(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_currentversion(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

myProject::myProject(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:projectdata.myProject)
}
myProject::myProject(const myProject& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  datecreated_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    datecreated_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_datecreated()) {
    datecreated_.Set(from._internal_datecreated(), 
      GetArenaForAllocation());
  }
  projectname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    projectname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_projectname()) {
    projectname_.Set(from._internal_projectname(), 
      GetArenaForAllocation());
  }
  timecreated_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    timecreated_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_timecreated()) {
    timecreated_.Set(from._internal_timecreated(), 
      GetArenaForAllocation());
  }
  ::memcpy(&projectid_, &from.projectid_,
    static_cast<size_t>(reinterpret_cast<char*>(&currentversion_) -
    reinterpret_cast<char*>(&projectid_)) + sizeof(currentversion_));
  // @@protoc_insertion_point(copy_constructor:projectdata.myProject)
}

inline void myProject::SharedCtor() {
datecreated_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  datecreated_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
projectname_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  projectname_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
timecreated_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  timecreated_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&projectid_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&currentversion_) -
    reinterpret_cast<char*>(&projectid_)) + sizeof(currentversion_));
}

myProject::~myProject() {
  // @@protoc_insertion_point(destructor:projectdata.myProject)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void myProject::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  datecreated_.Destroy();
  projectname_.Destroy();
  timecreated_.Destroy();
}

void myProject::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void myProject::Clear() {
// @@protoc_insertion_point(message_clear_start:projectdata.myProject)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      datecreated_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      projectname_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      timecreated_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&projectid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&currentversion_) -
        reinterpret_cast<char*>(&projectid_)) + sizeof(currentversion_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* myProject::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 projectId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_projectid(&has_bits);
          projectid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 currentVersion = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_currentversion(&has_bits);
          currentversion_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string dateCreated = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_datecreated();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "projectdata.myProject.dateCreated"));
        } else
          goto handle_unusual;
        continue;
      // optional string projectName = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_projectname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "projectdata.myProject.projectName"));
        } else
          goto handle_unusual;
        continue;
      // optional string timeCreated = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_timecreated();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "projectdata.myProject.timeCreated"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* myProject::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:projectdata.myProject)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 projectId = 1;
  if (_internal_has_projectid()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_projectid(), target);
  }

  // optional int32 currentVersion = 2;
  if (_internal_has_currentversion()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_currentversion(), target);
  }

  // optional string dateCreated = 3;
  if (_internal_has_datecreated()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_datecreated().data(), static_cast<int>(this->_internal_datecreated().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "projectdata.myProject.dateCreated");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_datecreated(), target);
  }

  // optional string projectName = 4;
  if (_internal_has_projectname()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_projectname().data(), static_cast<int>(this->_internal_projectname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "projectdata.myProject.projectName");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_projectname(), target);
  }

  // optional string timeCreated = 5;
  if (_internal_has_timecreated()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_timecreated().data(), static_cast<int>(this->_internal_timecreated().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "projectdata.myProject.timeCreated");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_timecreated(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:projectdata.myProject)
  return target;
}

size_t myProject::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:projectdata.myProject)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string dateCreated = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_datecreated());
    }

    // optional string projectName = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_projectname());
    }

    // optional string timeCreated = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_timecreated());
    }

    // optional int32 projectId = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_projectid());
    }

    // optional int32 currentVersion = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_currentversion());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData myProject::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    myProject::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*myProject::GetClassData() const { return &_class_data_; }

void myProject::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<myProject *>(to)->MergeFrom(
      static_cast<const myProject &>(from));
}


void myProject::MergeFrom(const myProject& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:projectdata.myProject)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_datecreated(from._internal_datecreated());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_projectname(from._internal_projectname());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_timecreated(from._internal_timecreated());
    }
    if (cached_has_bits & 0x00000008u) {
      projectid_ = from.projectid_;
    }
    if (cached_has_bits & 0x00000010u) {
      currentversion_ = from.currentversion_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void myProject::CopyFrom(const myProject& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:projectdata.myProject)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool myProject::IsInitialized() const {
  return true;
}

void myProject::InternalSwap(myProject* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &datecreated_, lhs_arena,
      &other->datecreated_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &projectname_, lhs_arena,
      &other->projectname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &timecreated_, lhs_arena,
      &other->timecreated_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(myProject, currentversion_)
      + sizeof(myProject::currentversion_)
      - PROTOBUF_FIELD_OFFSET(myProject, projectid_)>(
          reinterpret_cast<char*>(&projectid_),
          reinterpret_cast<char*>(&other->projectid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata myProject::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Project_2eproto_getter, &descriptor_table_Project_2eproto_once,
      file_level_metadata_Project_2eproto[0]);
}

// ===================================================================

class myProjects::_Internal {
 public:
};

myProjects::myProjects(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  project_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:projectdata.myProjects)
}
myProjects::myProjects(const myProjects& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      project_(from.project_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:projectdata.myProjects)
}

inline void myProjects::SharedCtor() {
}

myProjects::~myProjects() {
  // @@protoc_insertion_point(destructor:projectdata.myProjects)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void myProjects::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void myProjects::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void myProjects::Clear() {
// @@protoc_insertion_point(message_clear_start:projectdata.myProjects)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  project_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* myProjects::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .projectdata.myProject project = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_project(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* myProjects::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:projectdata.myProjects)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .projectdata.myProject project = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_project_size()); i < n; i++) {
    const auto& repfield = this->_internal_project(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:projectdata.myProjects)
  return target;
}

size_t myProjects::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:projectdata.myProjects)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .projectdata.myProject project = 1;
  total_size += 1UL * this->_internal_project_size();
  for (const auto& msg : this->project_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData myProjects::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    myProjects::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*myProjects::GetClassData() const { return &_class_data_; }

void myProjects::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<myProjects *>(to)->MergeFrom(
      static_cast<const myProjects &>(from));
}


void myProjects::MergeFrom(const myProjects& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:projectdata.myProjects)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  project_.MergeFrom(from.project_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void myProjects::CopyFrom(const myProjects& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:projectdata.myProjects)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool myProjects::IsInitialized() const {
  return true;
}

void myProjects::InternalSwap(myProjects* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  project_.InternalSwap(&other->project_);
}

::PROTOBUF_NAMESPACE_ID::Metadata myProjects::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Project_2eproto_getter, &descriptor_table_Project_2eproto_once,
      file_level_metadata_Project_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace projectdata
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::projectdata::myProject*
Arena::CreateMaybeMessage< ::projectdata::myProject >(Arena* arena) {
  return Arena::CreateMessageInternal< ::projectdata::myProject >(arena);
}
template<> PROTOBUF_NOINLINE ::projectdata::myProjects*
Arena::CreateMaybeMessage< ::projectdata::myProjects >(Arena* arena) {
  return Arena::CreateMessageInternal< ::projectdata::myProjects >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>