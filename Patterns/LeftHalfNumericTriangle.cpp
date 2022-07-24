#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			cout << " ";
		}
		for(int j=1;j<=n-i+1;j++){
			cout << i;
		}
		cout << endl;
	}
	*/
	
	for(int i=1;i<=n;i++){

		for(int space=1;space<=n-i;space++){
			cout << " ";
		}
		
		for(int j=1;j<=i;j++){
			cout << i;
		}
		
		cout << endl;
	}
	return 0;
}
