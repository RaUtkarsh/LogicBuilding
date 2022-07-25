#include<bits/stdc++.h>		//Non-header standard file includes all standard library
using namespace std;

void reverseArray(int arr[], int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void printArray(int arr[], int number){
	for(int i=0;i<number;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {1, 2, 3, 5, 9};
	int n = sizeof(arr) / sizeof(arr[0]);		// a compile-time operator that determines the size, in bytes, of a variable or data type
	reverseArray(arr, 0, n-1);
	printArray(arr, n);
}


//Another easier way


#include<iostream>
using namespace std;

void reverse(int arr[], int n){
	
	int start = 0, end = n-1;
	
	while(start <= end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[], int n){
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	
	int arr[10] = {15, 12, 10, 16, 0, 23, 14, 5, 18, 39};
	
	reverse(arr, 10);
	
	printArray(arr, 10);
	
	
	return 0;
}
