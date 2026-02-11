// Link : https://leetcode.com/problems/rotate-image/description/?envType=problem-list-v2&envId=matrix


// brute force
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { 
        int n = matrix.size();
        vector<vector<int>> result(n, vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                result[j][n-i-1] = matrix[i][j];
            }
        }
        matrix = result;
    }
};

// optimal
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        //Transpose 
        for(int i=0; i<n; i++){
            for(int j=i; j<m; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};