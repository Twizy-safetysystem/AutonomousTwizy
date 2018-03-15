// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/control_conf.proto

#ifndef PROTOBUF_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto__INCLUDED
#define PROTOBUF_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "modules/canbus/proto/chassis.pb.h"
#include "modules/control/proto/pad_msg.pb.h"
#include "modules/control/proto/lat_controller_conf.pb.h"
#include "modules/control/proto/lon_controller_conf.pb.h"
#include "modules/control/proto/mpc_controller_conf.pb.h"
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
namespace control {
class ControlConf;
class ControlConfDefaultTypeInternal;
extern ControlConfDefaultTypeInternal _ControlConf_default_instance_;
class FilterConf;
class FilterConfDefaultTypeInternal;
extern FilterConfDefaultTypeInternal _FilterConf_default_instance_;
class LatControllerConf;
class LatControllerConfDefaultTypeInternal;
extern LatControllerConfDefaultTypeInternal _LatControllerConf_default_instance_;
class LonControllerConf;
class LonControllerConfDefaultTypeInternal;
extern LonControllerConfDefaultTypeInternal _LonControllerConf_default_instance_;
class MPCControllerConf;
class MPCControllerConfDefaultTypeInternal;
extern MPCControllerConfDefaultTypeInternal _MPCControllerConf_default_instance_;
class PadMessage;
class PadMessageDefaultTypeInternal;
extern PadMessageDefaultTypeInternal _PadMessage_default_instance_;
}  // namespace control
}  // namespace apollo

namespace apollo {
namespace control {

namespace protobuf_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto {
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
}  // namespace protobuf_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto

enum ControlConf_ControllerType {
  ControlConf_ControllerType_LAT_CONTROLLER = 0,
  ControlConf_ControllerType_LON_CONTROLLER = 1,
  ControlConf_ControllerType_MPC_CONTROLLER = 2
};
bool ControlConf_ControllerType_IsValid(int value);
const ControlConf_ControllerType ControlConf_ControllerType_ControllerType_MIN = ControlConf_ControllerType_LAT_CONTROLLER;
const ControlConf_ControllerType ControlConf_ControllerType_ControllerType_MAX = ControlConf_ControllerType_MPC_CONTROLLER;
const int ControlConf_ControllerType_ControllerType_ARRAYSIZE = ControlConf_ControllerType_ControllerType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ControlConf_ControllerType_descriptor();
inline const ::std::string& ControlConf_ControllerType_Name(ControlConf_ControllerType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ControlConf_ControllerType_descriptor(), value);
}
inline bool ControlConf_ControllerType_Parse(
    const ::std::string& name, ControlConf_ControllerType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ControlConf_ControllerType>(
    ControlConf_ControllerType_descriptor(), name, value);
}
// ===================================================================

class ControlConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:apollo.control.ControlConf) */ {
 public:
  ControlConf();
  virtual ~ControlConf();

  ControlConf(const ControlConf& from);

  inline ControlConf& operator=(const ControlConf& from) {
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
  static const ControlConf& default_instance();

  static inline const ControlConf* internal_default_instance() {
    return reinterpret_cast<const ControlConf*>(
               &_ControlConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ControlConf* other);

  // implements Message ----------------------------------------------

  inline ControlConf* New() const PROTOBUF_FINAL { return New(NULL); }

  ControlConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ControlConf& from);
  void MergeFrom(const ControlConf& from);
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
  void InternalSwap(ControlConf* other);
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

  typedef ControlConf_ControllerType ControllerType;
  static const ControllerType LAT_CONTROLLER =
    ControlConf_ControllerType_LAT_CONTROLLER;
  static const ControllerType LON_CONTROLLER =
    ControlConf_ControllerType_LON_CONTROLLER;
  static const ControllerType MPC_CONTROLLER =
    ControlConf_ControllerType_MPC_CONTROLLER;
  static inline bool ControllerType_IsValid(int value) {
    return ControlConf_ControllerType_IsValid(value);
  }
  static const ControllerType ControllerType_MIN =
    ControlConf_ControllerType_ControllerType_MIN;
  static const ControllerType ControllerType_MAX =
    ControlConf_ControllerType_ControllerType_MAX;
  static const int ControllerType_ARRAYSIZE =
    ControlConf_ControllerType_ControllerType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ControllerType_descriptor() {
    return ControlConf_ControllerType_descriptor();
  }
  static inline const ::std::string& ControllerType_Name(ControllerType value) {
    return ControlConf_ControllerType_Name(value);
  }
  static inline bool ControllerType_Parse(const ::std::string& name,
      ControllerType* value) {
    return ControlConf_ControllerType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .apollo.control.ControlConf.ControllerType active_controllers = 7;
  int active_controllers_size() const;
  void clear_active_controllers();
  static const int kActiveControllersFieldNumber = 7;
  ::apollo::control::ControlConf_ControllerType active_controllers(int index) const;
  void set_active_controllers(int index, ::apollo::control::ControlConf_ControllerType value);
  void add_active_controllers(::apollo::control::ControlConf_ControllerType value);
  const ::google::protobuf::RepeatedField<int>& active_controllers() const;
  ::google::protobuf::RepeatedField<int>* mutable_active_controllers();

  // optional .apollo.control.LatControllerConf lat_controller_conf = 10;
  bool has_lat_controller_conf() const;
  void clear_lat_controller_conf();
  static const int kLatControllerConfFieldNumber = 10;
  const ::apollo::control::LatControllerConf& lat_controller_conf() const;
  ::apollo::control::LatControllerConf* mutable_lat_controller_conf();
  ::apollo::control::LatControllerConf* release_lat_controller_conf();
  void set_allocated_lat_controller_conf(::apollo::control::LatControllerConf* lat_controller_conf);

  // optional .apollo.control.LonControllerConf lon_controller_conf = 11;
  bool has_lon_controller_conf() const;
  void clear_lon_controller_conf();
  static const int kLonControllerConfFieldNumber = 11;
  const ::apollo::control::LonControllerConf& lon_controller_conf() const;
  ::apollo::control::LonControllerConf* mutable_lon_controller_conf();
  ::apollo::control::LonControllerConf* release_lon_controller_conf();
  void set_allocated_lon_controller_conf(::apollo::control::LonControllerConf* lon_controller_conf);

  // optional .apollo.control.MPCControllerConf mpc_controller_conf = 16;
  bool has_mpc_controller_conf() const;
  void clear_mpc_controller_conf();
  static const int kMpcControllerConfFieldNumber = 16;
  const ::apollo::control::MPCControllerConf& mpc_controller_conf() const;
  ::apollo::control::MPCControllerConf* mutable_mpc_controller_conf();
  ::apollo::control::MPCControllerConf* release_mpc_controller_conf();
  void set_allocated_mpc_controller_conf(::apollo::control::MPCControllerConf* mpc_controller_conf);

  // optional double control_period = 1;
  bool has_control_period() const;
  void clear_control_period();
  static const int kControlPeriodFieldNumber = 1;
  double control_period() const;
  void set_control_period(double value);

  // optional double max_planning_interval_sec = 2;
  bool has_max_planning_interval_sec() const;
  void clear_max_planning_interval_sec();
  static const int kMaxPlanningIntervalSecFieldNumber = 2;
  double max_planning_interval_sec() const;
  void set_max_planning_interval_sec(double value);

  // optional double max_planning_delay_threshold = 3;
  bool has_max_planning_delay_threshold() const;
  void clear_max_planning_delay_threshold();
  static const int kMaxPlanningDelayThresholdFieldNumber = 3;
  double max_planning_delay_threshold() const;
  void set_max_planning_delay_threshold(double value);

  // optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
  bool has_driving_mode() const;
  void clear_driving_mode();
  static const int kDrivingModeFieldNumber = 4;
  ::apollo::canbus::Chassis_DrivingMode driving_mode() const;
  void set_driving_mode(::apollo::canbus::Chassis_DrivingMode value);

  // optional .apollo.control.DrivingAction action = 5;
  bool has_action() const;
  void clear_action();
  static const int kActionFieldNumber = 5;
  ::apollo::control::DrivingAction action() const;
  void set_action(::apollo::control::DrivingAction value);

  // optional double soft_estop_brake = 6;
  bool has_soft_estop_brake() const;
  void clear_soft_estop_brake();
  static const int kSoftEstopBrakeFieldNumber = 6;
  double soft_estop_brake() const;
  void set_soft_estop_brake(double value);

  // optional double max_status_interval_sec = 9;
  bool has_max_status_interval_sec() const;
  void clear_max_status_interval_sec();
  static const int kMaxStatusIntervalSecFieldNumber = 9;
  double max_status_interval_sec() const;
  void set_max_status_interval_sec(double value);

  // optional double trajectory_period = 12;
  bool has_trajectory_period() const;
  void clear_trajectory_period();
  static const int kTrajectoryPeriodFieldNumber = 12;
  double trajectory_period() const;
  void set_trajectory_period(double value);

  // optional double chassis_period = 13;
  bool has_chassis_period() const;
  void clear_chassis_period();
  static const int kChassisPeriodFieldNumber = 13;
  double chassis_period() const;
  void set_chassis_period(double value);

  // optional double localization_period = 14;
  bool has_localization_period() const;
  void clear_localization_period();
  static const int kLocalizationPeriodFieldNumber = 14;
  double localization_period() const;
  void set_localization_period(double value);

  // optional double minimum_speed_resolution = 15;
  bool has_minimum_speed_resolution() const;
  void clear_minimum_speed_resolution();
  static const int kMinimumSpeedResolutionFieldNumber = 15;
  double minimum_speed_resolution() const;
  void set_minimum_speed_resolution(double value);

  // optional int32 max_steering_percentage_allowed = 8;
  bool has_max_steering_percentage_allowed() const;
  void clear_max_steering_percentage_allowed();
  static const int kMaxSteeringPercentageAllowedFieldNumber = 8;
  ::google::protobuf::int32 max_steering_percentage_allowed() const;
  void set_max_steering_percentage_allowed(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:apollo.control.ControlConf)
 private:
  void set_has_control_period();
  void clear_has_control_period();
  void set_has_max_planning_interval_sec();
  void clear_has_max_planning_interval_sec();
  void set_has_max_planning_delay_threshold();
  void clear_has_max_planning_delay_threshold();
  void set_has_driving_mode();
  void clear_has_driving_mode();
  void set_has_action();
  void clear_has_action();
  void set_has_soft_estop_brake();
  void clear_has_soft_estop_brake();
  void set_has_max_steering_percentage_allowed();
  void clear_has_max_steering_percentage_allowed();
  void set_has_max_status_interval_sec();
  void clear_has_max_status_interval_sec();
  void set_has_lat_controller_conf();
  void clear_has_lat_controller_conf();
  void set_has_lon_controller_conf();
  void clear_has_lon_controller_conf();
  void set_has_trajectory_period();
  void clear_has_trajectory_period();
  void set_has_chassis_period();
  void clear_has_chassis_period();
  void set_has_localization_period();
  void clear_has_localization_period();
  void set_has_minimum_speed_resolution();
  void clear_has_minimum_speed_resolution();
  void set_has_mpc_controller_conf();
  void clear_has_mpc_controller_conf();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField<int> active_controllers_;
  ::apollo::control::LatControllerConf* lat_controller_conf_;
  ::apollo::control::LonControllerConf* lon_controller_conf_;
  ::apollo::control::MPCControllerConf* mpc_controller_conf_;
  double control_period_;
  double max_planning_interval_sec_;
  double max_planning_delay_threshold_;
  int driving_mode_;
  int action_;
  double soft_estop_brake_;
  double max_status_interval_sec_;
  double trajectory_period_;
  double chassis_period_;
  double localization_period_;
  double minimum_speed_resolution_;
  ::google::protobuf::int32 max_steering_percentage_allowed_;
  friend struct protobuf_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ControlConf

// optional double control_period = 1;
inline bool ControlConf::has_control_period() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ControlConf::set_has_control_period() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ControlConf::clear_has_control_period() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ControlConf::clear_control_period() {
  control_period_ = 0;
  clear_has_control_period();
}
inline double ControlConf::control_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.control_period)
  return control_period_;
}
inline void ControlConf::set_control_period(double value) {
  set_has_control_period();
  control_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.control_period)
}

// optional double max_planning_interval_sec = 2;
inline bool ControlConf::has_max_planning_interval_sec() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ControlConf::set_has_max_planning_interval_sec() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ControlConf::clear_has_max_planning_interval_sec() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ControlConf::clear_max_planning_interval_sec() {
  max_planning_interval_sec_ = 0;
  clear_has_max_planning_interval_sec();
}
inline double ControlConf::max_planning_interval_sec() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_planning_interval_sec)
  return max_planning_interval_sec_;
}
inline void ControlConf::set_max_planning_interval_sec(double value) {
  set_has_max_planning_interval_sec();
  max_planning_interval_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_planning_interval_sec)
}

// optional double max_planning_delay_threshold = 3;
inline bool ControlConf::has_max_planning_delay_threshold() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ControlConf::set_has_max_planning_delay_threshold() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ControlConf::clear_has_max_planning_delay_threshold() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ControlConf::clear_max_planning_delay_threshold() {
  max_planning_delay_threshold_ = 0;
  clear_has_max_planning_delay_threshold();
}
inline double ControlConf::max_planning_delay_threshold() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_planning_delay_threshold)
  return max_planning_delay_threshold_;
}
inline void ControlConf::set_max_planning_delay_threshold(double value) {
  set_has_max_planning_delay_threshold();
  max_planning_delay_threshold_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_planning_delay_threshold)
}

// optional .apollo.canbus.Chassis.DrivingMode driving_mode = 4;
inline bool ControlConf::has_driving_mode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ControlConf::set_has_driving_mode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ControlConf::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ControlConf::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
inline ::apollo::canbus::Chassis_DrivingMode ControlConf::driving_mode() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.driving_mode)
  return static_cast< ::apollo::canbus::Chassis_DrivingMode >(driving_mode_);
}
inline void ControlConf::set_driving_mode(::apollo::canbus::Chassis_DrivingMode value) {
  assert(::apollo::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.driving_mode)
}

// optional .apollo.control.DrivingAction action = 5;
inline bool ControlConf::has_action() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ControlConf::set_has_action() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ControlConf::clear_has_action() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ControlConf::clear_action() {
  action_ = 0;
  clear_has_action();
}
inline ::apollo::control::DrivingAction ControlConf::action() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.action)
  return static_cast< ::apollo::control::DrivingAction >(action_);
}
inline void ControlConf::set_action(::apollo::control::DrivingAction value) {
  assert(::apollo::control::DrivingAction_IsValid(value));
  set_has_action();
  action_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.action)
}

// optional double soft_estop_brake = 6;
inline bool ControlConf::has_soft_estop_brake() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ControlConf::set_has_soft_estop_brake() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ControlConf::clear_has_soft_estop_brake() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ControlConf::clear_soft_estop_brake() {
  soft_estop_brake_ = 0;
  clear_has_soft_estop_brake();
}
inline double ControlConf::soft_estop_brake() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.soft_estop_brake)
  return soft_estop_brake_;
}
inline void ControlConf::set_soft_estop_brake(double value) {
  set_has_soft_estop_brake();
  soft_estop_brake_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.soft_estop_brake)
}

// repeated .apollo.control.ControlConf.ControllerType active_controllers = 7;
inline int ControlConf::active_controllers_size() const {
  return active_controllers_.size();
}
inline void ControlConf::clear_active_controllers() {
  active_controllers_.Clear();
}
inline ::apollo::control::ControlConf_ControllerType ControlConf::active_controllers(int index) const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.active_controllers)
  return static_cast< ::apollo::control::ControlConf_ControllerType >(active_controllers_.Get(index));
}
inline void ControlConf::set_active_controllers(int index, ::apollo::control::ControlConf_ControllerType value) {
  assert(::apollo::control::ControlConf_ControllerType_IsValid(value));
  active_controllers_.Set(index, value);
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.active_controllers)
}
inline void ControlConf::add_active_controllers(::apollo::control::ControlConf_ControllerType value) {
  assert(::apollo::control::ControlConf_ControllerType_IsValid(value));
  active_controllers_.Add(value);
  // @@protoc_insertion_point(field_add:apollo.control.ControlConf.active_controllers)
}
inline const ::google::protobuf::RepeatedField<int>&
ControlConf::active_controllers() const {
  // @@protoc_insertion_point(field_list:apollo.control.ControlConf.active_controllers)
  return active_controllers_;
}
inline ::google::protobuf::RepeatedField<int>*
ControlConf::mutable_active_controllers() {
  // @@protoc_insertion_point(field_mutable_list:apollo.control.ControlConf.active_controllers)
  return &active_controllers_;
}

// optional int32 max_steering_percentage_allowed = 8;
inline bool ControlConf::has_max_steering_percentage_allowed() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void ControlConf::set_has_max_steering_percentage_allowed() {
  _has_bits_[0] |= 0x00004000u;
}
inline void ControlConf::clear_has_max_steering_percentage_allowed() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void ControlConf::clear_max_steering_percentage_allowed() {
  max_steering_percentage_allowed_ = 0;
  clear_has_max_steering_percentage_allowed();
}
inline ::google::protobuf::int32 ControlConf::max_steering_percentage_allowed() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_steering_percentage_allowed)
  return max_steering_percentage_allowed_;
}
inline void ControlConf::set_max_steering_percentage_allowed(::google::protobuf::int32 value) {
  set_has_max_steering_percentage_allowed();
  max_steering_percentage_allowed_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_steering_percentage_allowed)
}

// optional double max_status_interval_sec = 9;
inline bool ControlConf::has_max_status_interval_sec() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ControlConf::set_has_max_status_interval_sec() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ControlConf::clear_has_max_status_interval_sec() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ControlConf::clear_max_status_interval_sec() {
  max_status_interval_sec_ = 0;
  clear_has_max_status_interval_sec();
}
inline double ControlConf::max_status_interval_sec() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.max_status_interval_sec)
  return max_status_interval_sec_;
}
inline void ControlConf::set_max_status_interval_sec(double value) {
  set_has_max_status_interval_sec();
  max_status_interval_sec_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.max_status_interval_sec)
}

// optional .apollo.control.LatControllerConf lat_controller_conf = 10;
inline bool ControlConf::has_lat_controller_conf() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ControlConf::set_has_lat_controller_conf() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ControlConf::clear_has_lat_controller_conf() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ControlConf::clear_lat_controller_conf() {
  if (lat_controller_conf_ != NULL) lat_controller_conf_->::apollo::control::LatControllerConf::Clear();
  clear_has_lat_controller_conf();
}
inline const ::apollo::control::LatControllerConf& ControlConf::lat_controller_conf() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.lat_controller_conf)
  return lat_controller_conf_ != NULL ? *lat_controller_conf_
                         : *::apollo::control::LatControllerConf::internal_default_instance();
}
inline ::apollo::control::LatControllerConf* ControlConf::mutable_lat_controller_conf() {
  set_has_lat_controller_conf();
  if (lat_controller_conf_ == NULL) {
    lat_controller_conf_ = new ::apollo::control::LatControllerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.ControlConf.lat_controller_conf)
  return lat_controller_conf_;
}
inline ::apollo::control::LatControllerConf* ControlConf::release_lat_controller_conf() {
  // @@protoc_insertion_point(field_release:apollo.control.ControlConf.lat_controller_conf)
  clear_has_lat_controller_conf();
  ::apollo::control::LatControllerConf* temp = lat_controller_conf_;
  lat_controller_conf_ = NULL;
  return temp;
}
inline void ControlConf::set_allocated_lat_controller_conf(::apollo::control::LatControllerConf* lat_controller_conf) {
  delete lat_controller_conf_;
  lat_controller_conf_ = lat_controller_conf;
  if (lat_controller_conf) {
    set_has_lat_controller_conf();
  } else {
    clear_has_lat_controller_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.ControlConf.lat_controller_conf)
}

// optional .apollo.control.LonControllerConf lon_controller_conf = 11;
inline bool ControlConf::has_lon_controller_conf() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ControlConf::set_has_lon_controller_conf() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ControlConf::clear_has_lon_controller_conf() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ControlConf::clear_lon_controller_conf() {
  if (lon_controller_conf_ != NULL) lon_controller_conf_->::apollo::control::LonControllerConf::Clear();
  clear_has_lon_controller_conf();
}
inline const ::apollo::control::LonControllerConf& ControlConf::lon_controller_conf() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.lon_controller_conf)
  return lon_controller_conf_ != NULL ? *lon_controller_conf_
                         : *::apollo::control::LonControllerConf::internal_default_instance();
}
inline ::apollo::control::LonControllerConf* ControlConf::mutable_lon_controller_conf() {
  set_has_lon_controller_conf();
  if (lon_controller_conf_ == NULL) {
    lon_controller_conf_ = new ::apollo::control::LonControllerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.ControlConf.lon_controller_conf)
  return lon_controller_conf_;
}
inline ::apollo::control::LonControllerConf* ControlConf::release_lon_controller_conf() {
  // @@protoc_insertion_point(field_release:apollo.control.ControlConf.lon_controller_conf)
  clear_has_lon_controller_conf();
  ::apollo::control::LonControllerConf* temp = lon_controller_conf_;
  lon_controller_conf_ = NULL;
  return temp;
}
inline void ControlConf::set_allocated_lon_controller_conf(::apollo::control::LonControllerConf* lon_controller_conf) {
  delete lon_controller_conf_;
  lon_controller_conf_ = lon_controller_conf;
  if (lon_controller_conf) {
    set_has_lon_controller_conf();
  } else {
    clear_has_lon_controller_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.ControlConf.lon_controller_conf)
}

// optional double trajectory_period = 12;
inline bool ControlConf::has_trajectory_period() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ControlConf::set_has_trajectory_period() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ControlConf::clear_has_trajectory_period() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ControlConf::clear_trajectory_period() {
  trajectory_period_ = 0;
  clear_has_trajectory_period();
}
inline double ControlConf::trajectory_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.trajectory_period)
  return trajectory_period_;
}
inline void ControlConf::set_trajectory_period(double value) {
  set_has_trajectory_period();
  trajectory_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.trajectory_period)
}

// optional double chassis_period = 13;
inline bool ControlConf::has_chassis_period() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ControlConf::set_has_chassis_period() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ControlConf::clear_has_chassis_period() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ControlConf::clear_chassis_period() {
  chassis_period_ = 0;
  clear_has_chassis_period();
}
inline double ControlConf::chassis_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.chassis_period)
  return chassis_period_;
}
inline void ControlConf::set_chassis_period(double value) {
  set_has_chassis_period();
  chassis_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.chassis_period)
}

// optional double localization_period = 14;
inline bool ControlConf::has_localization_period() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ControlConf::set_has_localization_period() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ControlConf::clear_has_localization_period() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ControlConf::clear_localization_period() {
  localization_period_ = 0;
  clear_has_localization_period();
}
inline double ControlConf::localization_period() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.localization_period)
  return localization_period_;
}
inline void ControlConf::set_localization_period(double value) {
  set_has_localization_period();
  localization_period_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.localization_period)
}

// optional double minimum_speed_resolution = 15;
inline bool ControlConf::has_minimum_speed_resolution() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void ControlConf::set_has_minimum_speed_resolution() {
  _has_bits_[0] |= 0x00002000u;
}
inline void ControlConf::clear_has_minimum_speed_resolution() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void ControlConf::clear_minimum_speed_resolution() {
  minimum_speed_resolution_ = 0;
  clear_has_minimum_speed_resolution();
}
inline double ControlConf::minimum_speed_resolution() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.minimum_speed_resolution)
  return minimum_speed_resolution_;
}
inline void ControlConf::set_minimum_speed_resolution(double value) {
  set_has_minimum_speed_resolution();
  minimum_speed_resolution_ = value;
  // @@protoc_insertion_point(field_set:apollo.control.ControlConf.minimum_speed_resolution)
}

// optional .apollo.control.MPCControllerConf mpc_controller_conf = 16;
inline bool ControlConf::has_mpc_controller_conf() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ControlConf::set_has_mpc_controller_conf() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ControlConf::clear_has_mpc_controller_conf() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ControlConf::clear_mpc_controller_conf() {
  if (mpc_controller_conf_ != NULL) mpc_controller_conf_->::apollo::control::MPCControllerConf::Clear();
  clear_has_mpc_controller_conf();
}
inline const ::apollo::control::MPCControllerConf& ControlConf::mpc_controller_conf() const {
  // @@protoc_insertion_point(field_get:apollo.control.ControlConf.mpc_controller_conf)
  return mpc_controller_conf_ != NULL ? *mpc_controller_conf_
                         : *::apollo::control::MPCControllerConf::internal_default_instance();
}
inline ::apollo::control::MPCControllerConf* ControlConf::mutable_mpc_controller_conf() {
  set_has_mpc_controller_conf();
  if (mpc_controller_conf_ == NULL) {
    mpc_controller_conf_ = new ::apollo::control::MPCControllerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.control.ControlConf.mpc_controller_conf)
  return mpc_controller_conf_;
}
inline ::apollo::control::MPCControllerConf* ControlConf::release_mpc_controller_conf() {
  // @@protoc_insertion_point(field_release:apollo.control.ControlConf.mpc_controller_conf)
  clear_has_mpc_controller_conf();
  ::apollo::control::MPCControllerConf* temp = mpc_controller_conf_;
  mpc_controller_conf_ = NULL;
  return temp;
}
inline void ControlConf::set_allocated_mpc_controller_conf(::apollo::control::MPCControllerConf* mpc_controller_conf) {
  delete mpc_controller_conf_;
  mpc_controller_conf_ = mpc_controller_conf;
  if (mpc_controller_conf) {
    set_has_mpc_controller_conf();
  } else {
    clear_has_mpc_controller_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.control.ControlConf.mpc_controller_conf)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace control
}  // namespace apollo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::apollo::control::ControlConf_ControllerType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::control::ControlConf_ControllerType>() {
  return ::apollo::control::ControlConf_ControllerType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcontrol_2fproto_2fcontrol_5fconf_2eproto__INCLUDED
