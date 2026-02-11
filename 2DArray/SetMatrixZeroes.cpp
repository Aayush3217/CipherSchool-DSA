// Link : https://leetcode.com/problems/set-matrix-zeroes/

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