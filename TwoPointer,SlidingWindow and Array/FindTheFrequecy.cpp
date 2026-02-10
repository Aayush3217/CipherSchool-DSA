// Link : https://www.geeksforgeeks.org/problems/find-the-frequency/1

class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        unordered_map<int, int> mp;
        
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        return mp[x];
    }
};