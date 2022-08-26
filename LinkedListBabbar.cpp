#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* prev;
	Node* next;
	
	Node(int d){
		this -> data = d;
		this -> prev = NULL;
		this -> next = NULL;
	} 
	
	~Node(){
		int val = this -> data;
		if(next != NULL){
			delete next;
			next = NULL;
		}
		cout << "Memory free for " << val << endl;
	}
};

//print the linked list
void print(Node* head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

//get length of the linked list
int getLength(Node* head){
	
	int len = 0;
	Node* temp = head;
	
	while(temp != NULL){
		len++;
		temp = temp -> next;
	}
	
	return len;
}

void insertAtHead(Node* &head, Node* &tail, int d){
	
	if(head == NULL){
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}
	else{
		Node* temp = new Node(d);
		
		temp -> next = head;
		head -> prev = temp;
		head = temp;
	}
	
	
}

void insertAtTail(Node* &tail, Node* &head, int d){
	
	if(tail == NULL){
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
	}
	else{
		Node* temp = new Node(d);
	
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;
	}
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
	
	//if At Head
	if(position == 1){
		insertAtHead(head, tail, d);
		return;
	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position){
		temp = temp -> next;
		cnt++;
	}
	
	//if At Tail
	if(temp -> next == NULL){
		insertAtTail(tail, head, d);
		return;
	}
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp;
	
}

void deleteNode(int position, Node* &head){
	
	if(position == 1){
		Node* temp = head;
		temp -> next -> prev = NULL;
		head = temp -> next;
		temp -> next = NULL;
		delete temp;
	}
	else{
		Node* curr = head;
		Node* prev = NULL;
		
		int cnt = 1;
		while(cnt < position){
			prev = curr;
			curr = curr -> next;
			cnt++;
		}
		
		curr -> prev = NULL;
		prev -> next = curr -> next;
		curr -> next = NULL;
		
		delete curr;
	}
	
}


int main(){
	
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	
	//print(head);
	//cout << getLength(head) << endl;
	
	insertAtHead(head, tail, 12);
	print(head);
	
	insertAtHead(head, tail, 15);
	print(head);
	
	insertAtTail(tail, head, 20);
	print(head);
	
	insertAtPosition(tail, head, 2, 16);
	print(head);
	
	insertAtPosition(tail, head, 5, 25);
	print(head);
	
	deleteNode(1, head);
	print(head);
	return 0;
}