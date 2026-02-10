// Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool check(vector<int>& arr, int days, int mid){
        int count = 1;
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            if(sum+arr[i]>mid){
                count++;
                sum=arr[i];
            }else{
                sum += arr[i];
            }
        }
        if(count<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(),0);
        int ans = -1;
        while(start <= end){
            int mid = (start+end)/2;
            if(check(weights, days, mid)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};