/*
Algorithm:
Step 1: create new listNode 'dummyhead' and initialize the value with 0
Step 2: point the current node to dummyhead and take a variable carry 
Step 3: run a loop while 1st list or 2nd list is not null or carry != 0
Step 4: if l1 -> val then x = l1 else x = 0 
Step 5: similarly, take y value and create another variable sum adding carry, x, y
Step 6: update carry if sum is two digit number by carry = sum / 10
Step 7: point curr -> next to a new list node with value sum % 10
Step 8: update current to curr -> next
Step 9: if l1 -> next !=  NULL then l1 = l1 else nullptr
Step 10: similarly, update l2 value and return dummyhead -> next as output

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0){
            
            int x = l1 ? l1 -> val : 0;
            int y = l2 ? l2 -> val : 0;
            
            int sum = carry + x + y;
            
            carry = sum /10;
            
            curr -> next = new ListNode(sum % 10);
            curr = curr -> next;
            
            l1 = l1 ? l1 -> next : nullptr;
            l2 = l2 ? l2 -> next : nullptr;
        }
        return dummyHead -> next;
    }
};
