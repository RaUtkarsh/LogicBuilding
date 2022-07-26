#include<iostream>
using namespace std;


 int partition(int arr[], int start, int end){
	int pivot = arr[start];     //choose a pivot element
	//start dividing the array wrt pivot
   
	int count = 0;
	for(int i=start+1; i<=end; i++){
		if(arr[i] <= pivot){
			count++;
		}
	}
	
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);
	
	int i = start, j = end;
	
	while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}



//recursive function to sort the array after partition
void quicksort(int arr[], int start, int end){
	if(start >= end){
		return;
	}
	
	int p = partition(arr, start, end);
	
	quicksort(arr, start, p-1);
	quicksort(arr, p+1, end);
}



//function to print array
int printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}




int main(){
	
	int arr[9] = {0, 1, 2, 2, 1, 0, 1, 2, 0};
	quicksort(arr, 0, 8);
	printArray(arr, 9);
	
	return 0;
}
