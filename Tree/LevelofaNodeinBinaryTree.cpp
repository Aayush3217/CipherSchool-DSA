// Link : https://www.geeksforgeeks.org/problems/level-of-a-node-in-binary-tree/1

class Solution {  /// using bfs
  public:
    int getLevel(struct Node *root, int target) {
        if(root==NULL) return 0;
        int level = 1;
        queue<Node*> q;
        q.push(root);
        
        
        while(!q.empty()){
            int n = q.size();
            for(int i=0; i<n; i++){
                Node* front = q.front();
                q.pop();
                
                if(front->data==target) return level;
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            level++;
        }
        return 0;
    }
};



class Solution {
  public:
    int getLevel(struct Node *root, int target, int level){
        if(root==NULL) return 0;
        
        if(root->data==target) return level;
        
        int left = getLevel(root->left, target, level+1);
        if(left!=0) return left;
        
        return getLevel(root->right, target, level+1);
    }
    int getLevel(struct Node *node, int target) {
        return getLevel(node, target, 1);
    }
};