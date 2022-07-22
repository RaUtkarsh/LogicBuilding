#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	/*1
	  2 2
	  3 3 3
	  4 4 4 4
	  
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	*/
	
	/*1
	  1 2
	  1 2 3
	  1 2 3 4
	  
	for(int i=1;i<=n;i++){
		int count=1;
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
			count=count+1;
		}
		cout<<endl;
	}
	*/
	
	/*1
	  2 2
	  3 3 3
	  4 4 4 4
	  
	int count = 0;
	for(int i=1;i<=n;i++){
		count = count+1;
		for(int j=1;j<=i;j++){
			cout<<count<<" ";
		}
		cout<<endl;
	}
	*/
	
	/*1
	  2 3
	  3 4 5
	  4 5 6 7
	  
	for(int i=1;i<=n;i++){
		int count = i;
		for(int j=1;j<=i;j++){
			cout << count << " ";
			count = count + 1;
		}
		cout << endl;
	}
	*/
	
	/*
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i+j-1<<" ";
		}
		cout << endl;
	}
	*/
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout << i-j+1 << " ";
		}
		cout << endl;
	}
}