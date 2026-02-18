// Link : https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

class Solution {
  public:
    int height(Node* root) { //using dfs means recursion or stack
        if(root==NULL) return -1;
        
        int leftH = height(root->left);
        int rightH = height(root->right);
        
        return 1 + max(leftH, rightH);
    }
};


class Solution { // using bfs
  public:
    int height(Node* root) {
        int height = 0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();   // number of nodes in this level
            height++;
    
            for(int i = 0; i < size; i++){
                Node* front = q.front();
                q.pop();
    
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }
        return height-1;
    }
};