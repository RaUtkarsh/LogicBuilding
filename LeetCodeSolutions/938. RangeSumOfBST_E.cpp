/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
private:
    void sumCalculate(TreeNode* root, int low, int high, int &total){
        if(root == NULL) return ;
        
        if(root -> val >= low && root -> val <= high){
            total += root -> val; 
        }
        
        sumCalculate(root -> left, low, high, total);
        sumCalculate(root -> right, low, high, total);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int total = 0;
        sumCalculate(root, low, high, total);
        return total;
    }
};
