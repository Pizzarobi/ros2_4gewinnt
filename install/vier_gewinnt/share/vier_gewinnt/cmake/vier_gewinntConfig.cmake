# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vier_gewinnt_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vier_gewinnt_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vier_gewinnt_FOUND FALSE)
  elseif(NOT vier_gewinnt_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vier_gewinnt_FOUND FALSE)
  endif()
  return()
endif()
set(_vier_gewinnt_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vier_gewinnt_FIND_QUIETLY)
  message(STATUS "Found vier_gewinnt: 0.0.0 (${vier_gewinnt_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vier_gewinnt' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vier_gewinnt_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vier_gewinnt_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${vier_gewinnt_DIR}/${_extra}")
endforeach()
