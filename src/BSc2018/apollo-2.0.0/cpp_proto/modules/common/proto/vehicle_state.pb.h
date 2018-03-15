// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/vehicle_state.proto

#ifndef PROTOBUF_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto__INCLUDED
#define PROTOBUF_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto__INCLUDED

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
#include "modules/canbus/proto/chassis.pb.h"
#include "modules/localization/proto/pose.pb.h"
// @@protoc_insertion_point(includes)
namespace apollo {
namespace canbus {
class Chassis;
class ChassisDefaultTypeInternal;
extern ChassisDefaultTypeInternal _Chassis_default_instance_;
class ChassisGPS;
class ChassisGPSDefaultTypeInternal;
extern ChassisGPSDefaultTypeInternal _ChassisGPS_default_instance_;
}  // namespace canbus
namespace common {
class VehicleState;
class VehicleStateDefaultTypeInternal;
extern VehicleStateDefaultTypeInternal _VehicleState_default_instance_;
}  // namespace common
namespace localization {
class Pose;
class PoseDefaultTypeInternal;
extern PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace localization
}  // namespace apollo

namespace apollo {
namespace common {

namespace protobuf_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto {
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
}  // namespace protobuf_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto

// ===================================================================

class VehicleState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.common.VehicleState) */ {
 public:
  VehicleState();
  virtual ~VehicleState();

  VehicleState(const VehicleState& from);

  inline VehicleState& operator=(const VehicleState& from) {
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
  static const VehicleState& default_instance();

  static inline const VehicleState* internal_default_instance() {
    return reinterpret_cast<const VehicleState*>(
               &_VehicleState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VehicleState* other);

  // implements Message ----------------------------------------------

  inline VehicleState* New() const PROTOBUF_FINAL { return New(NULL); }

  VehicleState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VehicleState& from);
  void MergeFrom(const VehicleState& from);
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
  void InternalSwap(VehicleState* other);
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

  // optional .apollo.localization.Pose pose = 15;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 15;
  const ::apollo::localization::Pose& pose() const;
  ::apollo::localization::Pose* mutable_pose();
  ::apollo::localization::Pose* release_pose();
  void set_allocated_pose(::apollo::localization::Pose* pose);

  // optional double x = 1 [default = 0];
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // optional double y = 2 [default = 0];
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // optional double z = 3 [default = 0];
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  double z() const;
  void set_z(double value);

  // optional double timestamp = 4 [default = 0];
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 4;
  double timestamp() const;
  void set_timestamp(double value);

  // optional double roll = 5 [default = 0];
  bool has_roll() const;
  void clear_roll();
  static const int kRollFieldNumber = 5;
  double roll() const;
  void set_roll(double value);

  // optional double pitch = 6 [default = 0];
  bool has_pitch() const;
  void clear_pitch();
  static const int kPitchFieldNumber = 6;
  double pitch() const;
  void set_pitch(double value);

  // optional double yaw = 7 [default = 0];
  bool has_yaw() const;
  void clear_yaw();
  static const int kYawFieldNumber = 7;
  double yaw() const;
  void set_yaw(double value);

  // optional double heading = 8 [default = 0];
  bool has_heading() const;
  void clear_heading();
  static const int kHeadingFieldNumber = 8;
  double heading() const;
  void set_heading(double value);

  // optional double kappa = 9 [default = 0];
  bool has_kappa() const;
  void clear_kappa();
  static const int kKappaFieldNumber = 9;
  double kappa() const;
  void set_kappa(double value);

  // optional double linear_velocity = 10 [default = 0];
  bool has_linear_velocity() const;
  void clear_linear_velocity();
  static const int kLinearVelocityFieldNumber = 10;
  double linear_velocity() const;
  void set_linear_velocity(double value);

  // optional double angular_velocity = 11 [default = 0];
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 11;
  double angular_velocity() const;
  void set_angular_velocity(double value);

  // optional double linear_acceleration = 12 [default = 0];
  bool has_linear_acceleration() const;
  void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 12;
  double linear_acceleration() const;
  void set_linear_acceleration(double value);

  // optional .apollo.canbus.Chassis.GearPosition gear = 13;
  bool has_gear() const;
  void clear_gear();
  static const int kGearFieldNumber = 13;
  ::apollo::canbus::Chassis_GearPosition gear() const;
  void set_gear(::apollo::canbus::Chassis_GearPosition value);

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 14;
  bool has_driving_mode() const;
  void clear_driving_mode();
  static const int kDrivingModeFieldNumber = 14;
  ::apollo::canbus::Chassis_DrivingMode driving_mode() const;
  void set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);

  // @@protoc_insertion_point(class_scope:apollo.common.VehicleState)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_z();
  void clear_has_z();
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_roll();
  void clear_has_roll();
  void set_has_pitch();
  void clear_has_pitch();
  void set_has_yaw();
  void clear_has_yaw();
  void set_has_heading();
  void clear_has_heading();
  void set_has_kappa();
  void clear_has_kappa();
  void set_has_linear_velocity();
  void clear_has_linear_velocity();
  void set_has_angular_velocity();
  void clear_has_angular_velocity();
  void set_has_linear_acceleration();
  void clear_has_linear_acceleration();
  void set_has_gear();
  void clear_has_gear();
  void set_has_driving_mode();
  void clear_has_driving_mode();
  void set_has_pose();
  void clear_has_pose();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::apollo::localization::Pose* pose_;
  double x_;
  double y_;
  double z_;
  double timestamp_;
  double roll_;
  double pitch_;
  double yaw_;
  double heading_;
  double kappa_;
  double linear_velocity_;
  double angular_velocity_;
  double linear_acceleration_;
  int gear_;
  int driving_mode_;
  friend struct protobuf_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleState

// optional double x = 1 [default = 0];
inline bool VehicleState::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VehicleState::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VehicleState::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VehicleState::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double VehicleState::x() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.x)
  return x_;
}
inline void VehicleState::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.x)
}

// optional double y = 2 [default = 0];
inline bool VehicleState::has_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VehicleState::set_has_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VehicleState::clear_has_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VehicleState::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double VehicleState::y() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.y)
  return y_;
}
inline void VehicleState::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.y)
}

// optional double z = 3 [default = 0];
inline bool VehicleState::has_z() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VehicleState::set_has_z() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VehicleState::clear_has_z() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VehicleState::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline double VehicleState::z() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.z)
  return z_;
}
inline void VehicleState::set_z(double value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.z)
}

// optional double timestamp = 4 [default = 0];
inline bool VehicleState::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VehicleState::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VehicleState::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VehicleState::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
inline double VehicleState::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.timestamp)
  return timestamp_;
}
inline void VehicleState::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.timestamp)
}

// optional double roll = 5 [default = 0];
inline bool VehicleState::has_roll() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VehicleState::set_has_roll() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VehicleState::clear_has_roll() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VehicleState::clear_roll() {
  roll_ = 0;
  clear_has_roll();
}
inline double VehicleState::roll() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.roll)
  return roll_;
}
inline void VehicleState::set_roll(double value) {
  set_has_roll();
  roll_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.roll)
}

// optional double pitch = 6 [default = 0];
inline bool VehicleState::has_pitch() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void VehicleState::set_has_pitch() {
  _has_bits_[0] |= 0x00000040u;
}
inline void VehicleState::clear_has_pitch() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void VehicleState::clear_pitch() {
  pitch_ = 0;
  clear_has_pitch();
}
inline double VehicleState::pitch() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.pitch)
  return pitch_;
}
inline void VehicleState::set_pitch(double value) {
  set_has_pitch();
  pitch_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.pitch)
}

// optional double yaw = 7 [default = 0];
inline bool VehicleState::has_yaw() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void VehicleState::set_has_yaw() {
  _has_bits_[0] |= 0x00000080u;
}
inline void VehicleState::clear_has_yaw() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void VehicleState::clear_yaw() {
  yaw_ = 0;
  clear_has_yaw();
}
inline double VehicleState::yaw() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.yaw)
  return yaw_;
}
inline void VehicleState::set_yaw(double value) {
  set_has_yaw();
  yaw_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.yaw)
}

// optional double heading = 8 [default = 0];
inline bool VehicleState::has_heading() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void VehicleState::set_has_heading() {
  _has_bits_[0] |= 0x00000100u;
}
inline void VehicleState::clear_has_heading() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void VehicleState::clear_heading() {
  heading_ = 0;
  clear_has_heading();
}
inline double VehicleState::heading() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.heading)
  return heading_;
}
inline void VehicleState::set_heading(double value) {
  set_has_heading();
  heading_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.heading)
}

// optional double kappa = 9 [default = 0];
inline bool VehicleState::has_kappa() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void VehicleState::set_has_kappa() {
  _has_bits_[0] |= 0x00000200u;
}
inline void VehicleState::clear_has_kappa() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void VehicleState::clear_kappa() {
  kappa_ = 0;
  clear_has_kappa();
}
inline double VehicleState::kappa() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.kappa)
  return kappa_;
}
inline void VehicleState::set_kappa(double value) {
  set_has_kappa();
  kappa_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.kappa)
}

// optional double linear_velocity = 10 [default = 0];
inline bool VehicleState::has_linear_velocity() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void VehicleState::set_has_linear_velocity() {
  _has_bits_[0] |= 0x00000400u;
}
inline void VehicleState::clear_has_linear_velocity() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void VehicleState::clear_linear_velocity() {
  linear_velocity_ = 0;
  clear_has_linear_velocity();
}
inline double VehicleState::linear_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.linear_velocity)
  return linear_velocity_;
}
inline void VehicleState::set_linear_velocity(double value) {
  set_has_linear_velocity();
  linear_velocity_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.linear_velocity)
}

// optional double angular_velocity = 11 [default = 0];
inline bool VehicleState::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void VehicleState::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000800u;
}
inline void VehicleState::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void VehicleState::clear_angular_velocity() {
  angular_velocity_ = 0;
  clear_has_angular_velocity();
}
inline double VehicleState::angular_velocity() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.angular_velocity)
  return angular_velocity_;
}
inline void VehicleState::set_angular_velocity(double value) {
  set_has_angular_velocity();
  angular_velocity_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.angular_velocity)
}

// optional double linear_acceleration = 12 [default = 0];
inline bool VehicleState::has_linear_acceleration() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void VehicleState::set_has_linear_acceleration() {
  _has_bits_[0] |= 0x00001000u;
}
inline void VehicleState::clear_has_linear_acceleration() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void VehicleState::clear_linear_acceleration() {
  linear_acceleration_ = 0;
  clear_has_linear_acceleration();
}
inline double VehicleState::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.linear_acceleration)
  return linear_acceleration_;
}
inline void VehicleState::set_linear_acceleration(double value) {
  set_has_linear_acceleration();
  linear_acceleration_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.linear_acceleration)
}

// optional .apollo.canbus.Chassis.GearPosition gear = 13;
inline bool VehicleState::has_gear() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void VehicleState::set_has_gear() {
  _has_bits_[0] |= 0x00002000u;
}
inline void VehicleState::clear_has_gear() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void VehicleState::clear_gear() {
  gear_ = 0;
  clear_has_gear();
}
inline ::apollo::canbus::Chassis_GearPosition VehicleState::gear() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.gear)
  return static_cast< ::apollo::canbus::Chassis_GearPosition >(gear_);
}
inline void VehicleState::set_gear(::apollo::canbus::Chassis_GearPosition value) {
  assert(::apollo::canbus::Chassis_GearPosition_IsValid(value));
  set_has_gear();
  gear_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.gear)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 14;
inline bool VehicleState::has_driving_mode() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void VehicleState::set_has_driving_mode() {
  _has_bits_[0] |= 0x00004000u;
}
inline void VehicleState::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void VehicleState::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
inline ::apollo::canbus::Chassis_DrivingMode VehicleState::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
inline void VehicleState::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.common.VehicleState.driving_mode)
}

// optional .apollo.localization.Pose pose = 15;
inline bool VehicleState::has_pose() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VehicleState::set_has_pose() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VehicleState::clear_has_pose() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VehicleState::clear_pose() {
  if (pose_ != NULL) pose_->::apollo::localization::Pose::Clear();
  clear_has_pose();
}
inline const ::apollo::localization::Pose& VehicleState::pose() const {
  // @@protoc_insertion_point(field_get:apollo.common.VehicleState.pose)
  return pose_ != NULL ? *pose_
                         : *::apollo::localization::Pose::internal_default_instance();
}
inline ::apollo::localization::Pose* VehicleState::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::apollo::localization::Pose;
  }
  // @@protoc_insertion_point(field_mutable:apollo.common.VehicleState.pose)
  return pose_;
}
inline ::apollo::localization::Pose* VehicleState::release_pose() {
  // @@protoc_insertion_point(field_release:apollo.common.VehicleState.pose)
  clear_has_pose();
  ::apollo::localization::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void VehicleState::set_allocated_pose(::apollo::localization::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.common.VehicleState.pose)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace common
}  // namespace apollo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcommon_2fproto_2fvehicle_5fstate_2eproto__INCLUDED
