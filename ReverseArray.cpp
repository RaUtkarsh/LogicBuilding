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