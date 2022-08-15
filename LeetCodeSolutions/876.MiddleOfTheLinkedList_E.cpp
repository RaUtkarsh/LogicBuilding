/*
 *     Definition for singly-linked list.
 *     struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
*/

// 1st approach 
// output as array
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        vector<ListNode*> ans = {head};
        
        while(ans.back() -> next != NULL){
            ans.push_back(ans.back() -> next);
        }
        return ans[ans.size() / 2];
        
    }
};


//2nd approach
//two pointers


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* s = head;
        ListNode* f = head;
        
        while(f != NULL && f -> next != NULL){
            
            s = s -> next;
            f = f -> next -> next;
        }
        return s;
    }
};
