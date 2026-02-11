// Link : https://leetcode.com/problems/set-matrix-zeroes/

// brute force approach
class Solution { 
public:
    void solve(vector<vector<int>>& matrix, int i, int j){
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int col=0; col<cols; col++){
            matrix[i][col] = 0;
        }

        for(int row=0; row<rows; row++){
            matrix[row][j] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<pair<int, int>> zeros;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0) zeros.push_back({i,j});
            }
        }

        for(auto& p : zeros){
            solve(matrix, p.first, p.second);
        }
    }
};


// Optimal Approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool zeroInTop = false;
        bool zeroInLeft = false;

        //check top row is there any zero
        for(int i=0; i<m; i++){
            if(matrix[0][i]==0)
                zeroInTop = true;
        }
        // check left column is there any zeros
        for(int i=0; i<n; i++){
            if(matrix[i][0]==0)
                zeroInLeft = true;
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // make all zeros
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]= 0;
            }
        }

        if(zeroInTop){
            for(int i=0; i<m; i++){
                matrix[0][i] = 0;
            }
        }
        if(zeroInLeft){
            for(int i=0; i<n; i++)
                matrix[i][0] = 0;
        }
    }
};