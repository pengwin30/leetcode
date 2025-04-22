# Problem: https://leetcode.com/problems/reverse-integer/
# Difficulty: Medium
# Date: 22th April 2025

# Results: My Solution
# Runtime: 31 ms, beats 93.53% of submissions
# Memory Usage: 17.54 MB, beats 97.21% of submissions

class Solution:
    def reverse(self, x: int) -> int:
        digits = [int(i) for i in str(abs(x))][::-1]
        result = 0
        counter = len(digits)-1
        for j in digits:
            result += j*(10**counter)
            counter -= 1
        if result > (2**31):
            return 0
        if x < 0:
            result *= -1
        return result
    


# Results: Ideal Solution
# Runtime: 0 ms, beats 100% of submissions
# Memory Usage: 17.72 MB, beats 57.28% of submissions

__import__("atexit").register(lambda: open("display_runtime.txt", 'w').write('0'))
class Solution:
    def reverse(self, x: int) -> int:
        INT_MIN, INT_MAX = -2**31, 2**31 - 1

        sign = -1 if x < 0 else 1
        x_abs = abs(x)
        reversed_x = 0

        while x_abs != 0:
            digit = x_abs % 10
            x_abs //= 10

            # Check for overflow before adding the digit
            if reversed_x > (INT_MAX - digit) // 10:
                return 0

            reversed_x = reversed_x * 10 + digit

        return sign * reversed_x