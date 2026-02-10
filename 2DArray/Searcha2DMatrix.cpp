// Link : https://leetcode.com/problems/search-a-2d-matrix/description/

 // Brute Force
class Solution { 
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        bool flage = false;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j] == target) flage = true;
            }
        }
        return flage;
    }
};



// Optimal
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start = 0, end = m*n-1;

        while(start<=end){
            int mid = (start+end)/2;
            if(matrix[mid/n][mid%n]==target) return true;
            else if(matrix[mid/n][mid%n]<target) start = mid+1;
            else end = mid-1;
        }
        return false;
    }
};