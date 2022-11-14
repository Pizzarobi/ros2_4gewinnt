# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:vier_gewinnt__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:vier_gewinnt__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:vier_gewinnt__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:vier_gewinnt__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:vier_gewinnt__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:vier_gewinnt__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:vier_gewinnt__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:vier_gewinnt__rosidl_typesupport_cpp;__rosidl_generator_py:vier_gewinnt__rosidl_generator_py")

# populate vier_gewinnt_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "vier_gewinnt::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'vier_gewinnt' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND vier_gewinnt_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
