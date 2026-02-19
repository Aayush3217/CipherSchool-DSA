// Link : https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int> ans;
        if(root==NULL) return ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            Node* curr = front.first;
            int hd = front.second;
            
            // Overwrite value for bottom view
            mp[hd] = curr->data;
            
            if(curr->left) q.push({curr->left, hd-1});
            if(curr->right) q.push({curr->right, hd+1});
        }
        for(auto& it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};