INCLUDE_DIRECTORIES(REQUIRED_DURING_INSTALLATION_TESTING
                    ${CMAKE_CURRENT_SOURCE_DIR})

TRIBITS_ADD_EXECUTABLE_AND_TEST(
  DIRK
  SOURCES Tempus_DIRKTest.cpp ${TEMPUS_UNIT_TEST_MAIN}
  TESTONLYLIBS tempus_test_models
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_EXECUTABLE(
  DIRK_Combined_FSA
  SOURCES Tempus_DIRK_Combined_FSA.cpp Tempus_DIRK_FSA.hpp
  TESTONLYLIBS tempus_test_models
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_Backward_Euler"
  ARGS "--method=\"RK Backward Euler\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_DIRK_1_Stage_Theta"
  ARGS "--method=\"DIRK 1 Stage Theta Method\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_RK_Implicit_1_Stage_1st_order_Radau_IA"
  ARGS "--method=\"RK Implicit 1 Stage 1st order Radau IA\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_RK_Implicit_2_Stage_2nd_order_Lobatto_IIIB"
  ARGS "--method=\"RK Implicit 2 Stage 2nd order Lobatto IIIB\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_RK_Implicit_Midpoint"
  ARGS "--method=\"RK Implicit Midpoint\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_2_Stage_2nd_Order"
  ARGS "--method=\"SDIRK 2 Stage 2nd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_2_Stage_3rd_Order"
  ARGS "--method=\"SDIRK 2 Stage 3rd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_EDIRK_2_Stage_3rd_Order"
  ARGS "--method=\"EDIRK 2 Stage 3rd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_EDIRK_2_Stage_Theta_Method"
  ARGS "--method=\"EDIRK 2 Stage Theta Method\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_3_Stage_4th_Order"
  ARGS "--method=\"SDIRK 3 Stage 4th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_5_Stage_4th_Order"
  ARGS "--method=\"SDIRK 5 Stage 4th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_5_Stage_5th_Order"
  ARGS "--method=\"SDIRK 5 Stage 5th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_SDIRK_2-1_Pair"
  ARGS "--method=\"SDIRK 2(1) Pair\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_RK_Trapezoidal_Rule"
  ARGS "--method=\"RK Trapezoidal Rule\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Combined_FSA
  NAME "DIRK_Combined_FSA_RK_Crank-Nicolson"
  ARGS "--method=\"RK Crank-Nicolson\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_EXECUTABLE(
  DIRK_Staggered_FSA
  SOURCES Tempus_DIRK_Staggered_FSA.cpp Tempus_DIRK_FSA.hpp
  TESTONLYLIBS tempus_test_models
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_Backward_Euler"
  ARGS "--method=\"RK Backward Euler\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_DIRK_1_Stage_Theta"
  ARGS "--method=\"DIRK 1 Stage Theta Method\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_RK_Implicit_1_Stage_1st_order_Radau_IA"
  ARGS "--method=\"RK Implicit 1 Stage 1st order Radau IA\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_RK_Implicit_2_Stage_2nd_order_Lobatto_IIIB"
  ARGS "--method=\"RK Implicit 2 Stage 2nd order Lobatto IIIB\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_RK_Implicit_Midpoint"
  ARGS "--method=\"RK Implicit Midpoint\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_2_Stage_2nd_Order"
  ARGS "--method=\"SDIRK 2 Stage 2nd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_2_Stage_3rd_Order"
  ARGS "--method=\"SDIRK 2 Stage 3rd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_EDIRK_2_Stage_3rd_Order"
  ARGS "--method=\"EDIRK 2 Stage 3rd order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_EDIRK_2_Stage_Theta_Method"
  ARGS "--method=\"EDIRK 2 Stage Theta Method\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_3_Stage_4th_Order"
  ARGS "--method=\"SDIRK 3 Stage 4th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_5_Stage_4th_Order"
  ARGS "--method=\"SDIRK 5 Stage 4th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_5_Stage_5th_Order"
  ARGS "--method=\"SDIRK 5 Stage 5th order\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_SDIRK_2-1_Pair"
  ARGS "--method=\"SDIRK 2(1) Pair\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_RK_Trapezoidal_Rule"
  ARGS "--method=\"RK Trapezoidal Rule\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_TEST(
  DIRK_Staggered_FSA
  NAME "DIRK_Staggered_FSA_RK_Crank-Nicolson"
  ARGS "--method=\"RK Crank-Nicolson\""
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_EXECUTABLE_AND_TEST(
  DIRK_PseudoTransient_SA
  SOURCES Tempus_DIRK_PseudoTransient_SA.cpp ${TEMPUS_UNIT_TEST_MAIN}
  TESTONLYLIBS tempus_test_models
  NUM_MPI_PROCS 1
  )

TRIBITS_ADD_EXECUTABLE_AND_TEST(
  DIRK_ASA
  SOURCES Tempus_DIRK_ASA.cpp ${TEMPUS_UNIT_TEST_MAIN}
  TESTONLYLIBS tempus_test_models
  NUM_MPI_PROCS 1
  )

TRIBITS_COPY_FILES_TO_BINARY_DIR(Test_DIRK_CopyFiles
  DEST_FILES Tempus_DIRK_SinCos.xml Tempus_DIRK_VanDerPol.xml Tempus_DIRK_SteadyQuadratic.xml
  EXEDEPS DIRK
  )
