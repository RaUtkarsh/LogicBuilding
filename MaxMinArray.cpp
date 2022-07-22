#include<bits/stdc++.h>
using namespace std;

struct Pair{
	int min;
	int max;
};

Pair getMinMax(int arr[], int n){
	struct Pair MinMax;
	int i;
	
	if(n==1){
		MinMax.max = arr[0];
		MinMax.min = arr[0];
	}else{
		MinMax.max = arr[1];
		MinMax.min = arr[0];
	}
	
	for(int i=2;i<n;i++){
		if(arr[i]>MinMax.max){
			MinMax.max = arr[i];
		}
		else if(arr[i] < MinMax.min){
			MinMax.min = arr[i];
		}
	}
	return MinMax;
}

int main(){
	int arr[] = {11, 50, 10, 20, 15};
	int arr_size = 5;
	
	struct Pair MinMax = getMinMax(arr, arr_size);
	
	cout<<"Maximum: "<<MinMax.max<<endl;
	cout<<"Minimum: "<<MinMax.min<<endl;
	
	return 0;
}