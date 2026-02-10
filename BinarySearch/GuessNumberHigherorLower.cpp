// Link : https://leetcode.com/problems/guess-number-higher-or-lower/

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n;
        while(l<=r){
            int mid = l + (r-l)/2;
            int ans = guess(mid);
            if(ans==0) return mid;
            else if(ans == -1) r = mid-1;
            else l = mid+1; 
        }
        return -1;
    }
};