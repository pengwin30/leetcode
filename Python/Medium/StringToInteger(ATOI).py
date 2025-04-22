# Problem: https://leetcode.com/problems/string-to-integer-atoi/description/
# Difficulty: Medium
# Date: 22th April 2025

# Results: My Solution
# Runtime: 3 ms, beats 39.37% of submissions
# Memory Usage: 18.07 MB, beats 8.54% of submissions

class Solution:
    def myAtoi(self, s: str) -> int:
        neg_flag = False
        s = s.strip()
        if not s:
            return 0
        if s[0] == '+':
            s = s[1:]
        elif s[0] == '-':
            s = s[1:]
            neg_flag = True
        result = 0
        digits = []
        
        # for i in [int(j) for j in s if j.isdigit()]:
        for i in s:
            if i.isdigit():
                digits.append(int(i))
            else:
                break
        
        counter = len(digits)-1
        for i in digits:
            result += int(i) * (10**counter)
            counter -= 1
        
        if (neg_flag):
            result *= -1
        
        if result < (-2**31):
            return -2**31
        elif result > (2**31)-1:
            return (2**31)-1
        else:
            return result





# Results: Ideal Solution
# Runtime: 2 ms, beats 45.83% of submissions
# Memory Usage: 17.7 MB, beats 77.47% of submissions


class Solution:
    def myAtoi(self, s: str) -> int:
        def findSign(s):
            i = 0
            while i < len(s):
                if s[i] in ('-', '+'):
                    return (s[i], i + 1)
                elif s[i].isdigit():
                    return ('+', i)
                elif s[i] == ' ':
                    pass
                else:
                    return ('invalid', -1)
                
                i += 1

            return ('empty', i)


        str_length = len(s)
        if str_length == 0:
            return 0

        is_positive = True
        sign, start_index = findSign(s)
        if sign == 'empty' or sign == 'invalid':
            return 0
        elif sign == '-':
            is_positive = False

        total = 0
        i = start_index
        while i < str_length:
            current_digit = s[i]
            
            if current_digit.isdigit():
                total = (10 * total) + int(current_digit)
                if is_positive and total > 2147483647:
                    return 2147483647
                if not is_positive and total > 2147483648:
                    return -2147483648
            else:
                if total > 0:
                    break
                else:
                    return 0
            
            i += 1
        
        if not is_positive:
            total *= -1
        
        return total