// Link : https://www.geeksforgeeks.org/problems/max-consecutive-one/0

class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n = arr.size();
        int ones = 0, zeros = 0;
        int maxOnes = INT_MIN, maxZeros = INT_MIN;
        
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                ones++;
                zeros = 0;
                maxOnes = max(maxOnes, ones);
            }else{
                zeros++;
                ones = 0;
                maxZeros = max(maxZeros, zeros);
            }
        }
        return max(maxOnes, maxZeros);
    }
};