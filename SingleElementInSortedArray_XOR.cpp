#include <bits/stdc++.h> 
int uniqueElement(vector<int> arr, int n)
{
	
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp ^= arr[i];
    }
    return temp;
}
