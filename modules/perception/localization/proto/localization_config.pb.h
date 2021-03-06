// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: localization_config.proto

#ifndef PROTOBUF_localization_5fconfig_2eproto__INCLUDED
#define PROTOBUF_localization_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_localization_5fconfig_2eproto();
void protobuf_AssignDesc_localization_5fconfig_2eproto();
void protobuf_ShutdownFile_localization_5fconfig_2eproto();

class LocalizationConfig;

// ===================================================================

class LocalizationConfig : public ::google::protobuf::Message {
 public:
  LocalizationConfig();
  virtual ~LocalizationConfig();

  LocalizationConfig(const LocalizationConfig& from);

  inline LocalizationConfig& operator=(const LocalizationConfig& from) {
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
  static const LocalizationConfig& default_instance();

  void Swap(LocalizationConfig* other);

  // implements Message ----------------------------------------------

  LocalizationConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LocalizationConfig& from);
  void MergeFrom(const LocalizationConfig& from);
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

  // required string odom_frame_id = 1 [default = "odom"];
  inline bool has_odom_frame_id() const;
  inline void clear_odom_frame_id();
  static const int kOdomFrameIdFieldNumber = 1;
  inline const ::std::string& odom_frame_id() const;
  inline void set_odom_frame_id(const ::std::string& value);
  inline void set_odom_frame_id(const char* value);
  inline void set_odom_frame_id(const char* value, size_t size);
  inline ::std::string* mutable_odom_frame_id();
  inline ::std::string* release_odom_frame_id();
  inline void set_allocated_odom_frame_id(::std::string* odom_frame_id);

  // required string base_frame_id = 2 [default = "base_link"];
  inline bool has_base_frame_id() const;
  inline void clear_base_frame_id();
  static const int kBaseFrameIdFieldNumber = 2;
  inline const ::std::string& base_frame_id() const;
  inline void set_base_frame_id(const ::std::string& value);
  inline void set_base_frame_id(const char* value);
  inline void set_base_frame_id(const char* value, size_t size);
  inline ::std::string* mutable_base_frame_id();
  inline ::std::string* release_base_frame_id();
  inline void set_allocated_base_frame_id(::std::string* base_frame_id);

  // required string global_frame_id = 3 [default = "map"];
  inline bool has_global_frame_id() const;
  inline void clear_global_frame_id();
  static const int kGlobalFrameIdFieldNumber = 3;
  inline const ::std::string& global_frame_id() const;
  inline void set_global_frame_id(const ::std::string& value);
  inline void set_global_frame_id(const char* value);
  inline void set_global_frame_id(const char* value, size_t size);
  inline ::std::string* mutable_global_frame_id();
  inline ::std::string* release_global_frame_id();
  inline void set_allocated_global_frame_id(::std::string* global_frame_id);

  // required string laser_topic_name = 4 [default = "base_laser_scan"];
  inline bool has_laser_topic_name() const;
  inline void clear_laser_topic_name();
  static const int kLaserTopicNameFieldNumber = 4;
  inline const ::std::string& laser_topic_name() const;
  inline void set_laser_topic_name(const ::std::string& value);
  inline void set_laser_topic_name(const char* value);
  inline void set_laser_topic_name(const char* value, size_t size);
  inline ::std::string* mutable_laser_topic_name();
  inline ::std::string* release_laser_topic_name();
  inline void set_allocated_laser_topic_name(::std::string* laser_topic_name);

  // required string map_topic_name = 5 [default = "map"];
  inline bool has_map_topic_name() const;
  inline void clear_map_topic_name();
  static const int kMapTopicNameFieldNumber = 5;
  inline const ::std::string& map_topic_name() const;
  inline void set_map_topic_name(const ::std::string& value);
  inline void set_map_topic_name(const char* value);
  inline void set_map_topic_name(const char* value, size_t size);
  inline ::std::string* mutable_map_topic_name();
  inline ::std::string* release_map_topic_name();
  inline void set_allocated_map_topic_name(::std::string* map_topic_name);

  // required string init_pose_topic_name = 6 [default = "initialpose"];
  inline bool has_init_pose_topic_name() const;
  inline void clear_init_pose_topic_name();
  static const int kInitPoseTopicNameFieldNumber = 6;
  inline const ::std::string& init_pose_topic_name() const;
  inline void set_init_pose_topic_name(const ::std::string& value);
  inline void set_init_pose_topic_name(const char* value);
  inline void set_init_pose_topic_name(const char* value, size_t size);
  inline ::std::string* mutable_init_pose_topic_name();
  inline ::std::string* release_init_pose_topic_name();
  inline void set_allocated_init_pose_topic_name(::std::string* init_pose_topic_name);

  // required double transform_tolerance = 7 [default = 0.1];
  inline bool has_transform_tolerance() const;
  inline void clear_transform_tolerance();
  static const int kTransformToleranceFieldNumber = 7;
  inline double transform_tolerance() const;
  inline void set_transform_tolerance(double value);

  // @@protoc_insertion_point(class_scope:LocalizationConfig)
 private:
  inline void set_has_odom_frame_id();
  inline void clear_has_odom_frame_id();
  inline void set_has_base_frame_id();
  inline void clear_has_base_frame_id();
  inline void set_has_global_frame_id();
  inline void clear_has_global_frame_id();
  inline void set_has_laser_topic_name();
  inline void clear_has_laser_topic_name();
  inline void set_has_map_topic_name();
  inline void clear_has_map_topic_name();
  inline void set_has_init_pose_topic_name();
  inline void clear_has_init_pose_topic_name();
  inline void set_has_transform_tolerance();
  inline void clear_has_transform_tolerance();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  static ::std::string* _default_odom_frame_id_;
  ::std::string* odom_frame_id_;
  static ::std::string* _default_base_frame_id_;
  ::std::string* base_frame_id_;
  static ::std::string* _default_global_frame_id_;
  ::std::string* global_frame_id_;
  static ::std::string* _default_laser_topic_name_;
  ::std::string* laser_topic_name_;
  static ::std::string* _default_map_topic_name_;
  ::std::string* map_topic_name_;
  static ::std::string* _default_init_pose_topic_name_;
  ::std::string* init_pose_topic_name_;
  double transform_tolerance_;
  friend void  protobuf_AddDesc_localization_5fconfig_2eproto();
  friend void protobuf_AssignDesc_localization_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_localization_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static LocalizationConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// LocalizationConfig

// required string odom_frame_id = 1 [default = "odom"];
inline bool LocalizationConfig::has_odom_frame_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LocalizationConfig::set_has_odom_frame_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LocalizationConfig::clear_has_odom_frame_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LocalizationConfig::clear_odom_frame_id() {
  if (odom_frame_id_ != _default_odom_frame_id_) {
    odom_frame_id_->assign(*_default_odom_frame_id_);
  }
  clear_has_odom_frame_id();
}
inline const ::std::string& LocalizationConfig::odom_frame_id() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.odom_frame_id)
  return *odom_frame_id_;
}
inline void LocalizationConfig::set_odom_frame_id(const ::std::string& value) {
  set_has_odom_frame_id();
  if (odom_frame_id_ == _default_odom_frame_id_) {
    odom_frame_id_ = new ::std::string;
  }
  odom_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.odom_frame_id)
}
inline void LocalizationConfig::set_odom_frame_id(const char* value) {
  set_has_odom_frame_id();
  if (odom_frame_id_ == _default_odom_frame_id_) {
    odom_frame_id_ = new ::std::string;
  }
  odom_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.odom_frame_id)
}
inline void LocalizationConfig::set_odom_frame_id(const char* value, size_t size) {
  set_has_odom_frame_id();
  if (odom_frame_id_ == _default_odom_frame_id_) {
    odom_frame_id_ = new ::std::string;
  }
  odom_frame_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.odom_frame_id)
}
inline ::std::string* LocalizationConfig::mutable_odom_frame_id() {
  set_has_odom_frame_id();
  if (odom_frame_id_ == _default_odom_frame_id_) {
    odom_frame_id_ = new ::std::string(*_default_odom_frame_id_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.odom_frame_id)
  return odom_frame_id_;
}
inline ::std::string* LocalizationConfig::release_odom_frame_id() {
  clear_has_odom_frame_id();
  if (odom_frame_id_ == _default_odom_frame_id_) {
    return NULL;
  } else {
    ::std::string* temp = odom_frame_id_;
    odom_frame_id_ = const_cast< ::std::string*>(_default_odom_frame_id_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_odom_frame_id(::std::string* odom_frame_id) {
  if (odom_frame_id_ != _default_odom_frame_id_) {
    delete odom_frame_id_;
  }
  if (odom_frame_id) {
    set_has_odom_frame_id();
    odom_frame_id_ = odom_frame_id;
  } else {
    clear_has_odom_frame_id();
    odom_frame_id_ = const_cast< ::std::string*>(_default_odom_frame_id_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.odom_frame_id)
}

// required string base_frame_id = 2 [default = "base_link"];
inline bool LocalizationConfig::has_base_frame_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LocalizationConfig::set_has_base_frame_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LocalizationConfig::clear_has_base_frame_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LocalizationConfig::clear_base_frame_id() {
  if (base_frame_id_ != _default_base_frame_id_) {
    base_frame_id_->assign(*_default_base_frame_id_);
  }
  clear_has_base_frame_id();
}
inline const ::std::string& LocalizationConfig::base_frame_id() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.base_frame_id)
  return *base_frame_id_;
}
inline void LocalizationConfig::set_base_frame_id(const ::std::string& value) {
  set_has_base_frame_id();
  if (base_frame_id_ == _default_base_frame_id_) {
    base_frame_id_ = new ::std::string;
  }
  base_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.base_frame_id)
}
inline void LocalizationConfig::set_base_frame_id(const char* value) {
  set_has_base_frame_id();
  if (base_frame_id_ == _default_base_frame_id_) {
    base_frame_id_ = new ::std::string;
  }
  base_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.base_frame_id)
}
inline void LocalizationConfig::set_base_frame_id(const char* value, size_t size) {
  set_has_base_frame_id();
  if (base_frame_id_ == _default_base_frame_id_) {
    base_frame_id_ = new ::std::string;
  }
  base_frame_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.base_frame_id)
}
inline ::std::string* LocalizationConfig::mutable_base_frame_id() {
  set_has_base_frame_id();
  if (base_frame_id_ == _default_base_frame_id_) {
    base_frame_id_ = new ::std::string(*_default_base_frame_id_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.base_frame_id)
  return base_frame_id_;
}
inline ::std::string* LocalizationConfig::release_base_frame_id() {
  clear_has_base_frame_id();
  if (base_frame_id_ == _default_base_frame_id_) {
    return NULL;
  } else {
    ::std::string* temp = base_frame_id_;
    base_frame_id_ = const_cast< ::std::string*>(_default_base_frame_id_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_base_frame_id(::std::string* base_frame_id) {
  if (base_frame_id_ != _default_base_frame_id_) {
    delete base_frame_id_;
  }
  if (base_frame_id) {
    set_has_base_frame_id();
    base_frame_id_ = base_frame_id;
  } else {
    clear_has_base_frame_id();
    base_frame_id_ = const_cast< ::std::string*>(_default_base_frame_id_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.base_frame_id)
}

// required string global_frame_id = 3 [default = "map"];
inline bool LocalizationConfig::has_global_frame_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LocalizationConfig::set_has_global_frame_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LocalizationConfig::clear_has_global_frame_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LocalizationConfig::clear_global_frame_id() {
  if (global_frame_id_ != _default_global_frame_id_) {
    global_frame_id_->assign(*_default_global_frame_id_);
  }
  clear_has_global_frame_id();
}
inline const ::std::string& LocalizationConfig::global_frame_id() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.global_frame_id)
  return *global_frame_id_;
}
inline void LocalizationConfig::set_global_frame_id(const ::std::string& value) {
  set_has_global_frame_id();
  if (global_frame_id_ == _default_global_frame_id_) {
    global_frame_id_ = new ::std::string;
  }
  global_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.global_frame_id)
}
inline void LocalizationConfig::set_global_frame_id(const char* value) {
  set_has_global_frame_id();
  if (global_frame_id_ == _default_global_frame_id_) {
    global_frame_id_ = new ::std::string;
  }
  global_frame_id_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.global_frame_id)
}
inline void LocalizationConfig::set_global_frame_id(const char* value, size_t size) {
  set_has_global_frame_id();
  if (global_frame_id_ == _default_global_frame_id_) {
    global_frame_id_ = new ::std::string;
  }
  global_frame_id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.global_frame_id)
}
inline ::std::string* LocalizationConfig::mutable_global_frame_id() {
  set_has_global_frame_id();
  if (global_frame_id_ == _default_global_frame_id_) {
    global_frame_id_ = new ::std::string(*_default_global_frame_id_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.global_frame_id)
  return global_frame_id_;
}
inline ::std::string* LocalizationConfig::release_global_frame_id() {
  clear_has_global_frame_id();
  if (global_frame_id_ == _default_global_frame_id_) {
    return NULL;
  } else {
    ::std::string* temp = global_frame_id_;
    global_frame_id_ = const_cast< ::std::string*>(_default_global_frame_id_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_global_frame_id(::std::string* global_frame_id) {
  if (global_frame_id_ != _default_global_frame_id_) {
    delete global_frame_id_;
  }
  if (global_frame_id) {
    set_has_global_frame_id();
    global_frame_id_ = global_frame_id;
  } else {
    clear_has_global_frame_id();
    global_frame_id_ = const_cast< ::std::string*>(_default_global_frame_id_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.global_frame_id)
}

// required string laser_topic_name = 4 [default = "base_laser_scan"];
inline bool LocalizationConfig::has_laser_topic_name() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LocalizationConfig::set_has_laser_topic_name() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LocalizationConfig::clear_has_laser_topic_name() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LocalizationConfig::clear_laser_topic_name() {
  if (laser_topic_name_ != _default_laser_topic_name_) {
    laser_topic_name_->assign(*_default_laser_topic_name_);
  }
  clear_has_laser_topic_name();
}
inline const ::std::string& LocalizationConfig::laser_topic_name() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.laser_topic_name)
  return *laser_topic_name_;
}
inline void LocalizationConfig::set_laser_topic_name(const ::std::string& value) {
  set_has_laser_topic_name();
  if (laser_topic_name_ == _default_laser_topic_name_) {
    laser_topic_name_ = new ::std::string;
  }
  laser_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.laser_topic_name)
}
inline void LocalizationConfig::set_laser_topic_name(const char* value) {
  set_has_laser_topic_name();
  if (laser_topic_name_ == _default_laser_topic_name_) {
    laser_topic_name_ = new ::std::string;
  }
  laser_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.laser_topic_name)
}
inline void LocalizationConfig::set_laser_topic_name(const char* value, size_t size) {
  set_has_laser_topic_name();
  if (laser_topic_name_ == _default_laser_topic_name_) {
    laser_topic_name_ = new ::std::string;
  }
  laser_topic_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.laser_topic_name)
}
inline ::std::string* LocalizationConfig::mutable_laser_topic_name() {
  set_has_laser_topic_name();
  if (laser_topic_name_ == _default_laser_topic_name_) {
    laser_topic_name_ = new ::std::string(*_default_laser_topic_name_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.laser_topic_name)
  return laser_topic_name_;
}
inline ::std::string* LocalizationConfig::release_laser_topic_name() {
  clear_has_laser_topic_name();
  if (laser_topic_name_ == _default_laser_topic_name_) {
    return NULL;
  } else {
    ::std::string* temp = laser_topic_name_;
    laser_topic_name_ = const_cast< ::std::string*>(_default_laser_topic_name_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_laser_topic_name(::std::string* laser_topic_name) {
  if (laser_topic_name_ != _default_laser_topic_name_) {
    delete laser_topic_name_;
  }
  if (laser_topic_name) {
    set_has_laser_topic_name();
    laser_topic_name_ = laser_topic_name;
  } else {
    clear_has_laser_topic_name();
    laser_topic_name_ = const_cast< ::std::string*>(_default_laser_topic_name_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.laser_topic_name)
}

// required string map_topic_name = 5 [default = "map"];
inline bool LocalizationConfig::has_map_topic_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LocalizationConfig::set_has_map_topic_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LocalizationConfig::clear_has_map_topic_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LocalizationConfig::clear_map_topic_name() {
  if (map_topic_name_ != _default_map_topic_name_) {
    map_topic_name_->assign(*_default_map_topic_name_);
  }
  clear_has_map_topic_name();
}
inline const ::std::string& LocalizationConfig::map_topic_name() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.map_topic_name)
  return *map_topic_name_;
}
inline void LocalizationConfig::set_map_topic_name(const ::std::string& value) {
  set_has_map_topic_name();
  if (map_topic_name_ == _default_map_topic_name_) {
    map_topic_name_ = new ::std::string;
  }
  map_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.map_topic_name)
}
inline void LocalizationConfig::set_map_topic_name(const char* value) {
  set_has_map_topic_name();
  if (map_topic_name_ == _default_map_topic_name_) {
    map_topic_name_ = new ::std::string;
  }
  map_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.map_topic_name)
}
inline void LocalizationConfig::set_map_topic_name(const char* value, size_t size) {
  set_has_map_topic_name();
  if (map_topic_name_ == _default_map_topic_name_) {
    map_topic_name_ = new ::std::string;
  }
  map_topic_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.map_topic_name)
}
inline ::std::string* LocalizationConfig::mutable_map_topic_name() {
  set_has_map_topic_name();
  if (map_topic_name_ == _default_map_topic_name_) {
    map_topic_name_ = new ::std::string(*_default_map_topic_name_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.map_topic_name)
  return map_topic_name_;
}
inline ::std::string* LocalizationConfig::release_map_topic_name() {
  clear_has_map_topic_name();
  if (map_topic_name_ == _default_map_topic_name_) {
    return NULL;
  } else {
    ::std::string* temp = map_topic_name_;
    map_topic_name_ = const_cast< ::std::string*>(_default_map_topic_name_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_map_topic_name(::std::string* map_topic_name) {
  if (map_topic_name_ != _default_map_topic_name_) {
    delete map_topic_name_;
  }
  if (map_topic_name) {
    set_has_map_topic_name();
    map_topic_name_ = map_topic_name;
  } else {
    clear_has_map_topic_name();
    map_topic_name_ = const_cast< ::std::string*>(_default_map_topic_name_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.map_topic_name)
}

// required string init_pose_topic_name = 6 [default = "initialpose"];
inline bool LocalizationConfig::has_init_pose_topic_name() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LocalizationConfig::set_has_init_pose_topic_name() {
  _has_bits_[0] |= 0x00000020u;
}
inline void LocalizationConfig::clear_has_init_pose_topic_name() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void LocalizationConfig::clear_init_pose_topic_name() {
  if (init_pose_topic_name_ != _default_init_pose_topic_name_) {
    init_pose_topic_name_->assign(*_default_init_pose_topic_name_);
  }
  clear_has_init_pose_topic_name();
}
inline const ::std::string& LocalizationConfig::init_pose_topic_name() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.init_pose_topic_name)
  return *init_pose_topic_name_;
}
inline void LocalizationConfig::set_init_pose_topic_name(const ::std::string& value) {
  set_has_init_pose_topic_name();
  if (init_pose_topic_name_ == _default_init_pose_topic_name_) {
    init_pose_topic_name_ = new ::std::string;
  }
  init_pose_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set:LocalizationConfig.init_pose_topic_name)
}
inline void LocalizationConfig::set_init_pose_topic_name(const char* value) {
  set_has_init_pose_topic_name();
  if (init_pose_topic_name_ == _default_init_pose_topic_name_) {
    init_pose_topic_name_ = new ::std::string;
  }
  init_pose_topic_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:LocalizationConfig.init_pose_topic_name)
}
inline void LocalizationConfig::set_init_pose_topic_name(const char* value, size_t size) {
  set_has_init_pose_topic_name();
  if (init_pose_topic_name_ == _default_init_pose_topic_name_) {
    init_pose_topic_name_ = new ::std::string;
  }
  init_pose_topic_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LocalizationConfig.init_pose_topic_name)
}
inline ::std::string* LocalizationConfig::mutable_init_pose_topic_name() {
  set_has_init_pose_topic_name();
  if (init_pose_topic_name_ == _default_init_pose_topic_name_) {
    init_pose_topic_name_ = new ::std::string(*_default_init_pose_topic_name_);
  }
  // @@protoc_insertion_point(field_mutable:LocalizationConfig.init_pose_topic_name)
  return init_pose_topic_name_;
}
inline ::std::string* LocalizationConfig::release_init_pose_topic_name() {
  clear_has_init_pose_topic_name();
  if (init_pose_topic_name_ == _default_init_pose_topic_name_) {
    return NULL;
  } else {
    ::std::string* temp = init_pose_topic_name_;
    init_pose_topic_name_ = const_cast< ::std::string*>(_default_init_pose_topic_name_);
    return temp;
  }
}
inline void LocalizationConfig::set_allocated_init_pose_topic_name(::std::string* init_pose_topic_name) {
  if (init_pose_topic_name_ != _default_init_pose_topic_name_) {
    delete init_pose_topic_name_;
  }
  if (init_pose_topic_name) {
    set_has_init_pose_topic_name();
    init_pose_topic_name_ = init_pose_topic_name;
  } else {
    clear_has_init_pose_topic_name();
    init_pose_topic_name_ = const_cast< ::std::string*>(_default_init_pose_topic_name_);
  }
  // @@protoc_insertion_point(field_set_allocated:LocalizationConfig.init_pose_topic_name)
}

// required double transform_tolerance = 7 [default = 0.1];
inline bool LocalizationConfig::has_transform_tolerance() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void LocalizationConfig::set_has_transform_tolerance() {
  _has_bits_[0] |= 0x00000040u;
}
inline void LocalizationConfig::clear_has_transform_tolerance() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void LocalizationConfig::clear_transform_tolerance() {
  transform_tolerance_ = 0.1;
  clear_has_transform_tolerance();
}
inline double LocalizationConfig::transform_tolerance() const {
  // @@protoc_insertion_point(field_get:LocalizationConfig.transform_tolerance)
  return transform_tolerance_;
}
inline void LocalizationConfig::set_transform_tolerance(double value) {
  set_has_transform_tolerance();
  transform_tolerance_ = value;
  // @@protoc_insertion_point(field_set:LocalizationConfig.transform_tolerance)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_localization_5fconfig_2eproto__INCLUDED
