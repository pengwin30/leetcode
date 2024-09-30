// Problem: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Date: 30th September 2024

// Results:
// Runtime: 428 ms, beats 5.02% of submissions
// Memory Usage: 12.83 MB, beats 90.11% of submissions

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int x = 0; x < nums.size()-1; x++) {
            for (int y = x+1; y < nums.size(); y++) {
                if ( (nums.at(x)+nums.at(y)) == target ) {
                    result.push_back(x);
                    result.push_back(y);
                    break;
                }
            }
            if (!result.empty()) break;
        }
        return result;
    }
};