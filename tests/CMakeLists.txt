#
#
#

add_executable(
  t1
  t1.cc
)
target_link_libraries(
  t1
  core
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(t1)