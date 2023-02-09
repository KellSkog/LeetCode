#include "reverse-odd-levels-of-binary-tree.hpp"

TreeNode* Solution::reverseOddLevels(TreeNode* root) {
    // Root has one element at level 0
    // Each deeper level has twice as many nodes
    // Assume the tree is implemented as a flat array of ptr to nodes
    TreeNode* leftmost;
    int level = 1;
    int tmp;
    int elements = 1 << level;
    if(root->left){ // Only layer one level below
        tmp = root->left->val;
        root->left->val = root->right->val;
        root->right->val = tmp;
        leftmost = root->left;
        ++level;
    }
    while(leftmost->left) {
        if(!(level & 1)) { // Skip evel levels
            leftmost = leftmost->left;
            ++level;
            continue;
        }
        // We are at the leftmost element at an odd level
        elements = 1 << level;
        int firstIndex = elements - 1;
        int lastIndex = firstIndex + elements -1;
        int stop = elements << 1;
        for(int i = 0; i < stop; ++i) {
            tmp = leftmost[firstIndex + i].val;
            leftmost[firstIndex + i].val = leftmost[lastIndex - i].val;
            leftmost[lastIndex - i].val = tmp;
        }
        leftmost = leftmost->left;
    }

    return root;
}