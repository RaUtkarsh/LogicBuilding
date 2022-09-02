#include<bits/stdc++.h>
vector<pair<int, int>>twoSum(vector<int>& arr, int target, int n)
{
	  
  //create another vectorto store the final answer
    vector<pair<int, int>> ans;
  //sort the given array
    sort(arr.begin(), arr.end());
    
  //use 2 pointer approach and check which elements add upto target given
    int s = 0, e = n-1;
    while(s < e){
        if(arr[s] + arr[e] == target){
            pair<int, int> sum(arr[s], arr[e]);
            ans.push_back(sum);
            s++;
            e--;
        }
        else if(arr[s] + arr[e] < target){
            s++;
        }
        else{
            e--;
        }
    }
  //if ans remains empty after the loop is over then store (-1, -1) as ans
    if(ans.size() == 0){
        pair<int, int> sum(-1, -1);
        ans.push_back(sum);
    }
    return ans;
}
