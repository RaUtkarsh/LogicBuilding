#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};

*****************************************************************/
Node* merge(Node* down, Node* right){
    if(down == NULL) return right;
    if(right == NULL) return down;
    
    Node* res;
    if(down -> data < right -> data){
        res = down;
        res -> child = merge(down -> child, right);
    }
    else{
        res = right;
        res -> child = merge(down, right -> child);
    }
    
    res -> next = NULL;
    return res;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    if(head == NULL || head -> next == NULL) return head;
    return merge(head, flattenLinkedList(head -> next));
}
