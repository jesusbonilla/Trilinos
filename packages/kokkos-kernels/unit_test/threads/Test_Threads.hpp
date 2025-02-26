#ifndef TEST_THREADS_HPP
#define TEST_THREADS_HPP

#include <gtest/gtest.h>
#include <Kokkos_Core.hpp>
#include <KokkosKernels_config.h>

#if defined(KOKKOSKERNELS_TEST_ETI_ONLY) && !defined(KOKKOSKERNELS_ETI_ONLY)
#define KOKKOSKERNELS_ETI_ONLY
#endif

class threads : public ::testing::Test {
protected:
  static void SetUpTestCase()
  {
  }

  static void TearDownTestCase()
  {
  }
};

#define TestCategory threads
#define TestExecSpace Kokkos::Threads

#endif // TEST_THREADS_HPP
