// Link : https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        int sum = 0;
        if(root->val >= low && root->val <= high) sum += root->val;
        sum += rangeSumBST(root->left, low, high);
        sum += rangeSumBST(root->right, low, high);
        return sum;
    }
};



class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        if(root->val < low) return rangeSumBST(root->right, low, high);
        else if(root->val > high) return rangeSumBST(root->left, low, high);
        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
};