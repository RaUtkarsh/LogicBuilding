class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
      //1st non zero must be on ith index
        int i = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
              
              //after swapping increase the ith value to get next non zero in next index
                i++;
            }
        }
    }
};
