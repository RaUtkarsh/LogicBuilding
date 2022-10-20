class Solution {
public:
    void inorder(TreeNode* root, vector<int> &n){
        if(root == NULL) return;

        inorder(root -> left, n);
        n.push_back(root -> val);
        inorder(root -> right, n);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> n;
        inorder(root, n);
        return n;
    }
};
