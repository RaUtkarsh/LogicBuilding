class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int x = 0;
        for(int i=0; i<nums.size(); i++){
            x += nums[i];
            ans.push_back(x);
        }
        
        
        return ans;
    }
};
