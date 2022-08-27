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
public:
    bool checkTree(TreeNode* root) {
        int total = 0;
        total += root -> left -> val;
        total += root -> right -> val;
        return root -> val == total; 
    }
};


//2nd approach

class solution{
  public:
  bool checkTree(TreeNode* root){
    return root -> val == root -> left -> val + root -> right -> val;
  }
};
