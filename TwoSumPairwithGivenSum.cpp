// Link : https://www.geeksforgeeks.org/problems/key-pair5616/1

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