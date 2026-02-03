// Link : https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n-1;

        for(int i=0; i<=end; i++){
            if(arr[i]==2){
                swap(arr[i], arr[end]);
                end--;
                i--;
            }
            else if(arr[i]==0){
                swap(arr[i], arr[start]);
                start++;
            }
        }
    }
};