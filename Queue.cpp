#include<iostream>
using namespace std;

class Queue{
	private:
		int size;
		int front;
		int rear;
		int* Q;
		
	public:
		Queue(int size);
		~Queue();
		
		bool isFull();
		bool isEmpty();
		void enqueue(int x);
		int dequeue();
		void display();
};


Queue :: Queue(int size){
	this -> size = size;
	front = -1;
	rear = -1;
	Q = new int[size];
}

Queue::~Queue(){
	delete [] Q;
}

bool Queue::isEmpty(){
	if(front == rear){
		return true;
	}
	return false;
}

bool Queue::isFull(){
	if(rear == size - 1){
		return true;
	}
	return false;
}

void Queue::enqueue(int x){
	if(isFull()){
		cout << "Queue Overflow" << endl;
	}
	
	else{
		rear++;
		Q[rear] = x;
	}
}

int Queue::dequeue(){
	int x = -1;
	if(isEmpty()){
		cout << "Queue Underflow" << endl;
	}
	
	else{
		front++;
		x = Q[front];
	}
	return x;
}

void Queue::display(){
	for(int i=front+1; i<=rear;i++){
		cout << Q[i] << flush;
		if(i < rear){
			cout << " <- " << flush;
		}
	}
	cout << endl;
}


int main(){
	
	int A[] = {1, 5, 4, 9, 8, 6};
	
	Queue q(sizeof(A)/sizeof(A[0]));
	
	for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
		q.enqueue(A[i]);
	}
	
	q.display();
	
	q.enqueue(10);
	
	for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
		q.dequeue();
	}
	
	q.dequeue();
	
	return 0;
	
	
}