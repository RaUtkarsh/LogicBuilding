#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void swapAlternate(int arr[], int size){
	
	for(int i=0;i<size;i+=2){
		if(i+1 < size){
			swap(arr[i], arr[i+1]);
		}
	}
}

int main(){
	
	int a[10] = {1, 5, 9, 7, 3, 6, 4, 10, 15, 12};
	int b[9] = {11, 13, 16, 19, 17, 20, 12, 15, 18};
	
	swapAlternate(a, 10);
	printArray(a, 10);
	
	swapAlternate(b, 9);
	printArray(b, 9);
	
	return 0;
}
