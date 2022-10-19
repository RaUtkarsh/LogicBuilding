class Solution {
public:
    bool isMirror(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL) return true;

        if(root1 && root2 && root1 -> val == root2 -> val)
            return isMirror(root1 -> left, root2 -> right) && isMirror(root1 -> right, root2 -> left);
        
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};



// Another Approach

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right){
        if(!left && !right) return true;
        if(!left && right) return false;
        if(left && !right) return false;

        if(left -> val != right -> val) return false;

        return isMirror(left -> left, right -> right) && isMirror(left -> right, right -> left);
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root -> left, root -> right);
    }
};
