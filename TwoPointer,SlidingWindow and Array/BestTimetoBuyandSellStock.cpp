// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        for(int& price : prices){
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price-minPrice);
        }
        return maxProfit;
    }
};