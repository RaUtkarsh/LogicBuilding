#include<iostream>
using namespace std;

int countBits(int n){
	int count = 0;
	while(n!=0){
		if(n & 1){
		count = count+1;
		}
		n = n >> 1;
	}
	
	return count;
}

int main(){
	
	int a, b;
	cin >> a >> b;
	int total = countBits(a) + countBits(b);
	cout << "Answer: " << total << endl;
	
}
