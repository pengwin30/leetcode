// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 3 ms, beats 30.79% of submissions
// Memory Usage: 10.78 MB, beats 37.05% of submissions

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == val) {
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        return nums.size();
    }
};
