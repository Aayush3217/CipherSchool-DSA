// Link : https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/0

class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        
        // top row
        for(int j=0; j<m; j++){
            ans.push_back(mat[0][j]);
        }
        
        // right column
        for(int i=1; i<n; i++){
            ans.push_back(mat[i][m-1]);
        }
        
        // bottom row
        if(n>1){
            for(int j=m-2; j>=0; j--){
                ans.push_back(mat[n-1][j]);
            }
        }
        
        // left column
        if(m>1){
            for(int i=n-2; i>0; i--){
                ans.push_back(mat[i][0]);
            }
        }
        return ans;
    }
};
