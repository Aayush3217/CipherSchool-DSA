// Link : https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

class Solution {
public:
    unordered_map<TreeNode* , TreeNode*> parent;
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        if(root->left!=NULL) parent[root->left] = root;
        inOrder(root->left);
        if(root->right!=NULL) parent[root->right] = root;
        inOrder(root->right); 
    }
    void BFS(TreeNode* target, int k, vector<int>& ans){
        queue<TreeNode*> q;
        q.push(target);
        unordered_set<int> visited;
        visited.insert(target->val);

        while(!q.empty()){
            int n = q.size();
            if(k==0) break;
            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                //Left
                if(curr->left!=NULL && !visited.count(curr->left->val)){
                    q.push(curr->left);
                    visited.insert(curr->left->val);
                } 
                //Right
                if(curr->right!=NULL && !visited.count(curr->right->val)){
                    q.push(curr->right);
                    visited.insert(curr->right->val);
                }
                //Parent
                if(parent.count(curr) && !visited.count(parent[curr]->val)){
                    q.push(parent[curr]);
                    visited.insert(parent[curr]->val);
                }
            }
            k--;
        }
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        inOrder(root);
        BFS(target, k, ans);
        return ans;
    }
};