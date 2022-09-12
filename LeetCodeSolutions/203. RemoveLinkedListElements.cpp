/*
Algorithm:
Step 1: take base condition as if head == NULL return NULL
Step 2: add recursive condition as head -> next = removeElements(head -> next, val)
Step 3: return the head -> val as val if head -> next is not NULL else return head
*/


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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL) return NULL;
        
        head -> next = removeElements(head -> next, val);
        
        return head -> val == val ? head -> next : head;
    }
};
