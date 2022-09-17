/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node* sortList(Node *head)
{
    // Write your code here.
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0)
            cnt0++;
        else if(temp -> data == 1)
            cnt1++;
        else if(temp -> data == 2)
            cnt2++;
        temp = temp -> next;
    }
    temp = head;
    while(temp != NULL){
        if (cnt0 != 0){
            temp -> data = 0;
            cnt0--;
        }
        else if(cnt1 != 0){
            temp -> data = 1;
            cnt1--;
        }
        else if(cnt2 != 0){
            temp ->data = 2;
            cnt2--;
        }
        temp = temp -> next;
    }
    return head;
}


//Another approach
//sort without swapping the data


void insertAtTail(Node* &tail, Node* curr){
    
    tail -> next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* curr = head;
    while(curr != NULL){
        int value = curr -> data;
        if(value == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1){
            insertAtTail(oneTail, curr);
        }
        else if(value == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr -> next;
    }
    
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }
    
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    
    head = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    return head;
}
