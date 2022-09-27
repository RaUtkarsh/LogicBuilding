class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l, r;
        for(l = nums.size()-2; l >= 0; l--){
            if(nums[l] < nums[l+1]) break;
        }
        if(l < 0) reverse(nums.begin(), nums.end());
        
        else{
            for(r = nums.size()-1; r > l; r--){
                if(nums[r] > nums[l]) break;
            }
            swap(nums[r], nums[l]);
            reverse(nums.begin()+l+1,nums.end());
        }
    }
};
