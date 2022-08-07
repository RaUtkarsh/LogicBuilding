/**
 -> Similar to question 141
 -> if the linked list is cyclic break
 -> check if the p1 or next value is null
 -> if not p2 = head
 -> while p1 and p2 are not same keep checking next of both 
 -> when they are return p2
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        
        while(p1 != NULL && p1 -> next != NULL){
            p1 = p1 -> next -> next;
            p2 = p2 -> next;
            
            if(p1 == p2){
                break;
            }
        }
        
        if(p1 == NULL || p1 -> next == NULL){
            return NULL;
        }
        
        p2 = head;
        while(p2 != p1){
            p2 = p2 -> next;
            p1 = p1 -> next;
        }
        return p2;
    }
};
