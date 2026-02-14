// Link : https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;

        nge[n-1] = 0;
        st.push(n-1);

        for(int i=n-2; i>=0; i--){
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.size()==0) nge[i] = 0;
            else{
                int ans = st.top() - i;
                nge[i] = ans;
            }
            st.push(i);
        }
        return nge;
    }
};