/*
PseudoCode:

curSum = 0
maxSum = INT_MIN

loop index = 0 to n-1

curSum = curSum + arr[index]

if(curSum > maxSum) maxSum = curSum
if(curSum < 0) curSum = 0


return maxSum
*/


#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{   
    long long cursum=0;
    long maxsum=0;
    for(int i=0; i<n; i++){
        cursum=cursum+arr[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
           cursum=0;
        }
    }
    return maxsum;
}
