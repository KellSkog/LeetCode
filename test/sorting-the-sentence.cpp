#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "sorting-the-sentence.hpp"

using namespace std::literals;
TEST_CASE("sortSentence") {
    Solution solution;
  SUBCASE("zero") {
    std::string ordered = solution.sortSentence(""s);
    CHECK_EQ(ordered.length(), 0);
  }
  SUBCASE("one") {
    std::string ordered = solution.sortSentence("Word1"s);
    CHECK_EQ(ordered.length(), 4);
    CHECK_EQ("Word"s, ordered);
  }
  SUBCASE("many") {
    std::string ordered = solution.sortSentence("is2 sentence4 This1 a3"s);
    CHECK_EQ(ordered.length(), 18);
    CHECK_EQ("This is a sentence"s, ordered);

    ordered = solution.sortSentence("Myself2 Me1 I4 and3"s);
    CHECK_EQ(ordered.length(), 15);
    CHECK_EQ("Me Myself and I"s, ordered);
  }
}