#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <array>
#include "doctest.h"
#include "reverse-odd-levels-of-binary-tree.hpp"

//using namespace std::literals;
TEST_CASE("sortSentence") {
    Solution solution;
    TreeNode root{0,0,0};
    TreeNode n1{1,0,0}, n2{2,0,0};
    TreeNode n3{3,0,0}, n4{4,0,0}, n5{5,0,0}, n6{6,0,0};
    TreeNode n7{7,0,0}, n8{8,0,0}, n9{9,0,0}, n10{10,0,0}, n11{11,0,0}, n12{12,0,0}, n13{13,0,0}, n14{14,0,0};
    root.left = &n1; root.right = &n2;
    n1.left = &n3; n1.right = &n4;
    n2.left = &n5; n2.right = &n6;
    n3.left = &n7; n3.right = &n8;
    n4.left = &n9; n4.right = &n10;
    n5.left = &n11; n5.right = &n12;
    n6.left = &n13; n6.right = &n14;
  SUBCASE("zero") {
    TreeNode *reversed = solution.reverseOddLevels(&root);
    CHECK_EQ(reversed->left->val, 2);
    CHECK_EQ(reversed->right->val, 1);
  }
  SUBCASE("one") {
    TreeNode *reversed = solution.reverseOddLevels(&root);
    CHECK_EQ(reversed->left->left->left->val, 14);
    CHECK_EQ(reversed->right->right->right->val, 7);
  }
}