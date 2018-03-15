// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/gain_scheduler_conf.proto

#ifndef PROTOBUF_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto__INCLUDED
#define PROTOBUF_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
namespace apollo {
namespace control {
class GainScheduler;
class GainSchedulerDefaultTypeInternal;
extern GainSchedulerDefaultTypeInternal _GainScheduler_default_instance_;
class GainSchedulerInfo;
class GainSchedulerInfoDefaultTypeInternal;
extern GainSchedulerInfoDefaultTypeInternal _GainSchedulerInfo_default_instance_;
}  // namespace control
}  // namespace apollo

namespace apollo {
namespace control {

namespace protobuf_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto

// ===================================================================

class GainScheduler : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.control.GainScheduler) */ {
 public:
  GainScheduler();
  virtual ~GainScheduler();

  GainScheduler(const GainScheduler& from);

  inline GainScheduler& operator=(const GainScheduler& from) {
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
  static const GainScheduler& default_instance();

  static inline const GainScheduler* internal_default_instance() {
    return reinterpret_cast<const GainScheduler*>(
               &_GainScheduler_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GainScheduler* other);

  // implements Message ----------------------------------------------

  inline GainScheduler* New() const PROTOBUF_FINAL { return New(NULL); }

  GainScheduler* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GainScheduler& from);
  void MergeFrom(const GainScheduler& from);
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
  void InternalSwap(GainScheduler* other);
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

  // repeated .apollo.control.GainSchedulerInfo scheduler = 1;
  int scheduler_size() const;
  void clear_scheduler();
  static const int kSchedulerFieldNumber = 1;
  const ::apollo::control::GainSchedulerInfo& scheduler(int index) const;
  ::apollo::control::GainSchedulerInfo* mutable_scheduler(int index);
  ::apollo::control::GainSchedulerInfo* add_scheduler();
  ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >*
      mutable_scheduler();
  const ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >&
      scheduler() const;

  // @@protoc_insertion_point(class_scope:apollo.control.GainScheduler)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo > scheduler_;
  friend struct protobuf_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GainSchedulerInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.control.GainSchedulerInfo) */ {
 public:
  GainSchedulerInfo();
  virtual ~GainSchedulerInfo();

  GainSchedulerInfo(const GainSchedulerInfo& from);

  inline GainSchedulerInfo& operator=(const GainSchedulerInfo& from) {
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
  static const GainSchedulerInfo& default_instance();

  static inline const GainSchedulerInfo* internal_default_instance() {
    return reinterpret_cast<const GainSchedulerInfo*>(
               &_GainSchedulerInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(GainSchedulerInfo* other);

  // implements Message ----------------------------------------------

  inline GainSchedulerInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  GainSchedulerInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GainSchedulerInfo& from);
  void MergeFrom(const GainSchedulerInfo& from);
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
  void InternalSwap(GainSchedulerInfo* other);
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

  // optional double speed = 1;
  bool has_speed() const;
  void clear_speed();
  static const int kSpeedFieldNumber = 1;
  double speed() const;
  void set_speed(double value);

  // optional double ratio = 2;
  bool has_ratio() const;
  void clear_ratio();
  static const int kRatioFieldNumber = 2;
  double ratio() const;
  void set_ratio(double value);

  // @@protoc_insertion_point(class_scope:apollo.control.GainSchedulerInfo)
 private:
  void set_has_speed();
  void clear_has_speed();
  void set_has_ratio();
  void clear_has_ratio();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double speed_;
  double ratio_;
  friend struct protobuf_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GainScheduler

// repeated .apollo.control.GainSchedulerInfo scheduler = 1;
inline int GainScheduler::scheduler_size() const {
  return scheduler_.size();
}
inline void GainScheduler::clear_scheduler() {
  scheduler_.Clear();
}
inline const ::apollo::control::GainSchedulerInfo& GainScheduler::scheduler(int index) const {
  // @@protoc_insertion_point(field_get:apollo.control.GainScheduler.scheduler)
  return scheduler_.Get(index);
}
inline ::apollo::control::GainSchedulerInfo* GainScheduler::mutable_scheduler(int index) {
  // @@protoc_insertion_point(field_mutable:apollo.control.GainScheduler.scheduler)
  return scheduler_.Mutable(index);
}
inline ::apollo::control::GainSchedulerInfo* GainScheduler::add_scheduler() {
  // @@protoc_insertion_point(field_add:apollo.control.GainScheduler.scheduler)
  return scheduler_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >*
GainScheduler::mutable_scheduler() {
  // @@protoc_insertion_point(field_mutable_list:apollo.control.GainScheduler.scheduler)
  return &scheduler_;
}
inline const ::google::protobuf::RepeatedPtrField< ::apollo::control::GainSchedulerInfo >&
GainScheduler::scheduler() const {
  // @@protoc_insertion_point(field_list:apollo.control.GainScheduler.scheduler)
  return scheduler_;
}

// -------------------------------------------------------------------

// GainSchedulerInfo

// optional double speed = 1;
inline bool GainSchedulerInfo::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GainSchedulerInfo::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GainSchedulerInfo::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GainSchedulerInfo::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline double GainSchedulerInfo::speed() const {
  // @@protoc_insertion_point(field_get:apollo.control.GainSchedulerInfo.speed)
  return speed_;
}
inline void GainSchedulerInfo::set_speed(double value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.GainSchedulerInfo.speed)
}

// optional double ratio = 2;
inline bool GainSchedulerInfo::has_ratio() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GainSchedulerInfo::set_has_ratio() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GainSchedulerInfo::clear_has_ratio() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GainSchedulerInfo::clear_ratio() {
  ratio_ = 0;
  clear_has_ratio();
}
inline double GainSchedulerInfo::ratio() const {
  // @@protoc_insertion_point(field_get:apollo.control.GainSchedulerInfo.ratio)
  return ratio_;
}
inline void GainSchedulerInfo::set_ratio(double value) {
  set_has_ratio();
  ratio_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.GainSchedulerInfo.ratio)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace control
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcontrol_2fproto_2fgain_5fscheduler_5fconf_2eproto__INCLUDED
