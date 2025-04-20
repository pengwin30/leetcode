// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 0 ms, beats 100% of submissions
// Memory Usage: 10.55 MB, beats 48.68% of submissions

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size()-1; i >= 0; i--) {
            if (digits.at(i) < 9) {
                digits.at(i) += 1;
                break;
            }
            else digits.at(i) = 0;

            if (i == 0) digits.insert(digits.begin(), 1);

        }
        return digits;
    }
};
