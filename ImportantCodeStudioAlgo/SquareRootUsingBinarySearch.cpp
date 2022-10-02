#include <bits/stdc++.h> 
int sqrtN(long long int N)
{
    long long int s = 0, ans = -1;
    long long int e = N;
    
    while(s <= e){
        unsigned long long int mid = s + (e - s)/2;
        if(mid*mid == N){
            return mid;
        }
        else if(mid*mid < N){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
