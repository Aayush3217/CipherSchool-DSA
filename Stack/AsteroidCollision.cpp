// Link : https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int arr : asteroids){
            while(!st.empty() && arr<0 && st.top()>0){
                int sum = arr + st.top();
                if(sum<0){
                    st.pop();
                }else if(sum>0){
                    arr = 0;
                }else{
                    st.pop();
                    arr = 0;
                }
            }
            if(arr != 0){
                st.push(arr);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};