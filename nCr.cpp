#include<iostream>
using namespace std;

int factorial(int n){
	int fact = 1;
	
	for(int i=1;i<=n;i++){
		fact = fact * i;
	}
	return fact;
}

int nCr(int n, int r){
	int num = factorial(n);
	int num1 = factorial(r) * factorial(n-r);
	
	return num/num1;
}

int main(){
	
	int n, r;
	cin >> n >> r;
	int ans = nCr(n, r);
	
	cout << "nCr: " << ans << endl;
}