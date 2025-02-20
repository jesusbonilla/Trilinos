

#
# A) Define the package
#

TRIBITS_PACKAGE(Adelus)

#
# B) Set up package-specific options
#

#If performance tests are enabled
IF(${PACKAGE_NAME}_ENABLE_Teuchos AND (${PROJECT_NAME}_TEST_CATEGORIES STREQUAL PERFORMANCE))
  MESSAGE("     Adelus_ENABLE Teuchos is ON AND TEST_CATEGORIES is PERFORMANCE")
  SET(${PACKAGE_NAME}_ENABLE_TIMING ON CACHE BOOL "Enable timing." FORCE)
  SET(${PACKAGE_NAME}_ENABLE_PRINTSTATUS ON CACHE BOOL "Enable status print." FORCE)
  SET(ADELUS_HAVE_TIME_MONITOR ON)
ENDIF()

#If no options are specified set ZCPLX as the default
IF(NOT ${PACKAGE_NAME}_ENABLE_ZCPLX AND
   NOT ${PACKAGE_NAME}_ENABLE_SCPLX AND
   NOT ${PACKAGE_NAME}_ENABLE_SREAL AND
   NOT ${PACKAGE_NAME}_ENABLE_DREAL)

  SET_CACHE_ON_OFF_EMPTY(${PACKAGE_NAME}_ENABLE_ZCPLX ON "Enable double precision complex functionality.")
ENDIF()

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_ZCPLX
  ZCPLX
  "Enable double precision complex functionality."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_SCPLX
  SCPLX
  "Enable single precision complex functionality."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_DREAL
  DREAL
  "Set reals to double precision."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_SREAL
  SREAL
  "Set reals to single precision."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_TIMING
  GET_TIMING
  "Enable timing."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_HOSTPINNEDMEM
  ADELUS_HOST_PINNED_MEM_MPI
  "Use Cuda/HIP Host Pinned memory for MPI."
  ON )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_USEDEEPCOPY
  USE_DEEPCOPY
  "Use Kokkos::deep_copy for BLAS copy."
  OFF )

TRIBITS_ADD_OPTION_AND_DEFINE(${PACKAGE_NAME}_ENABLE_PRINTSTATUS
  PRINT_STATUS
  "Enable status print."
  OFF )

#
# C) Add the libraries, tests, and examples
#

ADD_SUBDIRECTORY(src)

TRIBITS_ADD_TEST_DIRECTORIES(test)

#TRIBITS_ADD_EXAMPLE_DIRECTORIES(example)

#
# Exclude files for source package.
#

TRIBITS_EXCLUDE_AUTOTOOLS_FILES()

TRIBITS_EXCLUDE_FILES(
  doc/matrix_.*.gif
  src/Make..*
  src/clean_code.h
  src/init..*
  src/malloc.c
  src/my_srand48.c
  )

#
# D) Do standard postprocessing
#

TRIBITS_PACKAGE_POSTPROCESS()
