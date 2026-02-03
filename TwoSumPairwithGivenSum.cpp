// Q : Two Sum - Pair with Given Sum(GFG)

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;
        for(int& x : arr){
            int rem = target - x;
            if(mp.find(rem) != mp.end()){
                return true;
            }else{
                mp[x];
            }
        }
        return false;
    }
};