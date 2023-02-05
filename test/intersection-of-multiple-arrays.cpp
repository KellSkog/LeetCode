#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "intersection-of-multiple-arrays.hpp"
/* Passed!
 * https://leetcode.com/problems/intersection-of-multiple-arrays/submissions/892096799/
*/
TEST_CASE("intersection-of-multiple-arrays") {
    Solution sol;
  SUBCASE("zero") {
    vector<vector<int>> nums{{1}};
    CHECK_EQ(sol.intersection(nums).size(), 1);
    CHECK_EQ(sol.intersection(nums)[0], 1);
  }
  SUBCASE("one") {
    vector<vector<int>> nums{{1,2,3}};
    CHECK_EQ(sol.intersection(nums).size(), 3);
  }
  SUBCASE("many") {
    vector<vector<int>> nums{{1,2,3}, {1,2,3,4}};
    CHECK_EQ(sol.intersection(nums).size(), 3);
    vector<vector<int>> nums2{{1,2,3,4}, {1,2,5,6}, {1,2}};
    CHECK_EQ(sol.intersection(nums2).size(), 2);
    CHECK_EQ(sol.intersection(nums2)[0], 1);
    CHECK_EQ(sol.intersection(nums2)[1], 2);
  }
  SUBCASE("Submission1"){
    vector<vector<int>> nums{{7,34,45,10,12,27,13},{27,21,45,10,12,13}}; // Expect [10,12,13,27,45]
    CHECK_EQ(sol.intersection(nums)[0], 10);
    CHECK_EQ(sol.intersection(nums)[1], 12);
    CHECK_EQ(sol.intersection(nums)[2], 13);
    CHECK_EQ(sol.intersection(nums)[3], 27);
    CHECK_EQ(sol.intersection(nums)[4], 45);
  }
}