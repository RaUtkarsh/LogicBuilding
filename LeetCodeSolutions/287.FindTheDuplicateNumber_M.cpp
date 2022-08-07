/*
Simply sort the array and iterate through the elements until you find the duplicate element
return the element
*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};
