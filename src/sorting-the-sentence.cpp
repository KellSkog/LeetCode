#include <array>

#include "sorting-the-sentence.hpp"

#define TO_INT(x) (x - '0') // turns an ascii digit into an "int" value

using namespace std;
/* Stores indices to words in sentence s, in words - ordered according to
 * its position digit. First word at pos 0.*/
string Solution::sortSentence(string s) {
    // The number of words in s is between 1 and 9.
    array<Word, 10> words;
    std::size_t wordCnt = 0;
    auto spacePos = s.find(' ');
    auto startPos = 0;

    // handle all words followed by a space
    while(spacePos != string::npos) {
        std::size_t pos = TO_INT(s[spacePos - 1]) - 1;
        words[pos].start = startPos;
        words[pos].count = spacePos - startPos - 1;
        ++wordCnt;
        startPos = spacePos + 1;
        spacePos = s.find(' ', startPos);
    } // The last space is found, one word, possibly the only, might remain!

    if(s.length() > startPos) {
        std::size_t pos = TO_INT(s[s.length() - 1]) - 1;
        words[pos].start = startPos;
        words[pos].count = s.length() - startPos - 1;
        ++wordCnt;
    }
    std::string ordered = "";
    for(int i = 0; i < ((int)wordCnt - 1); ++i) {
        ordered.append(s.substr(words[i].start, words[i].count));
        ordered.append(" ");
    }
    if(wordCnt > 0) {
        ordered.append(s.substr(words[wordCnt - 1].start, words[wordCnt - 1].count));
    }

    return ordered;
}