// Link : https://leetcode.com/problems/balance-a-binary-search-tree/

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    TreeNode* build(vector<int> arr, int lo, int hi){
        if(lo > hi) return NULL;
        int mid = lo + (hi-lo)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = build(arr, lo, mid-1);
        root->right = build(arr, mid+1, hi);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        return build(arr, 0, arr.size()-1);
    }
};