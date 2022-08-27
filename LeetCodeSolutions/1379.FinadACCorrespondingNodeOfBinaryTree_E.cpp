/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    
private:
    void approach(TreeNode* root, TreeNode* target, TreeNode* &res){
        if(root == nullptr) return;
        
        if(root -> val == target -> val) {res = root; return;}
        
        approach(root -> right, target, res);
        approach(root -> left, target, res);
        
        
    }  
    
    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode* res = new TreeNode(-1);
        approach(cloned, target, res);
        return res;
    }
};
