/* LEETCODE Question:1721

You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the 
values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).


Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100*/
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
     int findLength(ListNode* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int len = findLength(head);
        
        //position begPtr at K distance from beg
        ListNode *begPtr = head;
        for(int i = 0; i < k - 1; i++) 
            begPtr = begPtr->next;
        
        //position endPtr at K distance from end
        ListNode *endPtr = head;
        for(int i = 0; i < len - k; i++) 
            endPtr = endPtr->next;
        
        //swap
        swap(begPtr->val, endPtr->val);
        
        return head;
    }
};