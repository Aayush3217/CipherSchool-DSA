// Link : https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        ans[n-1] = -1;
        st.push(nums[n-1]);
        
        for(int i=2*n-1; i>=0; i--){
            int idx = i % n;
            
            while(st.size()>0 && st.top()<=nums[idx]){
                st.pop();
            }

            if(st.size()==0) ans[idx] = -1;
            else ans[idx] = st.top();
            st.push(nums[idx]);
        }
        return ans;
    }
};