#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	/*Inverted right Triangle
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	*/
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}