// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cost.proto

#ifndef PROTOBUF_cost_2eproto__INCLUDED
#define PROTOBUF_cost_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_cost_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsComputer_CostImpl();
void InitDefaultsComputer_Cost();
void InitDefaultsCPU_CostImpl();
void InitDefaultsCPU_Cost();
void InitDefaultsMonitor_CostImpl();
void InitDefaultsMonitor_Cost();
void InitDefaultsInterface_CostImpl();
void InitDefaultsInterface_Cost();
inline void InitDefaults() {
  InitDefaultsComputer_Cost();
  InitDefaultsCPU_Cost();
  InitDefaultsMonitor_Cost();
  InitDefaultsInterface_Cost();
}
}  // namespace protobuf_cost_2eproto
namespace example_proto_class {
class CPU_Cost;
class CPU_CostDefaultTypeInternal;
extern CPU_CostDefaultTypeInternal _CPU_Cost_default_instance_;
class Computer_Cost;
class Computer_CostDefaultTypeInternal;
extern Computer_CostDefaultTypeInternal _Computer_Cost_default_instance_;
class Interface_Cost;
class Interface_CostDefaultTypeInternal;
extern Interface_CostDefaultTypeInternal _Interface_Cost_default_instance_;
class Monitor_Cost;
class Monitor_CostDefaultTypeInternal;
extern Monitor_CostDefaultTypeInternal _Monitor_Cost_default_instance_;
}  // namespace example_proto_class
namespace example_proto_class {

// ===================================================================

class Computer_Cost : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:example_proto_class.Computer_Cost) */ {
 public:
  Computer_Cost();
  virtual ~Computer_Cost();

  Computer_Cost(const Computer_Cost& from);

  inline Computer_Cost& operator=(const Computer_Cost& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Computer_Cost(Computer_Cost&& from) noexcept
    : Computer_Cost() {
    *this = ::std::move(from);
  }

  inline Computer_Cost& operator=(Computer_Cost&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Computer_Cost& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Computer_Cost* internal_default_instance() {
    return reinterpret_cast<const Computer_Cost*>(
               &_Computer_Cost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Computer_Cost* other);
  friend void swap(Computer_Cost& a, Computer_Cost& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Computer_Cost* New() const PROTOBUF_FINAL { return New(NULL); }

  Computer_Cost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Computer_Cost& from);
  void MergeFrom(const Computer_Cost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Computer_Cost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string brand = 4;
  void clear_brand();
  static const int kBrandFieldNumber = 4;
  const ::std::string& brand() const;
  void set_brand(const ::std::string& value);
  #if LANG_CXX11
  void set_brand(::std::string&& value);
  #endif
  void set_brand(const char* value);
  void set_brand(const char* value, size_t size);
  ::std::string* mutable_brand();
  ::std::string* release_brand();
  void set_allocated_brand(::std::string* brand);

  // .example_proto_class.CPU_Cost cpu_cost = 1;
  bool has_cpu_cost() const;
  void clear_cpu_cost();
  static const int kCpuCostFieldNumber = 1;
  const ::example_proto_class::CPU_Cost& cpu_cost() const;
  ::example_proto_class::CPU_Cost* release_cpu_cost();
  ::example_proto_class::CPU_Cost* mutable_cpu_cost();
  void set_allocated_cpu_cost(::example_proto_class::CPU_Cost* cpu_cost);

  // .example_proto_class.Monitor_Cost mon_cost = 2;
  bool has_mon_cost() const;
  void clear_mon_cost();
  static const int kMonCostFieldNumber = 2;
  const ::example_proto_class::Monitor_Cost& mon_cost() const;
  ::example_proto_class::Monitor_Cost* release_mon_cost();
  ::example_proto_class::Monitor_Cost* mutable_mon_cost();
  void set_allocated_mon_cost(::example_proto_class::Monitor_Cost* mon_cost);

  // .example_proto_class.Interface_Cost in_cost = 3;
  bool has_in_cost() const;
  void clear_in_cost();
  static const int kInCostFieldNumber = 3;
  const ::example_proto_class::Interface_Cost& in_cost() const;
  ::example_proto_class::Interface_Cost* release_in_cost();
  ::example_proto_class::Interface_Cost* mutable_in_cost();
  void set_allocated_in_cost(::example_proto_class::Interface_Cost* in_cost);

  // @@protoc_insertion_point(class_scope:example_proto_class.Computer_Cost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr brand_;
  ::example_proto_class::CPU_Cost* cpu_cost_;
  ::example_proto_class::Monitor_Cost* mon_cost_;
  ::example_proto_class::Interface_Cost* in_cost_;
  mutable int _cached_size_;
  friend struct ::protobuf_cost_2eproto::TableStruct;
  friend void ::protobuf_cost_2eproto::InitDefaultsComputer_CostImpl();
};
// -------------------------------------------------------------------

class CPU_Cost : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:example_proto_class.CPU_Cost) */ {
 public:
  CPU_Cost();
  virtual ~CPU_Cost();

  CPU_Cost(const CPU_Cost& from);

  inline CPU_Cost& operator=(const CPU_Cost& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CPU_Cost(CPU_Cost&& from) noexcept
    : CPU_Cost() {
    *this = ::std::move(from);
  }

  inline CPU_Cost& operator=(CPU_Cost&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CPU_Cost& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CPU_Cost* internal_default_instance() {
    return reinterpret_cast<const CPU_Cost*>(
               &_CPU_Cost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CPU_Cost* other);
  friend void swap(CPU_Cost& a, CPU_Cost& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CPU_Cost* New() const PROTOBUF_FINAL { return New(NULL); }

  CPU_Cost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CPU_Cost& from);
  void MergeFrom(const CPU_Cost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CPU_Cost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 cost = 1;
  void clear_cost();
  static const int kCostFieldNumber = 1;
  ::google::protobuf::int32 cost() const;
  void set_cost(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:example_proto_class.CPU_Cost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 cost_;
  mutable int _cached_size_;
  friend struct ::protobuf_cost_2eproto::TableStruct;
  friend void ::protobuf_cost_2eproto::InitDefaultsCPU_CostImpl();
};
// -------------------------------------------------------------------

class Monitor_Cost : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:example_proto_class.Monitor_Cost) */ {
 public:
  Monitor_Cost();
  virtual ~Monitor_Cost();

  Monitor_Cost(const Monitor_Cost& from);

  inline Monitor_Cost& operator=(const Monitor_Cost& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Monitor_Cost(Monitor_Cost&& from) noexcept
    : Monitor_Cost() {
    *this = ::std::move(from);
  }

  inline Monitor_Cost& operator=(Monitor_Cost&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Monitor_Cost& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Monitor_Cost* internal_default_instance() {
    return reinterpret_cast<const Monitor_Cost*>(
               &_Monitor_Cost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Monitor_Cost* other);
  friend void swap(Monitor_Cost& a, Monitor_Cost& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Monitor_Cost* New() const PROTOBUF_FINAL { return New(NULL); }

  Monitor_Cost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Monitor_Cost& from);
  void MergeFrom(const Monitor_Cost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Monitor_Cost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 cost = 1;
  void clear_cost();
  static const int kCostFieldNumber = 1;
  ::google::protobuf::int32 cost() const;
  void set_cost(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:example_proto_class.Monitor_Cost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 cost_;
  mutable int _cached_size_;
  friend struct ::protobuf_cost_2eproto::TableStruct;
  friend void ::protobuf_cost_2eproto::InitDefaultsMonitor_CostImpl();
};
// -------------------------------------------------------------------

class Interface_Cost : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:example_proto_class.Interface_Cost) */ {
 public:
  Interface_Cost();
  virtual ~Interface_Cost();

  Interface_Cost(const Interface_Cost& from);

  inline Interface_Cost& operator=(const Interface_Cost& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Interface_Cost(Interface_Cost&& from) noexcept
    : Interface_Cost() {
    *this = ::std::move(from);
  }

  inline Interface_Cost& operator=(Interface_Cost&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Interface_Cost& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Interface_Cost* internal_default_instance() {
    return reinterpret_cast<const Interface_Cost*>(
               &_Interface_Cost_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(Interface_Cost* other);
  friend void swap(Interface_Cost& a, Interface_Cost& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Interface_Cost* New() const PROTOBUF_FINAL { return New(NULL); }

  Interface_Cost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Interface_Cost& from);
  void MergeFrom(const Interface_Cost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Interface_Cost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 cost = 1;
  void clear_cost();
  static const int kCostFieldNumber = 1;
  ::google::protobuf::int32 cost() const;
  void set_cost(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:example_proto_class.Interface_Cost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 cost_;
  mutable int _cached_size_;
  friend struct ::protobuf_cost_2eproto::TableStruct;
  friend void ::protobuf_cost_2eproto::InitDefaultsInterface_CostImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Computer_Cost

// .example_proto_class.CPU_Cost cpu_cost = 1;
inline bool Computer_Cost::has_cpu_cost() const {
  return this != internal_default_instance() && cpu_cost_ != NULL;
}
inline void Computer_Cost::clear_cpu_cost() {
  if (GetArenaNoVirtual() == NULL && cpu_cost_ != NULL) {
    delete cpu_cost_;
  }
  cpu_cost_ = NULL;
}
inline const ::example_proto_class::CPU_Cost& Computer_Cost::cpu_cost() const {
  const ::example_proto_class::CPU_Cost* p = cpu_cost_;
  // @@protoc_insertion_point(field_get:example_proto_class.Computer_Cost.cpu_cost)
  return p != NULL ? *p : *reinterpret_cast<const ::example_proto_class::CPU_Cost*>(
      &::example_proto_class::_CPU_Cost_default_instance_);
}
inline ::example_proto_class::CPU_Cost* Computer_Cost::release_cpu_cost() {
  // @@protoc_insertion_point(field_release:example_proto_class.Computer_Cost.cpu_cost)
  
  ::example_proto_class::CPU_Cost* temp = cpu_cost_;
  cpu_cost_ = NULL;
  return temp;
}
inline ::example_proto_class::CPU_Cost* Computer_Cost::mutable_cpu_cost() {
  
  if (cpu_cost_ == NULL) {
    cpu_cost_ = new ::example_proto_class::CPU_Cost;
  }
  // @@protoc_insertion_point(field_mutable:example_proto_class.Computer_Cost.cpu_cost)
  return cpu_cost_;
}
inline void Computer_Cost::set_allocated_cpu_cost(::example_proto_class::CPU_Cost* cpu_cost) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete cpu_cost_;
  }
  if (cpu_cost) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      cpu_cost = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, cpu_cost, submessage_arena);
    }
    
  } else {
    
  }
  cpu_cost_ = cpu_cost;
  // @@protoc_insertion_point(field_set_allocated:example_proto_class.Computer_Cost.cpu_cost)
}

// .example_proto_class.Monitor_Cost mon_cost = 2;
inline bool Computer_Cost::has_mon_cost() const {
  return this != internal_default_instance() && mon_cost_ != NULL;
}
inline void Computer_Cost::clear_mon_cost() {
  if (GetArenaNoVirtual() == NULL && mon_cost_ != NULL) {
    delete mon_cost_;
  }
  mon_cost_ = NULL;
}
inline const ::example_proto_class::Monitor_Cost& Computer_Cost::mon_cost() const {
  const ::example_proto_class::Monitor_Cost* p = mon_cost_;
  // @@protoc_insertion_point(field_get:example_proto_class.Computer_Cost.mon_cost)
  return p != NULL ? *p : *reinterpret_cast<const ::example_proto_class::Monitor_Cost*>(
      &::example_proto_class::_Monitor_Cost_default_instance_);
}
inline ::example_proto_class::Monitor_Cost* Computer_Cost::release_mon_cost() {
  // @@protoc_insertion_point(field_release:example_proto_class.Computer_Cost.mon_cost)
  
  ::example_proto_class::Monitor_Cost* temp = mon_cost_;
  mon_cost_ = NULL;
  return temp;
}
inline ::example_proto_class::Monitor_Cost* Computer_Cost::mutable_mon_cost() {
  
  if (mon_cost_ == NULL) {
    mon_cost_ = new ::example_proto_class::Monitor_Cost;
  }
  // @@protoc_insertion_point(field_mutable:example_proto_class.Computer_Cost.mon_cost)
  return mon_cost_;
}
inline void Computer_Cost::set_allocated_mon_cost(::example_proto_class::Monitor_Cost* mon_cost) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete mon_cost_;
  }
  if (mon_cost) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      mon_cost = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, mon_cost, submessage_arena);
    }
    
  } else {
    
  }
  mon_cost_ = mon_cost;
  // @@protoc_insertion_point(field_set_allocated:example_proto_class.Computer_Cost.mon_cost)
}

// .example_proto_class.Interface_Cost in_cost = 3;
inline bool Computer_Cost::has_in_cost() const {
  return this != internal_default_instance() && in_cost_ != NULL;
}
inline void Computer_Cost::clear_in_cost() {
  if (GetArenaNoVirtual() == NULL && in_cost_ != NULL) {
    delete in_cost_;
  }
  in_cost_ = NULL;
}
inline const ::example_proto_class::Interface_Cost& Computer_Cost::in_cost() const {
  const ::example_proto_class::Interface_Cost* p = in_cost_;
  // @@protoc_insertion_point(field_get:example_proto_class.Computer_Cost.in_cost)
  return p != NULL ? *p : *reinterpret_cast<const ::example_proto_class::Interface_Cost*>(
      &::example_proto_class::_Interface_Cost_default_instance_);
}
inline ::example_proto_class::Interface_Cost* Computer_Cost::release_in_cost() {
  // @@protoc_insertion_point(field_release:example_proto_class.Computer_Cost.in_cost)
  
  ::example_proto_class::Interface_Cost* temp = in_cost_;
  in_cost_ = NULL;
  return temp;
}
inline ::example_proto_class::Interface_Cost* Computer_Cost::mutable_in_cost() {
  
  if (in_cost_ == NULL) {
    in_cost_ = new ::example_proto_class::Interface_Cost;
  }
  // @@protoc_insertion_point(field_mutable:example_proto_class.Computer_Cost.in_cost)
  return in_cost_;
}
inline void Computer_Cost::set_allocated_in_cost(::example_proto_class::Interface_Cost* in_cost) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete in_cost_;
  }
  if (in_cost) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      in_cost = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, in_cost, submessage_arena);
    }
    
  } else {
    
  }
  in_cost_ = in_cost;
  // @@protoc_insertion_point(field_set_allocated:example_proto_class.Computer_Cost.in_cost)
}

// string brand = 4;
inline void Computer_Cost::clear_brand() {
  brand_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer_Cost::brand() const {
  // @@protoc_insertion_point(field_get:example_proto_class.Computer_Cost.brand)
  return brand_.GetNoArena();
}
inline void Computer_Cost::set_brand(const ::std::string& value) {
  
  brand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:example_proto_class.Computer_Cost.brand)
}
#if LANG_CXX11
inline void Computer_Cost::set_brand(::std::string&& value) {
  
  brand_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:example_proto_class.Computer_Cost.brand)
}
#endif
inline void Computer_Cost::set_brand(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  brand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:example_proto_class.Computer_Cost.brand)
}
inline void Computer_Cost::set_brand(const char* value, size_t size) {
  
  brand_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:example_proto_class.Computer_Cost.brand)
}
inline ::std::string* Computer_Cost::mutable_brand() {
  
  // @@protoc_insertion_point(field_mutable:example_proto_class.Computer_Cost.brand)
  return brand_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer_Cost::release_brand() {
  // @@protoc_insertion_point(field_release:example_proto_class.Computer_Cost.brand)
  
  return brand_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer_Cost::set_allocated_brand(::std::string* brand) {
  if (brand != NULL) {
    
  } else {
    
  }
  brand_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), brand);
  // @@protoc_insertion_point(field_set_allocated:example_proto_class.Computer_Cost.brand)
}

// -------------------------------------------------------------------

// CPU_Cost

// int32 cost = 1;
inline void CPU_Cost::clear_cost() {
  cost_ = 0;
}
inline ::google::protobuf::int32 CPU_Cost::cost() const {
  // @@protoc_insertion_point(field_get:example_proto_class.CPU_Cost.cost)
  return cost_;
}
inline void CPU_Cost::set_cost(::google::protobuf::int32 value) {
  
  cost_ = value;
  // @@protoc_insertion_point(field_set:example_proto_class.CPU_Cost.cost)
}

// -------------------------------------------------------------------

// Monitor_Cost

// int32 cost = 1;
inline void Monitor_Cost::clear_cost() {
  cost_ = 0;
}
inline ::google::protobuf::int32 Monitor_Cost::cost() const {
  // @@protoc_insertion_point(field_get:example_proto_class.Monitor_Cost.cost)
  return cost_;
}
inline void Monitor_Cost::set_cost(::google::protobuf::int32 value) {
  
  cost_ = value;
  // @@protoc_insertion_point(field_set:example_proto_class.Monitor_Cost.cost)
}

// -------------------------------------------------------------------

// Interface_Cost

// int32 cost = 1;
inline void Interface_Cost::clear_cost() {
  cost_ = 0;
}
inline ::google::protobuf::int32 Interface_Cost::cost() const {
  // @@protoc_insertion_point(field_get:example_proto_class.Interface_Cost.cost)
  return cost_;
}
inline void Interface_Cost::set_cost(::google::protobuf::int32 value) {
  
  cost_ = value;
  // @@protoc_insertion_point(field_set:example_proto_class.Interface_Cost.cost)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace example_proto_class

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cost_2eproto__INCLUDED
