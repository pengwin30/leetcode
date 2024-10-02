class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                // This if-statement looks like redundant check, but it actually improves efficiency because avoid trying to access extra out of bounds memory addresses
                if (i != s.length()-1) {
                    if (s[i+1] == 'V') {
                        sum+=4;
                        i++;
                    }
                    else if (s[i+1] == 'X') {
                        sum+=9;
                        i++;
                    }
                    else sum+=1;
                }
                else sum+=1;
            }
            else if (s[i] == 'V') sum+=5;
            else if (s[i] == 'X') {
                if (i != s.length()-1) {
                    if (s[i+1] == 'L') {
                        sum+=40;
                        i++;
                    }
                    else if (s[i+1] == 'C') {
                        sum+=90;
                        i++;
                    }
                    else sum+=10;
                }
                else sum+=10;
            }
            else if (s[i] == 'L') sum+=50;
            else if (s[i] == 'C') {
                if (i != s.length()-1) {
                    if (s[i+1] == 'D') {
                        sum+=400;
                        i++;
                    }
                    else if (s[i+1] == 'M') {
                        sum+=900;
                        i++;
                    }
                    else sum+=100;
                }
                else sum+=100;
            }
            else if (s[i] == 'D') sum+=500;
            else if (s[i] == 'M') sum+=1000;
        }
        return sum;
    }
};
