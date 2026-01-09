QT       += core gui
# QT += serialport serialbus
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++23

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    device_driver.cpp \
    main.cpp \
    b03_dawl_rosinterface.cpp \
    roscan_app.cpp\
    socketcan.cpp
    # devices/usbcandevs.cpp
HEADERS += \
    b03_dawl_rosinterface.h \
    device_driver.h \
    roscan_app.h\
    socketcan.h
    # devices/usbcandevs.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# INCLUDEPATH += ./devices
# INCLUDEPATH += /opt/ros/noetic/include
# DEPENDPATH += /opt/ros/noetic/include
# LIBS += -L/opt/ros/noetic/lib -lroscpp -lroslib -lrosconsole -lroscpp_serialization -lrostime -lxmlrpcpp -lcpp_common -lrosconsole_log4cxx -lrosconsole_backend_interface

# INCLUDEPATH +=../RosMsg/devel/include/
# DEPENDPATH +=../RosMsg/devel/include/

INCLUDEPATH +=../RobotDef/include/

INCLUDEPATH += ./devices

# INCLUDEPATH +=../RosMsg/install/rosmsg/include/rosmsg/rosmsg/msg/
# DEPENDPATH +=../RosMsg/install/rosmsg/include/rosmsg/rosmsg/msg/

INCLUDEPATH +=../RosMsg/install/rosmsg/include/rosmsg/
DEPENDPATH +=../RosMsg/install/rosmsg/include/rosmsg/


LIBS += -L../RosMsg/install/rosmsg/lib \
-lrosmsg__rosidl_generator_c\
-lrosmsg__rosidl_generator_py\
-lrosmsg__rosidl_typesupport_c\
-lrosmsg__rosidl_typesupport_cpp\
-lrosmsg__rosidl_typesupport_fastrtps_c\
-lrosmsg__rosidl_typesupport_fastrtps_cpp\
-lrosmsg__rosidl_typesupport_introspection_c\
-lrosmsg__rosidl_typesupport_introspection_cpp\

INCLUDEPATH += /opt/ros/jazzy/include
DEPENDPATH += /opt/ros/jazzy/include
INCLUDEPATH += /opt/ros/jazzy/include/std_msgs
DEPENDPATH += /opt/ros/jazzy/include/std_msgs
INCLUDEPATH += /opt/ros/jazzy/include/rclcpp/
DEPENDPATH += /opt/ros/jazzy/include/rclcpp
INCLUDEPATH += /opt/ros/jazzy/include/rosidl_runtime_cpp
DEPENDPATH += /opt/ros/jazzy/include/rosidl_runtime_cpp
INCLUDEPATH += /opt/ros/jazzy/include/rosidl_runtime_c
DEPENDPATH += /opt/ros/jazzy/include/rosidl_runtime_c
INCLUDEPATH += /opt/ros/jazzy/include/rosidl_typesupport_interface
DEPENDPATH += /opt/ros/jazzy/include/rosidl_typesupport_interface
INCLUDEPATH += /opt/ros/jazzy/include/rcutils
DEPENDPATH += /opt/ros/jazzy/include/rcutils
INCLUDEPATH += /opt/ros/jazzy/include/rcl_interfaces
DEPENDPATH += /opt/ros/jazzy/include/rcl_interfaces
INCLUDEPATH += /opt/ros/jazzy/include/service_msgs
DEPENDPATH += /opt/ros/jazzy/include/service_msgs
INCLUDEPATH += /opt/ros/jazzy/include/builtin_interfaces
DEPENDPATH += /opt/ros/jazzy/include/builtin_interfaces
INCLUDEPATH += /opt/ros/jazzy/include/rcl
DEPENDPATH += /opt/ros/jazzy/include/rcl
INCLUDEPATH += /opt/ros/jazzy/include/rmw
DEPENDPATH += /opt/ros/jazzy/include/rmw
INCLUDEPATH += /opt/ros/jazzy/include/rcpputils
DEPENDPATH += /opt/ros/jazzy/include/rcpputils
INCLUDEPATH += /opt/ros/jazzy/include/rcl_yaml_param_parser
DEPENDPATH += /opt/ros/jazzy/include/rcl_yaml_param_parser
INCLUDEPATH += /opt/ros/jazzy/include/type_description_interfaces
DEPENDPATH += /opt/ros/jazzy/include/type_description_interfaces
INCLUDEPATH += /opt/ros/jazzy/include/rosidl_dynamic_typesupport
DEPENDPATH += /opt/ros/jazzy/include/rosidl_dynamic_typesupport
INCLUDEPATH += /opt/ros/jazzy/include/tracetools
DEPENDPATH += /opt/ros/jazzy/include/tracetools
INCLUDEPATH += /opt/ros/jazzy/include/libstatistics_collector
DEPENDPATH += /opt/ros/jazzy/include/libstatistics_collector
INCLUDEPATH += /opt/ros/jazzy/include/statistics_msgs
DEPENDPATH += /opt/ros/jazzy/include/statistics_msgs
INCLUDEPATH += /opt/ros/jazzy/include/rosidl_typesupport_introspection_cpp
DEPENDPATH += /opt/ros/jazzy/include/rosidl_typesupport_introspection_cpp


LIBS +=-L/opt/ros/jazzy/lib \
-laction_msgs__rosidl_generator_c\
-laction_msgs__rosidl_generator_py\
-laction_msgs__rosidl_typesupport_c\
-laction_msgs__rosidl_typesupport_cpp\
-laction_msgs__rosidl_typesupport_fastrtps_c\
-laction_msgs__rosidl_typesupport_fastrtps_cpp\
-laction_msgs__rosidl_typesupport_introspection_c\
-laction_msgs__rosidl_typesupport_introspection_cpp\
-laction_tutorials\
-laction_tutorials_interfaces__rosidl_generator_c\
-laction_tutorials_interfaces__rosidl_generator_py\
-laction_tutorials_interfaces__rosidl_typesupport_c\
-laction_tutorials_interfaces__rosidl_typesupport_cpp\
-laction_tutorials_interfaces__rosidl_typesupport_fastrtps_c\
-laction_tutorials_interfaces__rosidl_typesupport_fastrtps_cpp\
-laction_tutorials_interfaces__rosidl_typesupport_introspection_c\
-laction_tutorials_interfaces__rosidl_typesupport_introspection_cpp\
-lactionlib_msgs__rosidl_generator_c\
-lactionlib_msgs__rosidl_generator_py\
-lactionlib_msgs__rosidl_typesupport_c\
-lactionlib_msgs__rosidl_typesupport_cpp\
-lactionlib_msgs__rosidl_typesupport_fastrtps_c\
-lactionlib_msgs__rosidl_typesupport_fastrtps_cpp\
-lactionlib_msgs__rosidl_typesupport_introspection_c\
-lactionlib_msgs__rosidl_typesupport_introspection_cpp\
-ladd_two_ints_client_async_library\
-ladd_two_ints_server_library\
-lament_index_cpp\
-lbuiltin_interfaces__rosidl_generator_c\
-lbuiltin_interfaces__rosidl_generator_py\
-lbuiltin_interfaces__rosidl_typesupport_c\
-lbuiltin_interfaces__rosidl_typesupport_cpp\
-lbuiltin_interfaces__rosidl_typesupport_fastrtps_c\
-lbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp\
-lbuiltin_interfaces__rosidl_typesupport_introspection_c\
-lbuiltin_interfaces__rosidl_typesupport_introspection_cpp\
-lclass_loader\
-lclient_component\
-lcomponent_manager\
-lcomposition_interfaces__rosidl_generator_c\
-lcomposition_interfaces__rosidl_generator_py\
-lcomposition_interfaces__rosidl_typesupport_c\
-lcomposition_interfaces__rosidl_typesupport_cpp\
-lcomposition_interfaces__rosidl_typesupport_fastrtps_c\
-lcomposition_interfaces__rosidl_typesupport_fastrtps_cpp\
-lcomposition_interfaces__rosidl_typesupport_introspection_c\
-lcomposition_interfaces__rosidl_typesupport_introspection_cpp\
-lcomposition_nodes\
-lcontent_filtering_publisher_library\
-lcontent_filtering_subscriber_library\
-lcv_bridge\
-ldiagnostic_msgs__rosidl_generator_c\
-ldiagnostic_msgs__rosidl_generator_py\
-ldiagnostic_msgs__rosidl_typesupport_c\
-ldiagnostic_msgs__rosidl_typesupport_cpp\
-ldiagnostic_msgs__rosidl_typesupport_fastrtps_c\
-ldiagnostic_msgs__rosidl_typesupport_fastrtps_cpp\
-ldiagnostic_msgs__rosidl_typesupport_introspection_c\
-ldiagnostic_msgs__rosidl_typesupport_introspection_cpp\
-leven_parameters_node_library\
-lexample_interfaces__rosidl_generator_c\
-lexample_interfaces__rosidl_generator_py\
-lexample_interfaces__rosidl_typesupport_c\
-lexample_interfaces__rosidl_typesupport_cpp\
-lexample_interfaces__rosidl_typesupport_fastrtps_c\
-lexample_interfaces__rosidl_typesupport_fastrtps_cpp\
-lexample_interfaces__rosidl_typesupport_introspection_c\
-lexample_interfaces__rosidl_typesupport_introspection_cpp\
-lfastcdr\
-lfastcdr\
-lfastcdr\
-lfastrtps\
-lfastrtps\
-lfastrtps\
-lgame_controller\
-lgeometry_msgs__rosidl_generator_c\
-lgeometry_msgs__rosidl_generator_py\
-lgeometry_msgs__rosidl_typesupport_c\
-lgeometry_msgs__rosidl_typesupport_cpp\
-lgeometry_msgs__rosidl_typesupport_fastrtps_c\
-lgeometry_msgs__rosidl_typesupport_fastrtps_cpp\
-lgeometry_msgs__rosidl_typesupport_introspection_c\
-lgeometry_msgs__rosidl_typesupport_introspection_cpp\
-limage_geometry\
-limage_tools\
-limage_transport\
-limage_transport_plugins\
-linteractive_markers\
-lintrospection_client_library\
-lintrospection_service_library\
-ljoy\
-lkdl_parser\
-lkeyboard_handler\
-llaser_geometry\
-llibstatistics_collector\
-llifecycle_msgs__rosidl_generator_c\
-llifecycle_msgs__rosidl_generator_py\
-llifecycle_msgs__rosidl_typesupport_c\
-llifecycle_msgs__rosidl_typesupport_cpp\
-llifecycle_msgs__rosidl_typesupport_fastrtps_c\
-llifecycle_msgs__rosidl_typesupport_fastrtps_cpp\
-llifecycle_msgs__rosidl_typesupport_introspection_c\
-llifecycle_msgs__rosidl_typesupport_introspection_cpp\
-llist_parameters_library\
-llistener_best_effort_library\
-llistener_component\
-llistener_library\
-llistener_serialized_message_library\
-llogger_config_component\
-llogger_usage_component\
-llogging_demo__rosidl_generator_c\
-llogging_demo__rosidl_generator_py\
-llogging_demo__rosidl_typesupport_c\
-llogging_demo__rosidl_typesupport_cpp\
-llogging_demo__rosidl_typesupport_fastrtps_c\
-llogging_demo__rosidl_typesupport_fastrtps_cpp\
-llogging_demo__rosidl_typesupport_introspection_c\
-llogging_demo__rosidl_typesupport_introspection_cpp\
-lmap_msgs__rosidl_generator_c\
-lmap_msgs__rosidl_generator_py\
-lmap_msgs__rosidl_typesupport_c\
-lmap_msgs__rosidl_typesupport_cpp\
-lmap_msgs__rosidl_typesupport_fastrtps_c\
-lmap_msgs__rosidl_typesupport_fastrtps_cpp\
-lmap_msgs__rosidl_typesupport_introspection_c\
-lmap_msgs__rosidl_typesupport_introspection_cpp\
-lmcap\
-lmessage_filters\
-lmessage_lost\
-lnav_msgs__rosidl_generator_c\
-lnav_msgs__rosidl_generator_py\
-lnav_msgs__rosidl_typesupport_c\
-lnav_msgs__rosidl_typesupport_cpp\
-lnav_msgs__rosidl_typesupport_fastrtps_c\
-lnav_msgs__rosidl_typesupport_fastrtps_cpp\
-lnav_msgs__rosidl_typesupport_introspection_c\
-lnav_msgs__rosidl_typesupport_introspection_cpp\
-lnode_like_listener_component\
-lone_off_timer_library\
-lparameter_blackboard_library\
-lparameter_events_async_library\
-lpc_republish_node\
-lpcl_msgs__rosidl_generator_c\
-lpcl_msgs__rosidl_generator_py\
-lpcl_msgs__rosidl_typesupport_c\
-lpcl_msgs__rosidl_typesupport_cpp\
-lpcl_msgs__rosidl_typesupport_fastrtps_c\
-lpcl_msgs__rosidl_typesupport_fastrtps_cpp\
-lpcl_msgs__rosidl_typesupport_introspection_c\
-lpcl_msgs__rosidl_typesupport_introspection_cpp\
-lpendulum_msgs__rosidl_generator_c\
-lpendulum_msgs__rosidl_generator_py\
-lpendulum_msgs__rosidl_typesupport_c\
-lpendulum_msgs__rosidl_typesupport_cpp\
-lpendulum_msgs__rosidl_typesupport_fastrtps_c\
-lpendulum_msgs__rosidl_typesupport_fastrtps_cpp\
-lpendulum_msgs__rosidl_typesupport_introspection_c\
-lpendulum_msgs__rosidl_typesupport_introspection_cpp\
-lpoint_cloud_transport\
-lpoint_cloud_transport_plugins\
-lqos_overrides\
-lqt_gui_cpp\
-lrcl\
-lrcl_action\
-lrcl_interfaces__rosidl_generator_c\
-lrcl_interfaces__rosidl_generator_py\
-lrcl_interfaces__rosidl_typesupport_c\
-lrcl_interfaces__rosidl_typesupport_cpp\
-lrcl_interfaces__rosidl_typesupport_fastrtps_c\
-lrcl_interfaces__rosidl_typesupport_fastrtps_cpp\
-lrcl_interfaces__rosidl_typesupport_introspection_c\
-lrcl_interfaces__rosidl_typesupport_introspection_cpp\
-lrcl_lifecycle\
-lrcl_logging_interface\
-lrcl_logging_spdlog\
-lrcl_yaml_param_parser\
-lrclcpp\
-lrclcpp_action\
-lrclcpp_lifecycle\
-lrcpputils\
-lrcutils\
-lrepublish_node\
-lresource_retriever\
-lreuse_timer_library\
-lrmw\
-lrmw_dds_common\
-lrmw_dds_common__rosidl_generator_c\
-lrmw_dds_common__rosidl_generator_py\
-lrmw_dds_common__rosidl_typesupport_c\
-lrmw_dds_common__rosidl_typesupport_cpp\
-lrmw_dds_common__rosidl_typesupport_fastrtps_c\
-lrmw_dds_common__rosidl_typesupport_fastrtps_cpp\
-lrmw_dds_common__rosidl_typesupport_introspection_c\
-lrmw_dds_common__rosidl_typesupport_introspection_cpp\
-lrmw_fastrtps_cpp\
-lrmw_fastrtps_shared_cpp\
-lrmw_implementation\
-lrobot_state_publisher_node\
-lrosbag2_compression\
-lrosbag2_compression_zstd\
-lrosbag2_cpp\
-lrosbag2_interfaces__rosidl_generator_c\
-lrosbag2_interfaces__rosidl_generator_py\
-lrosbag2_interfaces__rosidl_typesupport_c\
-lrosbag2_interfaces__rosidl_typesupport_cpp\
-lrosbag2_interfaces__rosidl_typesupport_fastrtps_c\
-lrosbag2_interfaces__rosidl_typesupport_fastrtps_cpp\
-lrosbag2_interfaces__rosidl_typesupport_introspection_c\
-lrosbag2_interfaces__rosidl_typesupport_introspection_cpp\
-lrosbag2_storage\
-lrosbag2_storage_mcap\
-lrosbag2_storage_sqlite3\
-lrosbag2_transport\
-lrosgraph_msgs__rosidl_generator_c\
-lrosgraph_msgs__rosidl_generator_py\
-lrosgraph_msgs__rosidl_typesupport_c\
-lrosgraph_msgs__rosidl_typesupport_cpp\
-lrosgraph_msgs__rosidl_typesupport_fastrtps_c\
-lrosgraph_msgs__rosidl_typesupport_fastrtps_cpp\
-lrosgraph_msgs__rosidl_typesupport_introspection_c\
-lrosgraph_msgs__rosidl_typesupport_introspection_cpp\
-lrosidl_dynamic_typesupport\
-lrosidl_dynamic_typesupport_fastrtps\
-lrosidl_runtime_c\
-lrosidl_typesupport_c\
-lrosidl_typesupport_cpp\
-lrosidl_typesupport_fastrtps_c\
-lrosidl_typesupport_fastrtps_cpp\
-lrosidl_typesupport_introspection_c\
-lrosidl_typesupport_introspection_cpp\
-lrqt_gui_cpp\
-lrttest\
-lrviz_common\
-lrviz_default_plugins\
-lrviz_rendering\
-lsensor_msgs__rosidl_generator_c\
-lsensor_msgs__rosidl_generator_py\
-lsensor_msgs__rosidl_typesupport_c\
-lsensor_msgs__rosidl_typesupport_cpp\
-lsensor_msgs__rosidl_typesupport_fastrtps_c\
-lsensor_msgs__rosidl_typesupport_fastrtps_cpp\
-lsensor_msgs__rosidl_typesupport_introspection_c\
-lsensor_msgs__rosidl_typesupport_introspection_cpp\
-lserver_component\
-lservice_msgs__rosidl_generator_c\
-lservice_msgs__rosidl_generator_py\
-lservice_msgs__rosidl_typesupport_c\
-lservice_msgs__rosidl_typesupport_cpp\
-lservice_msgs__rosidl_typesupport_fastrtps_c\
-lservice_msgs__rosidl_typesupport_fastrtps_cpp\
-lservice_msgs__rosidl_typesupport_introspection_c\
-lservice_msgs__rosidl_typesupport_introspection_cpp\
-lset_and_get_parameters_library\
-lset_parameters_callback_library\
-lshape_msgs__rosidl_generator_c\
-lshape_msgs__rosidl_generator_py\
-lshape_msgs__rosidl_typesupport_c\
-lshape_msgs__rosidl_typesupport_cpp\
-lshape_msgs__rosidl_typesupport_fastrtps_c\
-lshape_msgs__rosidl_typesupport_fastrtps_cpp\
-lshape_msgs__rosidl_typesupport_introspection_c\
-lshape_msgs__rosidl_typesupport_introspection_cpp\
-lstatic_transform_broadcaster_node\
-lstatistics_msgs__rosidl_generator_c\
-lstatistics_msgs__rosidl_generator_py\
-lstatistics_msgs__rosidl_typesupport_c\
-lstatistics_msgs__rosidl_typesupport_cpp\
-lstatistics_msgs__rosidl_typesupport_fastrtps_c\
-lstatistics_msgs__rosidl_typesupport_fastrtps_cpp\
-lstatistics_msgs__rosidl_typesupport_introspection_c\
-lstatistics_msgs__rosidl_typesupport_introspection_cpp\
-lstd_msgs__rosidl_generator_c\
-lstd_msgs__rosidl_generator_py\
-lstd_msgs__rosidl_typesupport_c\
-lstd_msgs__rosidl_typesupport_cpp\
-lstd_msgs__rosidl_typesupport_fastrtps_c\
-lstd_msgs__rosidl_typesupport_fastrtps_cpp\
-lstd_msgs__rosidl_typesupport_introspection_c\
-lstd_msgs__rosidl_typesupport_introspection_cpp\
-lstd_srvs__rosidl_generator_c\
-lstd_srvs__rosidl_generator_py\
-lstd_srvs__rosidl_typesupport_c\
-lstd_srvs__rosidl_typesupport_cpp\
-lstd_srvs__rosidl_typesupport_fastrtps_c\
-lstd_srvs__rosidl_typesupport_fastrtps_cpp\
-lstd_srvs__rosidl_typesupport_introspection_c\
-lstd_srvs__rosidl_typesupport_introspection_cpp\
-lstereo_msgs__rosidl_generator_c\
-lstereo_msgs__rosidl_generator_py\
-lstereo_msgs__rosidl_typesupport_c\
-lstereo_msgs__rosidl_typesupport_cpp\
-lstereo_msgs__rosidl_typesupport_fastrtps_c\
-lstereo_msgs__rosidl_typesupport_fastrtps_cpp\
-lstereo_msgs__rosidl_typesupport_introspection_c\
-lstereo_msgs__rosidl_typesupport_introspection_cpp\
-ltalker_component\
-ltalker_library\
-ltalker_loaned_message_library\
-ltalker_native\
-ltalker_serialized_message_library\
-lteleop_twist_joy\
-ltf2\
-ltf2_eigen_kdl\
-ltf2_msgs__rosidl_generator_c\
-ltf2_msgs__rosidl_generator_py\
-ltf2_msgs__rosidl_typesupport_c\
-ltf2_msgs__rosidl_typesupport_cpp\
-ltf2_msgs__rosidl_typesupport_fastrtps_c\
-ltf2_msgs__rosidl_typesupport_fastrtps_cpp\
-ltf2_msgs__rosidl_typesupport_introspection_c\
-ltf2_msgs__rosidl_typesupport_introspection_cpp\
-ltf2_ros\
-ltracetools\
-ltracetools_status\
-ltrajectory_msgs__rosidl_generator_c\
-ltrajectory_msgs__rosidl_generator_py\
-ltrajectory_msgs__rosidl_typesupport_c\
-ltrajectory_msgs__rosidl_typesupport_cpp\
-ltrajectory_msgs__rosidl_typesupport_fastrtps_c\
-ltrajectory_msgs__rosidl_typesupport_fastrtps_cpp\
-ltrajectory_msgs__rosidl_typesupport_introspection_c\
-ltrajectory_msgs__rosidl_typesupport_introspection_cpp\
-lturtlesim__rosidl_generator_c\
-lturtlesim__rosidl_generator_py\
-lturtlesim__rosidl_typesupport_c\
-lturtlesim__rosidl_typesupport_cpp\
-lturtlesim__rosidl_typesupport_fastrtps_c\
-lturtlesim__rosidl_typesupport_fastrtps_cpp\
-lturtlesim__rosidl_typesupport_introspection_c\
-lturtlesim__rosidl_typesupport_introspection_cpp\
-ltype_description_interfaces__rosidl_generator_c\
-ltype_description_interfaces__rosidl_generator_py\
-ltype_description_interfaces__rosidl_typesupport_c\
-ltype_description_interfaces__rosidl_typesupport_cpp\
-ltype_description_interfaces__rosidl_typesupport_fastrtps_c\
-ltype_description_interfaces__rosidl_typesupport_fastrtps_cpp\
-ltype_description_interfaces__rosidl_typesupport_introspection_c\
-ltype_description_interfaces__rosidl_typesupport_introspection_cpp\
-lunique_identifier_msgs__rosidl_generator_c\
-lunique_identifier_msgs__rosidl_generator_py\
-lunique_identifier_msgs__rosidl_typesupport_c\
-lunique_identifier_msgs__rosidl_typesupport_cpp\
-lunique_identifier_msgs__rosidl_typesupport_fastrtps_c\
-lunique_identifier_msgs__rosidl_typesupport_fastrtps_cpp\
-lunique_identifier_msgs__rosidl_typesupport_introspection_c\
-lunique_identifier_msgs__rosidl_typesupport_introspection_cpp\
-lurdf\
-lurdf_xml_parser\
-lvisualization_msgs__rosidl_generator_c\
-lvisualization_msgs__rosidl_generator_py\
-lvisualization_msgs__rosidl_typesupport_c\
-lvisualization_msgs__rosidl_typesupport_cpp\
-lvisualization_msgs__rosidl_typesupport_fastrtps_c\
-lvisualization_msgs__rosidl_typesupport_fastrtps_cpp\
-lvisualization_msgs__rosidl_typesupport_introspection_c\
-lvisualization_msgs__rosidl_typesupport_introspection_cpp\
-lwait_set_subscriber_library\

