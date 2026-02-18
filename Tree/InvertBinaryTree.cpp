// Link :  https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) { // using bfs
        if(root==NULL) return root;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            swap(front->left, front->right);
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
        return root;
    }
};


class Solution {
public:
    void helper(TreeNode* root){
        if(root==NULL) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};