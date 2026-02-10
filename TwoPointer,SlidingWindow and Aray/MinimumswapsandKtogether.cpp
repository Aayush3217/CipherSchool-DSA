// Link : https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1


class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        int n = arr.size();
        
        int totalks = 0;
        for(int i=0; i<n; i++){
            if(arr[i]<=k) totalks++;
        }
        
        if(totalks==0 || totalks==n) return 0;
        
        int currks = 0;
        for(int i=0; i<totalks; i++){
            if(arr[i]<=k) currks++;
        }
        int maxks = currks;
        
        
        for(int i=totalks; i<n; i++){
            if(arr[i-totalks]<=k) currks--;
            if(arr[i]<=k) currks++;
            maxks = max(maxks, currks);
        }
        return totalks - maxks;
    }
};
