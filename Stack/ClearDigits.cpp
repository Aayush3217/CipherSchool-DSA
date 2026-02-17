// Link : https://leetcode.com/problems/clear-digits/

class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        for(char ch : s){
            if(isdigit(ch)){
                if(!st.empty()) st.pop();
            }
            else st.push(ch);
        }
        string res = "";
        while(st.size()!=0){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};