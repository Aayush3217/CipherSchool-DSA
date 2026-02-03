// Link : https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    bool canEatPiles(vector<int>& nums, int mid, int h){
        int actualHours = 0;
        for(int& x : nums){
            actualHours += x/mid;

            if(x%mid != 0) actualHours++;
        }
        return actualHours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 0, r = *max_element(piles.begin(), piles.end());

        while(l<r){
            int mid = l + (r-l)/2;
            if(canEatPiles(piles, mid, h)){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};