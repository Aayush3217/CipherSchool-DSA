// Link : https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1

class Solution {
  public:
    bool search(Node* root, int key) {
        if(root==NULL) return false;
        if(root->data==key) return true;
        return search(root->left, key) || search(root->right, key);
    }
};