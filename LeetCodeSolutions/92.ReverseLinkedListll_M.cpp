class Solution {
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!= NULL){
            ListNode* forward = curr->next;
            
            curr->next = prev;
            
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    ListNode* endNode(ListNode* head){
        ListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        return temp;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l = left, r = right;
        if(head == NULL || head->next == NULL || left == right){
            return head;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        if(left == 1 && right == count){
            return reverse(head);
        }
        
        ListNode* prev = NULL;
        ListNode* leftptr = head;
        while(l != 1){
            prev = leftptr;
            leftptr = leftptr->next;
            l--;
        }
        
        
        ListNode* next = head->next;
        ListNode* rightptr = head;
        while(r != 1){
            rightptr = next;
            next = next->next;
            r--;
        }
        
        if(left == 1){
            rightptr->next = NULL;
            ListNode* start = reverse(leftptr);
            ListNode* end = endNode(start);
            end->next = next;
            return start;
        }
        
        if(right == count){
            ListNode* start = reverse(leftptr);
            prev->next = start;
            return head;
        }
        
        
        rightptr->next = NULL;
        ListNode* start = reverse(leftptr);
        ListNode* end = endNode(start);
        prev->next = start;
        end->next = next;
        return head;
    }
};
