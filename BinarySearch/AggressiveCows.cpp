// Link : https://www.geeksforgeeks.org/problems/aggressive-cows/1

class Solution {
  public:
    bool isPossible(vector<int>& stalls, int mid, int k){
        int cows = 1, lastStallPos = stalls[0];
        for(int i=1; i<stalls.size(); i++){
            if((stalls[i]-lastStallPos)>=mid){
                cows++;
                lastStallPos = stalls[i];
            }
            if(cows==k) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();
        int lo = 0, hi = stalls.back() - stalls.front();
        int ans = -1;
        
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(isPossible(stalls, mid, k)){
                ans = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
    }
};