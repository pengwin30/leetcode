// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 0 ms, beats 100% of submissions
// Memory Usage: 7.84 MB, beats 65.28% of submissions

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                for (int j = 0; j < needle.length(); j++) {
                    if (haystack[i+j] != needle[j]) break;
                    if (j == needle.length() - 1) return i;
                }
            }
        }
        return -1;
    }
};
