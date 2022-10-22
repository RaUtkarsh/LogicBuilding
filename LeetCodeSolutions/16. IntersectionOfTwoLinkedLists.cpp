class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA, *pB = headB;
        int lenA = 0, lenB = 0;

        while(pA){
            pA = pA -> next;
            lenA++;
        }
        while(pB){
            pB = pB -> next;
            lenB++;
        }

        pA = headA, pB = headB;
        if(lenA > lenB){
            for(int i = 0; i < lenA - lenB; ++i)
                pA = pA -> next;
        }
        else{ 
            for(int i = 0; i < lenB - lenA; ++i) 
                pB = pB -> next;
        }

        while(pA){
            if(pA == pB) return pA;
            pA = pA -> next;
            pB = pB -> next; 
        }
        return NULL;
    }
};
