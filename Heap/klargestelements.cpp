// Link : https://www.geeksforgeeks.org/problems/k-largest-elements4206/1

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
       priority_queue<int, vector<int>, greater<int>> pq;
       vector<int> ans;
       
       for(int x : arr){
           pq.push(x);
           if(pq.size()>k) pq.pop();
       }
       
       while(!pq.empty()){
           ans.push_back(pq.top());
           pq.pop();
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};