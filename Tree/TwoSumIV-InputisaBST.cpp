// Link :  https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
    bool helper(TreeNode* root, int k, unordered_map<int,int>& mp){
        if(root==NULL) return false;

        int target = k - root->val;
        if(mp.count(target)) return true;

        mp[root->val]++;
        return helper(root->left, k, mp) || helper(root->right, k, mp);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mp;
        return helper(root, k, mp);
    }
};