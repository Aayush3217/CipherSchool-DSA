// Link :  https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        queue<int> temp;
        int size = q.size();
        int n = size/2;
        
        for(int i=0; i<n; i++){
            temp.push(q.front());
            q.pop();
        }
        
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
            
            q.push(q.front());
            q.pop();
        }
    }
};