SET(HEADERS "")
SET(SOURCES "")

INCLUDE_DIRECTORIES(${${PACKAGE_NAME}_SOURCE_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

FILE(GLOB HEADERS *.hpp)
FILE(GLOB SOURCES *.cpp)

TRIBITS_ADD_LIBRARY(
  interface_geometry_interface_lib
  HEADERS ${HEADERS}
  SOURCES ${SOURCES})

INSTALL(FILES ${HEADERS} DESTINATION
    ${CMAKE_INSTALL_PREFIX}/${${PROJECT_NAME}_INSTALL_INCLUDE_DIR}/interface_geometry_interface_lib)
   
