// Problem: 
// Difficulty: Easy
// Date: 3rd October 2024

// Results:
// Runtime: 49 ms, beats 5.97% of submissions
// Memory Usage: 21.28 MB, beats 85.32% of submissions

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums.at(i) == nums.at(i-1)) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
        
    }
};
