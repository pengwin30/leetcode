// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 4 ms, beats 47.21% of submissions
// Memory Usage: 8.22 MB, beats 6.29% of submissions

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // Reverse the string
        reverse(s.begin(), s.end());

        stringstream str(s);
        string word;

        str >> word;

        return word.length();
    }
};
