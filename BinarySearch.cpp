#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int start = 0, end = n-1;
	int mid = start + (end - start)/2;
	
	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		
		if(key > arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
	
}


int main(){
	
	int arr[8] = {1, 5, 9, 13, 19, 25, 29, 55};
	
	cout << "Index is " << binarySearch(arr, 8, 25) << endl;
	return 0;
}