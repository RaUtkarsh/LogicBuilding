//My initial solution

#include<iostream>
using namespace std;

int main(){
	
	int arr[10] = {12, 5, 4, 9, 15, 13, 20, 24, 10, 11};
	
  //array input
	cout << "Enter the element to be searched: " << endl;
	int n;
	cin >> n;
  //start linearly checking for n
	int check = 0;
	
	for(int i=0;i<10;i++){
		if(arr[i]==n){
			check++;
		}
	}
  
  //Print answer
	if(check==1){
		cout << "Present" << endl;
	}else{
		cout << "Not Present" << endl;
	}
	
	
	return 0;
}


//Solution Using Functions

#include<iostream>
using namespace std;

//function to iterate and linearly search key
bool search(int arr[], int size, int key){
	for(int i=0;i<size;i++){
		if(arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main(){
	
	int arr[10] = {12, 5, 4, 9, 15, 13, 20, 24, 10, 11};
	
  //input key
	cout << "Enter the value to be searched: " << endl;
	int key;
	cin >> key;
	
  //function call
	bool found = search(arr, 10, key);
	
  //print output
	if(found){
		cout << "Present" << endl;
	}else{
		cout << "Not Present" << endl;
	}
	
	
	return 0;
}
