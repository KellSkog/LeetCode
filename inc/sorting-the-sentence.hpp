// https://leetcode.com/problems/sorting-the-sentence/

#include<string>

class Solution {
    struct Word{
        std::size_t start;
        std::size_t count;
    };
public:
    std::string sortSentence(std::string s);
};