# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_moma_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED moma_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(moma_FOUND FALSE)
  elseif(NOT moma_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(moma_FOUND FALSE)
  endif()
  return()
endif()
set(_moma_CONFIG_INCLUDED TRUE)

# output package information
if(NOT moma_FIND_QUIETLY)
  message(STATUS "Found moma: 0.0.0 (${moma_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'moma' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${moma_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(moma_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${moma_DIR}/${_extra}")
endforeach()
