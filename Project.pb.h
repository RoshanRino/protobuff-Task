// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Project.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Project_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Project_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Project_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Project_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Project_2eproto;
namespace projectdata {
class myProject;
struct myProjectDefaultTypeInternal;
extern myProjectDefaultTypeInternal _myProject_default_instance_;
class myProjects;
struct myProjectsDefaultTypeInternal;
extern myProjectsDefaultTypeInternal _myProjects_default_instance_;
}  // namespace projectdata
PROTOBUF_NAMESPACE_OPEN
template<> ::projectdata::myProject* Arena::CreateMaybeMessage<::projectdata::myProject>(Arena*);
template<> ::projectdata::myProjects* Arena::CreateMaybeMessage<::projectdata::myProjects>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace projectdata {

// ===================================================================

class myProject final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:projectdata.myProject) */ {
 public:
  inline myProject() : myProject(nullptr) {}
  ~myProject() override;
  explicit PROTOBUF_CONSTEXPR myProject(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  myProject(const myProject& from);
  myProject(myProject&& from) noexcept
    : myProject() {
    *this = ::std::move(from);
  }

  inline myProject& operator=(const myProject& from) {
    CopyFrom(from);
    return *this;
  }
  inline myProject& operator=(myProject&& from) noexcept {
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
  static const myProject& default_instance() {
    return *internal_default_instance();
  }
  static inline const myProject* internal_default_instance() {
    return reinterpret_cast<const myProject*>(
               &_myProject_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(myProject& a, myProject& b) {
    a.Swap(&b);
  }
  inline void Swap(myProject* other) {
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
  void UnsafeArenaSwap(myProject* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  myProject* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<myProject>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const myProject& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const myProject& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(myProject* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "projectdata.myProject";
  }
  protected:
  explicit myProject(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDateCreatedFieldNumber = 3,
    kProjectNameFieldNumber = 4,
    kTimeCreatedFieldNumber = 5,
    kProjectIdFieldNumber = 1,
    kCurrentVersionFieldNumber = 2,
  };
  // optional string dateCreated = 3;
  bool has_datecreated() const;
  private:
  bool _internal_has_datecreated() const;
  public:
  void clear_datecreated();
  const std::string& datecreated() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_datecreated(ArgT0&& arg0, ArgT... args);
  std::string* mutable_datecreated();
  PROTOBUF_NODISCARD std::string* release_datecreated();
  void set_allocated_datecreated(std::string* datecreated);
  private:
  const std::string& _internal_datecreated() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_datecreated(const std::string& value);
  std::string* _internal_mutable_datecreated();
  public:

  // optional string projectName = 4;
  bool has_projectname() const;
  private:
  bool _internal_has_projectname() const;
  public:
  void clear_projectname();
  const std::string& projectname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_projectname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_projectname();
  PROTOBUF_NODISCARD std::string* release_projectname();
  void set_allocated_projectname(std::string* projectname);
  private:
  const std::string& _internal_projectname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_projectname(const std::string& value);
  std::string* _internal_mutable_projectname();
  public:

  // optional string timeCreated = 5;
  bool has_timecreated() const;
  private:
  bool _internal_has_timecreated() const;
  public:
  void clear_timecreated();
  const std::string& timecreated() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_timecreated(ArgT0&& arg0, ArgT... args);
  std::string* mutable_timecreated();
  PROTOBUF_NODISCARD std::string* release_timecreated();
  void set_allocated_timecreated(std::string* timecreated);
  private:
  const std::string& _internal_timecreated() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_timecreated(const std::string& value);
  std::string* _internal_mutable_timecreated();
  public:

  // optional int32 projectId = 1;
  bool has_projectid() const;
  private:
  bool _internal_has_projectid() const;
  public:
  void clear_projectid();
  int32_t projectid() const;
  void set_projectid(int32_t value);
  private:
  int32_t _internal_projectid() const;
  void _internal_set_projectid(int32_t value);
  public:

  // optional int32 currentVersion = 2;
  bool has_currentversion() const;
  private:
  bool _internal_has_currentversion() const;
  public:
  void clear_currentversion();
  int32_t currentversion() const;
  void set_currentversion(int32_t value);
  private:
  int32_t _internal_currentversion() const;
  void _internal_set_currentversion(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:projectdata.myProject)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr datecreated_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr projectname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr timecreated_;
  int32_t projectid_;
  int32_t currentversion_;
  friend struct ::TableStruct_Project_2eproto;
};
// -------------------------------------------------------------------

class myProjects final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:projectdata.myProjects) */ {
 public:
  inline myProjects() : myProjects(nullptr) {}
  ~myProjects() override;
  explicit PROTOBUF_CONSTEXPR myProjects(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  myProjects(const myProjects& from);
  myProjects(myProjects&& from) noexcept
    : myProjects() {
    *this = ::std::move(from);
  }

  inline myProjects& operator=(const myProjects& from) {
    CopyFrom(from);
    return *this;
  }
  inline myProjects& operator=(myProjects&& from) noexcept {
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
  static const myProjects& default_instance() {
    return *internal_default_instance();
  }
  static inline const myProjects* internal_default_instance() {
    return reinterpret_cast<const myProjects*>(
               &_myProjects_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(myProjects& a, myProjects& b) {
    a.Swap(&b);
  }
  inline void Swap(myProjects* other) {
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
  void UnsafeArenaSwap(myProjects* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  myProjects* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<myProjects>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const myProjects& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const myProjects& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(myProjects* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "projectdata.myProjects";
  }
  protected:
  explicit myProjects(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kProjectFieldNumber = 1,
  };
  // repeated .projectdata.myProject project = 1;
  int project_size() const;
  private:
  int _internal_project_size() const;
  public:
  void clear_project();
  ::projectdata::myProject* mutable_project(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::projectdata::myProject >*
      mutable_project();
  private:
  const ::projectdata::myProject& _internal_project(int index) const;
  ::projectdata::myProject* _internal_add_project();
  public:
  const ::projectdata::myProject& project(int index) const;
  ::projectdata::myProject* add_project();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::projectdata::myProject >&
      project() const;

  // @@protoc_insertion_point(class_scope:projectdata.myProjects)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::projectdata::myProject > project_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Project_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// myProject

// optional int32 projectId = 1;
inline bool myProject::_internal_has_projectid() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool myProject::has_projectid() const {
  return _internal_has_projectid();
}
inline void myProject::clear_projectid() {
  projectid_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline int32_t myProject::_internal_projectid() const {
  return projectid_;
}
inline int32_t myProject::projectid() const {
  // @@protoc_insertion_point(field_get:projectdata.myProject.projectId)
  return _internal_projectid();
}
inline void myProject::_internal_set_projectid(int32_t value) {
  _has_bits_[0] |= 0x00000008u;
  projectid_ = value;
}
inline void myProject::set_projectid(int32_t value) {
  _internal_set_projectid(value);
  // @@protoc_insertion_point(field_set:projectdata.myProject.projectId)
}

// optional string dateCreated = 3;
inline bool myProject::_internal_has_datecreated() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool myProject::has_datecreated() const {
  return _internal_has_datecreated();
}
inline void myProject::clear_datecreated() {
  datecreated_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& myProject::datecreated() const {
  // @@protoc_insertion_point(field_get:projectdata.myProject.dateCreated)
  return _internal_datecreated();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void myProject::set_datecreated(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 datecreated_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:projectdata.myProject.dateCreated)
}
inline std::string* myProject::mutable_datecreated() {
  std::string* _s = _internal_mutable_datecreated();
  // @@protoc_insertion_point(field_mutable:projectdata.myProject.dateCreated)
  return _s;
}
inline const std::string& myProject::_internal_datecreated() const {
  return datecreated_.Get();
}
inline void myProject::_internal_set_datecreated(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  datecreated_.Set(value, GetArenaForAllocation());
}
inline std::string* myProject::_internal_mutable_datecreated() {
  _has_bits_[0] |= 0x00000001u;
  return datecreated_.Mutable(GetArenaForAllocation());
}
inline std::string* myProject::release_datecreated() {
  // @@protoc_insertion_point(field_release:projectdata.myProject.dateCreated)
  if (!_internal_has_datecreated()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = datecreated_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (datecreated_.IsDefault()) {
    datecreated_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void myProject::set_allocated_datecreated(std::string* datecreated) {
  if (datecreated != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  datecreated_.SetAllocated(datecreated, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (datecreated_.IsDefault()) {
    datecreated_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:projectdata.myProject.dateCreated)
}

// optional string projectName = 4;
inline bool myProject::_internal_has_projectname() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool myProject::has_projectname() const {
  return _internal_has_projectname();
}
inline void myProject::clear_projectname() {
  projectname_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& myProject::projectname() const {
  // @@protoc_insertion_point(field_get:projectdata.myProject.projectName)
  return _internal_projectname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void myProject::set_projectname(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 projectname_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:projectdata.myProject.projectName)
}
inline std::string* myProject::mutable_projectname() {
  std::string* _s = _internal_mutable_projectname();
  // @@protoc_insertion_point(field_mutable:projectdata.myProject.projectName)
  return _s;
}
inline const std::string& myProject::_internal_projectname() const {
  return projectname_.Get();
}
inline void myProject::_internal_set_projectname(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  projectname_.Set(value, GetArenaForAllocation());
}
inline std::string* myProject::_internal_mutable_projectname() {
  _has_bits_[0] |= 0x00000002u;
  return projectname_.Mutable(GetArenaForAllocation());
}
inline std::string* myProject::release_projectname() {
  // @@protoc_insertion_point(field_release:projectdata.myProject.projectName)
  if (!_internal_has_projectname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = projectname_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (projectname_.IsDefault()) {
    projectname_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void myProject::set_allocated_projectname(std::string* projectname) {
  if (projectname != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  projectname_.SetAllocated(projectname, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (projectname_.IsDefault()) {
    projectname_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:projectdata.myProject.projectName)
}

// optional string timeCreated = 5;
inline bool myProject::_internal_has_timecreated() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool myProject::has_timecreated() const {
  return _internal_has_timecreated();
}
inline void myProject::clear_timecreated() {
  timecreated_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& myProject::timecreated() const {
  // @@protoc_insertion_point(field_get:projectdata.myProject.timeCreated)
  return _internal_timecreated();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void myProject::set_timecreated(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 timecreated_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:projectdata.myProject.timeCreated)
}
inline std::string* myProject::mutable_timecreated() {
  std::string* _s = _internal_mutable_timecreated();
  // @@protoc_insertion_point(field_mutable:projectdata.myProject.timeCreated)
  return _s;
}
inline const std::string& myProject::_internal_timecreated() const {
  return timecreated_.Get();
}
inline void myProject::_internal_set_timecreated(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  timecreated_.Set(value, GetArenaForAllocation());
}
inline std::string* myProject::_internal_mutable_timecreated() {
  _has_bits_[0] |= 0x00000004u;
  return timecreated_.Mutable(GetArenaForAllocation());
}
inline std::string* myProject::release_timecreated() {
  // @@protoc_insertion_point(field_release:projectdata.myProject.timeCreated)
  if (!_internal_has_timecreated()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  auto* p = timecreated_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (timecreated_.IsDefault()) {
    timecreated_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void myProject::set_allocated_timecreated(std::string* timecreated) {
  if (timecreated != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  timecreated_.SetAllocated(timecreated, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (timecreated_.IsDefault()) {
    timecreated_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:projectdata.myProject.timeCreated)
}

// optional int32 currentVersion = 2;
inline bool myProject::_internal_has_currentversion() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool myProject::has_currentversion() const {
  return _internal_has_currentversion();
}
inline void myProject::clear_currentversion() {
  currentversion_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline int32_t myProject::_internal_currentversion() const {
  return currentversion_;
}
inline int32_t myProject::currentversion() const {
  // @@protoc_insertion_point(field_get:projectdata.myProject.currentVersion)
  return _internal_currentversion();
}
inline void myProject::_internal_set_currentversion(int32_t value) {
  _has_bits_[0] |= 0x00000010u;
  currentversion_ = value;
}
inline void myProject::set_currentversion(int32_t value) {
  _internal_set_currentversion(value);
  // @@protoc_insertion_point(field_set:projectdata.myProject.currentVersion)
}

// -------------------------------------------------------------------

// myProjects

// repeated .projectdata.myProject project = 1;
inline int myProjects::_internal_project_size() const {
  return project_.size();
}
inline int myProjects::project_size() const {
  return _internal_project_size();
}
inline void myProjects::clear_project() {
  project_.Clear();
}
inline ::projectdata::myProject* myProjects::mutable_project(int index) {
  // @@protoc_insertion_point(field_mutable:projectdata.myProjects.project)
  return project_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::projectdata::myProject >*
myProjects::mutable_project() {
  // @@protoc_insertion_point(field_mutable_list:projectdata.myProjects.project)
  return &project_;
}
inline const ::projectdata::myProject& myProjects::_internal_project(int index) const {
  return project_.Get(index);
}
inline const ::projectdata::myProject& myProjects::project(int index) const {
  // @@protoc_insertion_point(field_get:projectdata.myProjects.project)
  return _internal_project(index);
}
inline ::projectdata::myProject* myProjects::_internal_add_project() {
  return project_.Add();
}
inline ::projectdata::myProject* myProjects::add_project() {
  ::projectdata::myProject* _add = _internal_add_project();
  // @@protoc_insertion_point(field_add:projectdata.myProjects.project)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::projectdata::myProject >&
myProjects::project() const {
  // @@protoc_insertion_point(field_list:projectdata.myProjects.project)
  return project_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace projectdata

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Project_2eproto
