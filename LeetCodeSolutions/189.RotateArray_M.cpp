//Logic
//When you mod any number with n the value returned is always in range 0 to (n-1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        //create another array so elements do not get overwritten
        vector<int> temp(nums.size());
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        nums = temp;
    }
};
