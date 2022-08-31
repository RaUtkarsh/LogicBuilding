#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    
    for(int i=0; i<n; i++){
        if (arr[i] == 0)
            cnt0++;
        if(arr[i] == 1)
            cnt1++;
        if(arr[i] == 2)
            cnt2++;
    }
    
    for(int i=0; i<n; i++){
        if(cnt0 > 0){
            arr[i] = 0;
            cnt0--;
        }
        else if(cnt1 > 0){
            arr[i] = 1;
            cnt1--;
        }
        else{
            arr[i] = 2;
            cnt2--;
        }
    }
}
