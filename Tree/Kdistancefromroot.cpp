// Link : https://www.geeksforgeeks.org/problems/k-distance-from-root/1

class Solution {
  public:
    void helper(Node* root, int curr, int k, vector<int>& ans){
        if(root==NULL) return;
        
        if(curr==k){
            ans.push_back(root->data);
        }
        
        helper(root->left, curr+1, k, ans);
        helper(root->right, curr+1, k, ans);
    }
    vector<int> Kdistance(Node *root, int k) {
        vector<int> ans;
        helper(root, 0, k, ans);
        return ans;
    }
};