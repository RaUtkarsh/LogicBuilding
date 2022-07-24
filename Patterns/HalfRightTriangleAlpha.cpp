#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num = 0;
	
	
	char ch = 'A';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << (char)(ch + num) << " ";
		}
		num = num + 1;
		cout << endl;
	}
	
	/*
	A
	B B
	C C C
	int i=1;
	while(i<=n){
		int j = 1;
		char ch = 'A' + i - 1;
		while(j <= i){
			cout << ch << " ";
			j = j + 1;
		}
		i= i + 1;
		cout << endl;
	}
	*/
	return 0;
}
