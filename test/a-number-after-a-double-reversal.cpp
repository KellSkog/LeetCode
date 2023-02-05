#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "a-number-after-a-double-reversal.hpp"

using namespace std::literals;
TEST_CASE("sortSentence") {
    Solution solution;
  SUBCASE("zero") {
    CHECK(solution.isSameAfterReversals(0));
  }
  SUBCASE("one") {
    CHECK(solution.isSameAfterReversals(526));
  }
  SUBCASE("many") {
    CHECK_FALSE(solution.isSameAfterReversals(1800));
  }
}