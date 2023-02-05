#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "minimum-subsequence-in-non-increasing-order.hpp"

TEST_CASE("minimum-subsequence-in-non-increasing-order") {
    Solution sol;
  SUBCASE("zero") {
    auto in = vector<int>{};
    auto res = sol.minSubsequence(in);
    CHECK_EQ(res.size(), 0);
  }
  SUBCASE("one") {
    auto in = vector<int>{1};
    auto res = sol.minSubsequence(in);
    CHECK_EQ(res[0], 1);
  }
  SUBCASE("many") {
    auto in = vector<int>{1, 2};
    auto res = sol.minSubsequence(in);
    CHECK_EQ(res[0], 2);
    auto in2 = vector<int>{1, 2, 3};
    res = sol.minSubsequence(in2);
    CHECK_EQ(res[0], 3);
    CHECK_EQ(res.size(), 2);
  }
  SUBCASE("Example1") {
    auto in = vector<int>{4,3,10,9,8};
    auto res = sol.minSubsequence(in);
    CHECK_EQ(res[0], 10);
    CHECK_EQ(res[1], 9);
    CHECK_EQ(res.size(), 2);
  }
  SUBCASE("Example2") {
    auto in = vector<int>{4,4,7,6,7};
    auto res = sol.minSubsequence(in);
    CHECK_EQ(res[0], 7);
    CHECK_EQ(res[1], 7);
    CHECK_EQ(res[2], 6);
    CHECK_EQ(res.size(), 3);
  }
}
