// Link : https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        ans[n-1] = -1;
        st.push(arr[n-1]);
        
        for(int i=n-2; i>=0; i--){
            // pop all element smaller than arr[i]
            while(st.size()>0 && st.top()<=arr[i]){
                st.pop();
            }
            
            //mark the ans in age array
            if(st.size()==0) ans[i] = -1;
            else ans[i] = st.top();
            //push the arr[i]
            st.push(arr[i]);
        }
        return ans;
    }
};