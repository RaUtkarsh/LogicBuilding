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
