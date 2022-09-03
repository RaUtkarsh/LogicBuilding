/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *removeNodes(Node *head, int k) {
    // base class
    if(head == NULL) return head;
    
  //recursive call
    Node* temp = removeNodes(head -> next, k);
    head -> next = temp;
    
    if((head -> data) == k) return head -> next;
    else return head;
    
}
