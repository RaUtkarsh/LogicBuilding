//using XOR

#include <bits/stdc++.h> 
int uniqueElement(vector<int> arr, int n)
{
	
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp ^= arr[i];
    }
    return temp;
}


//Two Pointer Approach
#include <bits/stdc++.h> 
int uniqueElement(vector<int> arr, int n)
{
    if(arr[0] != arr[1]) return arr[0];
    
    if(arr[n-2] != arr[n-1]) return arr[n-1];
    
    int i = 2;
    int j = n-3;
    while(i <= j){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1]) return arr[i];
        
        if(arr[j] != arr[j-1] && arr[j] != arr[j+1]) return arr[j];
        
        i+=2;
        j-=2;
    }
}
