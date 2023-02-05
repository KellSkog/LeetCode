
#include <algorithm>

#include "intersection-of-multiple-arrays.hpp"

/* Only the numbers of the shortest vector needs to be checked:
 *  return the list of integers that are present in each array of nums sorted in ascending order.
 * 1 <= nums.length <= 1000, nums contains minimum one vector
 * 1 <= sum(nums[i].length) <= 1000, at least one number in a vector
 * 1 <= nums[i][j] <= 1000
*/

// Find the shortest vector, can it be sorted according to length? Yes!
// Add all numbers in this vector found in every other vector to a new vector
vector<int> Solution::intersection(vector<vector<int>>& nums) {
    vector<int> result;
    sort(nums.begin(), nums.end(), [](const vector<int> &a, vector<int> &b)
                                  {
                                      return a.size() < b.size();
                                  });
    for(auto x : nums[0]) {
        bool found = true;
        for(int i = 1; i < nums.size(); ++i) {
            if(find(nums[i].begin(), nums[i].end(), x) == std::end(nums[i])) {
                // Not found in vector i, confinue with next number!
                found = false;
                break;
            }
        }
        if(found) result.push_back(x);
    }
    sort(result.begin(), result.end(), [](const int &a, const int &b)
                                  {
                                      return a < b;
                                  });
    return result;
}