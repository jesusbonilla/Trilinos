#ifndef TEST_OPENMPTARGET_HPP
#define TEST_OPENMPTARGET_HPP

#include <gtest/gtest.h>
#include <Kokkos_Core.hpp>
#include <KokkosKernels_config.h>

#if defined(KOKKOSKERNELS_TEST_ETI_ONLY) && !defined(KOKKOSKERNELS_ETI_ONLY)
#define KOKKOSKERNELS_ETI_ONLY
#endif

class openmptarget : public ::testing::Test {
protected:
  static void SetUpTestCase()
  {
  }

  static void TearDownTestCase()
  {
  }
};

#define TestCategory openmptarget
#define TestExecSpace Kokkos::Experimental::OpenMPTarget

#endif // TEST_OPENMPTARGET_HPP
