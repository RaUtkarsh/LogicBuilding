#include<iostream>
using namespace std;

int power(){
	int a , b;
	cin >> a >> b;
	int ans = 1;
	
	for(int i=1;i<=b;i++){
		ans = ans * a;
	}
	return ans;
}

int main(){
	int n;
	cout << "Number of times program is to be run: ";
	cin >> n;
	
	for(int i=1;i<=n;i++){
		int answer = power();
		cout << "Answer: " << answer << endl;
	}
	return 0;
}