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



//2nd Approach
//Using recursion

#include <iostream>

using namespace std;

int getSum(int *arr, int n){
    
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    
    int remainingSum = getSum(arr+1, n-1);
    int sum = arr[0] + remainingSum;
    
    return sum;
}

int main()
{
   
    int arr[5] = {3, 5, 5, 1, 6};
    
    int sum = getSum(arr, 5);
    
    cout << "Sum: " << sum << endl;

    return 0;
}
