#include<iostream>
using namespace std;

class Node{
	
	public:
		int data;
		Node* next;
		
		
		Node(int data){
			this -> data = data;
			this -> next = NULL;
		}
		~Node(){
			int value = this -> data;
			
			if(this -> next != NULL){
				delete next;
				this -> next = NULL;
			}
			cout << "Memory is free for " << data << endl;
		}
};

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	
	temp -> next = head;
	head = temp;
}

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	
	tail -> next = temp;
	tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
	
	if(position == 1){
		insertAtHead(head, d);
		return;
	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position-1){
		temp = temp -> next;
		cnt++;
	}
	
	if(tail -> next == NULL){
		insertAtTail(tail, d);
		return;
	}
	
	
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position){
	
	if(position == 1){
		Node* temp = head;
		head = head -> next;
		
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
		
		if(curr -> next == NULL){
		prev -> next = curr -> next;
		tail = prev;
		}
		else{
			prev -> next = curr -> next;
		}
		
		
		curr -> next = NULL;
		delete curr;
	}
	
}

void print(Node* &head){
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}


int main(){
	
	Node* node1 = new Node(10);
	//cout << node1 -> data << endl;
	//cout << node1 -> next << endl;
	
	Node* head = node1;
	Node* tail = node1;
	print(head);
	
	insertAtTail(tail, 12);
	print(head);
	
	insertAtTail(tail, 18);
	print(head);
	
	insertAtPosition(tail, head, 3, 22);
	print(head);
	
	deleteNode(head, tail, 3);
	print(head);
}