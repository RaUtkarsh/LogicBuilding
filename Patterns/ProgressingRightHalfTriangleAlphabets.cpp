#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	/*
	A
	B C 
	C D E
	for(int i=1;i<=n;i++){
		char ch = 'A' + i - 1;
		for(int j=1;j<=i;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	*/
	
	/*
	n = 3
	C
	B C
	A B C
	for(int i=1;i<=n;i++){
		char ch = 'A' + n - i;
		for(int j=1;j<=i;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	*/
	
	/*
	n = 3
	A
	B C
	D E F
	*/
	char ch = 'A';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	return 0;
}
