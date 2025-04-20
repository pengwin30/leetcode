# Problem: https://leetcode.com/problems/add-two-numbers/
# Difficulty: Medium
# Date: 20th April 2025

# Results: My Solution
# Runtime: 14 ms, beats 5.94% of submissions
# Memory Usage: 18.06 MB, beats 15.11% of submissions


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


from typing import Optional

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = 0
        num2 = 0
        counter = 0
        while (l1 is not None):
            num1 += l1.val * (10**counter)
            l1 = l1.next
            counter += 1
        print(num1)
        counter = 0
        while (l2 is not None):
            num2 += l2.val * (10**counter)
            l2 = l2.next
            counter += 1
        print(num2)
        
        num3 = num1 + num2
        print(num3)

        digits = [int(i) for i in str(num3)][::-1]
        head = None
        ptr = None
        newNode = None
        for i in digits:
            print(i)
            if (head is None):
                head = ListNode(i)
                ptr = head
            else:
                ptr.next = ListNode(i)
                ptr = ptr.next
        return head
    

# Results: Ideal Solution
# Runtime:  4 ms, beats 55.73% of submissions
# Memory Usage: 17.77 MB, beats 85.35% of submissions

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        def get_digits(head):
            # function to convert a linked list into an integer
            nxt = head
            out = ""
            while nxt:
                out+=str(nxt.val)
                nxt = nxt.next
            return out

        num1 = get_digits(l1)
        num2 = get_digits(l2)
        res = int(str(num1)[::-1])+int(str(num2)[::-1])
        print(res)
        res = str(res)[::-1]

        prev = None
        head = None
        for j in res:
            nxt = ListNode(int(j))
            if prev:
                prev.next = nxt
            else: #on the first pass save the head
                head = nxt
            prev = nxt

        return head