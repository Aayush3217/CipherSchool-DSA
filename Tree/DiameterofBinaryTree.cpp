// Link : https://leetcode.com/problems/diameter-of-binary-tree/

class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void helper(TreeNode* root, int& maxDia){
        if(root==NULL) return;
        int dia = level(root->left) + level(root->right);
        maxDia = max(maxDia, dia);
        helper(root->left, maxDia);
        helper(root->right, maxDia); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root, maxDia);
        return maxDia;
    }
};