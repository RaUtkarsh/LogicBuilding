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
typedef pair<ListNode*,int> p;
struct cmp{
    bool operator()(p &a,p &b){
        return a.first->val>b.first->val;
    }  
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k = lists.size();
        priority_queue<p, vector<p>, cmp> q;
        vector<int> dp(k, -1);
        
        for(int i=0; i<k; i++){
            if(lists[i]){
                q.push({lists[i], i});
                lists[i] = lists[i] -> next;
            }
        }
        
        bool check = true;
        ListNode* node = new ListNode(0), *root = nullptr;
        
        while(!q.empty()){
            node -> next = q.top().first;
            node = node -> next;
            
            if(check){
                root = node;
                check = false;
            }
            
            int ind = q.top().second;
            
            q.pop();
            
            if(lists[ind]){
                q.push({lists[ind], ind});
                lists[ind] = lists[ind] -> next;
            }
        }
        return root;
        
    }
};
