class Solution {
public:
    TreeNode* buildBST(vector<int> &nums, int s, int e){
        if(s > e) return NULL;
        int mid = s + (e - s) / 2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp -> left = buildBST(nums, s, mid - 1);
        temp -> right = buildBST(nums, mid + 1, e);

        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size()-1);
    }
};
