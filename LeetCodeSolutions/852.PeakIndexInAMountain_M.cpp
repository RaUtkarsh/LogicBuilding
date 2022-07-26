//1st Approach

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1;
        
        while(start < end){
            int mid = start + (end - start)/2;
            
            if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        return start;
    }
};


//2nd Approach

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int i=0;
       while(arr[i] < arr[i+1]){
         i++;
       }
      return i;
    }
};
