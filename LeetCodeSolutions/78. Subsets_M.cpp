class Solution {
private:
    void solve(vector<int> nums, vector<int> out, int index, vector<vector<int>>& ans){
        
        if(index >= nums.size()){
            ans.push_back(out);
            return;
        }
        
        solve(nums, out, index + 1, ans);
        
        int element = nums[index];
        out.push_back(element);
        solve(nums, out, index + 1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        int index = 0;
        solve(nums, out, index, ans);
        return ans;
    }
};
