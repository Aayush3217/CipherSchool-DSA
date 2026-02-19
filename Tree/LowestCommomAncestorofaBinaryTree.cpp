// Link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {  
public:
    bool exists(TreeNode* root, TreeNode* target){
        if(root==NULL) return false;
        if(root==target) return true;
        return exists(root->left, target) || exists(root->right, target);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        else if(exists(root->left, p) && exists(root->right, q)) return root;
        else if(exists(root->right, p) && exists(root->left, q)) return root;
        else if(exists(root->left, p) && exists(root->left, q)) return lowestCommonAncestor(root->left, p ,q);
        else return lowestCommonAncestor(root->right, p, q);
    }
};




class Solution {  // using bfs
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        unordered_map<TreeNode* , TreeNode*> parent;
        queue<TreeNode*> qu;
        parent[root] = NULL;
        qu.push(root);

        while(!qu.empty()){
            TreeNode* curr = qu.front();
            qu.pop();

            if(curr->left){
                parent[curr->left] = curr;
                qu.push(curr->left);
            }

            if(curr->right){
                parent[curr->right] = curr;
                qu.push(curr->right);
            }
        }
        // store ancestors of p
        unordered_set<TreeNode*> ancestor;
        while(p){
            ancestor.insert(p);
            p = parent[p];
        }
        // move q upwards
        while(q){
            if(ancestor.count(q))
                return q;
            q = parent[q];
        }
        return NULL;
    }
};