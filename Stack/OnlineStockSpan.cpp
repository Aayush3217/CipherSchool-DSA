// Link : https://leetcode.com/problems/online-stock-span/

class StockSpanner {
    stack<pair<int, int>> st; //{price, span}
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;

        while(st.size()>0 && st.top().first<=price){
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};
