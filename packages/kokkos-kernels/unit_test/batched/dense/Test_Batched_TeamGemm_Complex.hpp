
#if defined(KOKKOSKERNELS_INST_COMPLEX_DOUBLE)

/// dcomplex, dcomplex

TEST_F( TestCategory, batched_scalar_team_gemm_nt_nt_dcomplex_dcomplex ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::NoTranspose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_t_nt_dcomplex_dcomplex ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::Transpose,Trans::NoTranspose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_nt_t_dcomplex_dcomplex ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::Transpose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_t_t_dcomplex_dcomplex ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::Transpose,Trans::Transpose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
}
// TEST_F( TestCategory, batched_scalar_team_gemm_ct_nt_dcomplex_dcomplex ) {
//   typedef ::Test::TeamGemm::ParamTag<Trans::ConjTranspose,Trans::NoTranspose> param_tag_type;
//   typedef Algo::Gemm::Blocked algo_tag_type;
//   test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
// }
// TEST_F( TestCategory, batched_scalar_team_gemm_nt_ct_dcomplex_dcomplex ) {
//   typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::ConjTranspose> param_tag_type;
//   typedef Algo::Gemm::Blocked algo_tag_type;
//   test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,Kokkos::complex<double>,param_tag_type,algo_tag_type>();
// }

/// dcomplex, double

TEST_F( TestCategory, batched_scalar_team_gemm_nt_nt_dcomplex_double ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::NoTranspose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_t_nt_dcomplex_double ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::Transpose,Trans::NoTranspose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_nt_t_dcomplex_double ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::Transpose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
}
TEST_F( TestCategory, batched_scalar_team_gemm_t_t_dcomplex_double ) {
  typedef ::Test::TeamGemm::ParamTag<Trans::Transpose,Trans::Transpose> param_tag_type;
  typedef Algo::Gemm::Blocked algo_tag_type;
  test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
}
// TEST_F( TestCategory, batched_scalar_team_gemm_ct_nt_dcomplex_double ) {
//   typedef ::Test::TeamGemm::ParamTag<Trans::ConjTranspose,Trans::NoTranspose> param_tag_type;
//   typedef Algo::Gemm::Blocked algo_tag_type;
//   test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
// }
// TEST_F( TestCategory, batched_scalar_team_gemm_nt_ct_dcomplex_double ) {
//   typedef ::Test::TeamGemm::ParamTag<Trans::NoTranspose,Trans::ConjTranspose> param_tag_type;
//   typedef Algo::Gemm::Blocked algo_tag_type;
//   test_batched_teamgemm<TestExecSpace,Kokkos::complex<double>,double,param_tag_type,algo_tag_type>();
// }

#endif
