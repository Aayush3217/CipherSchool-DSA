// Link : https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution {
  public:
    int minCost(vector<int>& arr) {
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0; i<n; i++) pq.push(arr[i]);
        
        int cost = 0;
        while(pq.size()>1){
            int firstRope = pq.top();
            pq.pop();
            int secondRope = pq.top();
            pq.pop();
            
            cost += firstRope + secondRope;
            pq.push(firstRope + secondRope);
        }
        return cost;
    }
};