// Link : https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

// even rows traverse [left->right]
// odd rows travserse [right->left]
class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(i%2==0){ //even  [left->right]
                for(int j=0; j<m; j++){
                    ans.push_back(matrix[i][j]);
                }
            }
            else{ // odd [right->left]
                for(int j=m-1; j>=0; j--){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};