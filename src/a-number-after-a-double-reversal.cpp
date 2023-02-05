#include "a-number-after-a-double-reversal.hpp"

bool Solution::isSameAfterReversals(int num) {
    // int nums = num;

    // int i = 0;
    // for(; nums > 0; ++i) {
    //     digits[i] = nums % 10;
    //     nums /= 10;
    if(num == 0) return true;
    if(num%10 == 0) return false;
    return true;
}