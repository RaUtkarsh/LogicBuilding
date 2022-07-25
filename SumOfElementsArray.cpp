#include<iostream>
using namespace std;

int main(){
	
	int arr[10];
	cout << "Enter 10 elements of array: " << endl;
	
	for(int i=0;i<10;i++){
		cin >> arr[i];
	}
	
	int sum = 0;
	
	for(int i=0;i<10;i++){
		sum = sum + arr[i];
	}
	cout << "Total Sum: " << sum << endl;
	
	return 0;
	
}
