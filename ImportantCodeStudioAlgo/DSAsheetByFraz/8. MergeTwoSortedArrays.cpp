#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2,
                                 int m, int n) {
	//create two pointers and initialize them with size of array given
    int i = m-1, j = n-1;
  // calculate the total size of the array to be created
    int k = m + n - 1;
  //iterate until the arr2 is empty
    while(j >= 0){
        if(arr1[i] < arr2[j]) arr1[k--] = arr2[j--];
        else arr1[k--] = arr1[i--];
    }
    return arr1;
}
