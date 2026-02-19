// Link : 

class Solution {  // using dfs
  public:
    void helper(Node* root, int level, vector<int>& ans){
        if(root==NULL) return;
        
        if(level==ans.size()) ans.push_back(root->data);
        
        helper(root->left, level+1, ans);
        helper(root->right, level+1, ans);
    }
    vector<int> leftView(Node *root) {
        vector<int> ans;
        helper(root, 0, ans);
        return ans;
    }
};




class Solution { // using bfs
  public:
    vector<int> leftView(Node *root) {
        if(root==NULL) return {};
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* node = q.front();
                q.pop();
                
                if(i==0) ans.push_back(node->data);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return ans;
    }
};