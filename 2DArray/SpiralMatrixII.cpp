// Link : https://leetcode.com/problems/spiral-matrix-ii/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));

        int top = 0, bottom = n-1;
        int left = 0, right = n-1;

        int num = 1;

        while(top<=bottom && left<=right){
            // top
            for(int i=left; i<=right; i++){
                mat[top][i] = num++;
            }
            top++;

            //right
            for(int i=top; i<=bottom; i++){
                mat[i][right] = num++;
            }
            right--;

            //bottom
            if(bottom>=top){
                for(int i=right; i>=left; i--){
                    mat[bottom][i] = num++;
                }
            }
            bottom--;

            //left
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    mat[i][left] = num++;
                }
            }
            left++;
        }
        return mat;
    }
};