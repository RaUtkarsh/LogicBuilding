#include<iostream>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sortZerOne(int arr[], int n){
	
	int left = 0, right = n-1;
	
	while(left < right){
		
		while(arr[left] == 0){
			left++;
		}
		
		while(arr[right] == 1){
			right--;
		}
		
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
	
}

int main(){
	
	int arr[8] = {1, 1, 1, 0, 0, 0, 0, 1};
	
	sortZerOne(arr, 8);
	printArray(arr, 8);
	
	return 0;
}