#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	
	/*
	A B C
	A B C
	A B C
	
	for(int i=1;i<=n;i++){
		char ch = 'A';
		for(int j=1;j<=n;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	*/
	
	/*
	A B C
	D E F
	G H I
	
	char ch = 'A';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	*/
	/*
  A B C
  B C D
  C D E
  */
	for(int i=1;i<=n;i++){
		char ch = 'A' + i - 1;
		for(int j=1;j<=n;j++){
			cout << ch << " ";
			ch = ch + 1;
		}
		cout << endl;
	}
	return 0;
}
