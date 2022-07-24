#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int count = n*n;
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			cout << count << " ";
			count = count - 1;
		}
		cout << endl;
	}
	return 0;
}
