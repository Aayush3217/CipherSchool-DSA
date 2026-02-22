// Link : https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

class Solution {
public:
    TreeNode* helper(vector<int>& inorder, int inlo, int inhi, vector<int>& postorder, int postlo, int posthi){
        if(inlo>inhi || postlo>posthi) return nullptr;
        TreeNode* root = new TreeNode(postorder[posthi]);
        int i = inlo;
        while(inorder[i] != postorder[posthi]) i++;
        int leftsize = i - inlo;
        root->left = helper(inorder, inlo, i-1, postorder, postlo, postlo+leftsize-1);
        root->right = helper(inorder, i+1, inhi, postorder, postlo+leftsize, posthi-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return helper(inorder, 0, n-1, postorder, 0, n-1);
    }
};