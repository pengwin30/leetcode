# Problem: https://leetcode.com/problems/two-sum/
# Difficulty: Easy
# Date: 19th April 2025

# Results: My Solution
# Runtime: 1755 ms, beats 24.27% of submissions
# Memory Usage: 18.34 MB, beats 87.59% of submissions

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for index, i in enumerate(nums):
            print(f"Index:{index}, i:{i}")
            if (index+1 <= (len(nums)-1)):
                for index2, j in enumerate(nums[index+1:], index+1):
                    if (i + j) == target:
                        return index, index2

if __name__ == "__main__":
    sol = Solution()
    print(sol.twoSum([2, 7, 11, 15], 9))



# Results: Ideal Solution
# Runtime: 0 ms, beats 100% of submissions
# Memory Usage: 18.89 MB, beats 51.79% of submissions
from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      hashmap = {}
      for i, num in enumerate(nums):
        diff = target - num
        if diff in hashmap:
            return [hashmap[diff], i]
        hashmap[num] = i


if __name__ == "__main__":
    sol = Solution()
    print(sol.twoSum([2, 7, 11, 15], 9))