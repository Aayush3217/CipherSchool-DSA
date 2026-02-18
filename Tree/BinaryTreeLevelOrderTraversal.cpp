// Link :  https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution { // using bfs
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            for(int i=0; i<n; i++){
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            result.push_back(level);
        }
        return result;
    }
};



class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void nthLevel(TreeNode* root, int curr, int level, vector<int>& v){
        if(root==NULL) return;

        if(curr==level){
            v.push_back(root->val);
            return;
        }

        nthLevel(root->left, curr+1, level, v);
        nthLevel(root->right, curr+1, level, v);
    }
    void lOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = level(root);
        for(int i=1; i<=n; i++){
            vector<int> v;
            nthLevel(root, 1, i, v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root, ans);
        return ans;
    }
};