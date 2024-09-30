// Problem: 
// Difficulty: Easy
// Date: 30th September 2024

// Results:
// Runtime: 8 ms, beats 60.98% of submissions
// Memory Usage: 10.4 MB, beats 19.30% of submissions

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string strNum = to_string(x);
        int digitCount = strNum.length();
        long long newX = 0;
        long long multiplier = 1;
        for (int i = 0; i <= digitCount - 1; i++) {
            if (strNum[i] == '-') {
                // newX *= -1;
                return false;
            }
            else {
                newX += (strNum[i] - '0') * multiplier;
                multiplier *= 10;
            }
        }
        if (newX == x) return true;
        else return false;
    }
};