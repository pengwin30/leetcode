// Problem: 
// Difficulty: Easy
// Date: 3rd October 2024

// Results:
// Runtime: 4 ms, beats 68.80% of submissions
// Memory Usage: 19.94 MB, beats 10.88% of submissions


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedList = nullptr;
        ListNode* point1 = list1;
        ListNode* point2 = list2;
        ListNode* HEAD = nullptr;
        while (true) {
            if (point1 == nullptr) {
                if (point2 != nullptr) {
                    if (mergedList != nullptr) {
                        mergedList->next = point2;
                    }
                    else {
                        mergedList = point2;
                        HEAD = mergedList;
                    }
                }
                break;
            }
            else if (point2 == nullptr) {
                if (point1 != nullptr) {
                    if (mergedList != nullptr) {
                        mergedList->next = point1;
                    }
                    else {
                        mergedList = point1;
                        HEAD = mergedList;
                    }
                }
                break;
            }

            if (point2->val < point1->val) {

                ListNode* temp = new ListNode;
                temp->val = point2->val;
                temp->next = nullptr;

                if (mergedList != nullptr) {
                    mergedList->next = temp;
                    mergedList = mergedList->next;
                }
                else {
                    mergedList = temp;
                    HEAD = mergedList;
                }

                point2 = point2->next;
            }
            else if (point1->val < point2->val) {
                ListNode* temp = new ListNode;
                temp->val = point1->val;
                temp->next = nullptr;

                if (mergedList != nullptr) {
                    mergedList->next = temp;
                    mergedList = mergedList->next;
                }
                else {
                    mergedList = temp;
                    HEAD = mergedList;
                }
                point1 = point1->next;
            }
            else {
                if (mergedList != nullptr) {
                    mergedList->next = point1;
                    mergedList = mergedList->next;
                }
                else {
                    mergedList = point1;
                    HEAD = mergedList;
                }
                
                point1 = point1->next;
                mergedList->next = point2;
                mergedList = mergedList->next;
                point2 = point2->next;
            }
        }

        return HEAD;
        
    }
};
