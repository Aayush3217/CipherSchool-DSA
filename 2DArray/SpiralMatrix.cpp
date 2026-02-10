// Link : https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        int top = 0, bottom = m-1;
        int left = 0 , right = n-1;

        while(top<=bottom && left<=right){
            // top
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            //right
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            //bottom 
            if(bottom>=top){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
            }
            bottom--;

            // left
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
            }
            left++;
        }
        return ans;
    }
};