// Problem: 
// Difficulty: Easy
// Date: 4th October 2024

// Results:
// Runtime: 15 ms, beats 7.08% of submissions
// Memory Usage: 8.31 MB, beats 48.49% of submissions

class Solution {
public:
    string addBinary(string a, string b) {
        // Binaries add from the right side (i.e. last element)
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string sum = (a.length() > b.length()) ? a : (a.length() == b.length()) ? a : b;
        string addition = (a.length() > b.length()) ? b : (a.length() == b.length()) ? b : a;
        
        for (int i = 0; i < addition.length(); i++) {
            if (addition[i] == '0') continue;
            else if (sum[i] == '0' && addition[i] == '1') sum[i] = '1';
            else if (sum[i] == '1' && addition[i] == '1') {
                for (int j = i; j < sum.length(); j++) {
                    if (sum[j] == '0') {
                        sum[j] = '1';
                        break;
                    }
                    else if (sum[j] == '1') sum[j] = '0';
                    if (j == sum.length() - 1) {
                        sum += '1';
                        break;
                    }
                }
            }
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};
