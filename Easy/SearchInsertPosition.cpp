// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 3 ms, beats 70.98% of submissions
// Memory Usage: 12.21 MB, beats 84.03% of submissions

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;  // Avoid potential overflow

            if (nums[mid] == target) {
                return mid;  // Target found
            } else if (nums[mid] < target) {
                low = mid + 1;  // Search in the right half
            } else {
                high = mid - 1;  // Search in the left half
            }
        }
        return low;
    }
};
