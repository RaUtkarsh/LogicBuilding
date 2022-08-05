#include<iostream>
using namespace std;

void printSum(int arr[][3], int row, int col){
	
	cout << "Printing sum row wise" << endl;
	
	for(int row = 0; row < 3; row++){
		int sum = 0;
		for(int col = 0; col < 4; col++){
			sum += arr[row][col];
		}
		cout << sum << " ";
	}
	cout << endl;
}

int largestRowSum(int arr[][3], int row, int col){
	int maxi = INT_MIN;
	int rowIndex = -1;
	
	for(int row =0;row<3;row++){
		int sum = 0;
		for(int col = 0; col < 3; col++){
			sum += arr[row][col];
		}
		
		if(sum > maxi){
			maxi = sum;
			rowIndex = row;
		}
	}
	
	cout << "Maximum Sum: " << maxi << endl;
	return rowIndex;
}

int main(){
	
	//create 2d array
	int arr[3][3];
	
	//take input -> row wise
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	
	/*
	take input -> column wise
	
	for(int j=0;j<4;j++){
		for(int i=0;i<3;i++{
			cin >> arr[i][j];
		}
	}
	*/
	cout << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	printSum(arr, 3, 3);
	int ansIndex = largestRowSum(arr, 3, 3);
	cout << "MaxSum Index: " << ansIndex << endl;
	
	return 0;
}