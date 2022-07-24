#include<iostream>
using namespace std;

bool isEvenOdd(int n){
	if(n&1){
		return 0;
	}
	return 1;
}

int main(){
	int a;
	cin >> a;
	
	if(isEvenOdd(a)){
		cout << "Number is EVEN" << endl;
	}
	else{
		cout << "Number is ODD" << endl;
	}
}