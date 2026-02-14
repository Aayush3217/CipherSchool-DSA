// Link : https://www.geeksforgeeks.org/problems/prefix-evaluation/1


class Solution {
  public:
    int evaluatePrefix(vector<string>& arr) {
        stack<int> st;
        
        for(int i=arr.size()-1; i>=0; i--){
            
            string token = arr[i];
            
            if(token=="+" || token=="-" || token=="*" || token=="/" || token=="^"){
                int val1 = st.top(); st.pop();
                int val2 = st.top(); st.pop();
                
                int res = 0;
                
                if(token=="+") res = val1+val2;
                else if(token == "-") res = val1 - val2;
                else if(token == "*") res = val1 * val2;
                else if(token=="/"){
                    res = val1 / val2;
                    // floor division adjustment
                    if((val1 % val2 != 0) && ((val1 < 0) ^ (val2 < 0)))
                        res--;
                }
                else if(token == "^") res = pow(val1, val2);
                
                st.push(res);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};