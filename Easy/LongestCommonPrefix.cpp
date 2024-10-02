// Problem: 
// Difficulty: Easy
// Date: 2nd October 2024

// Results:
// Runtime: 3 ms, beats 69.69% of submissions
// Memory Usage: 11.08 MB, beats 91.89% of submissions

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prefix = "";
        bool end = false;
        for (int i = 0; i < strs.front().length(); i++) {
            for (int j = 0; j < strs.size(); j++) {
            
                if (strs.front()[i] != strs.at(j)[i]) {
                    end=true;
                    break;
                }
                if (j == strs.size()-1) {
                    common_prefix += strs.at(j)[i];
                }
            }
            if (end) break;            
        }
        return common_prefix;
    }
};
