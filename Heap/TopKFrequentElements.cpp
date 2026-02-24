// Link : https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        // map pair is <ele, freq>
        for(int ele : nums){
            mp[ele]++;
        }
        // heap pair is <freq, ele>
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for(auto x : mp){
            int ele = x.first, freq = x.second;
            pair<int,int> p = {freq,ele};
            pq.push(p);
            // pq.push({x.second,x.first})
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};



class Solution {
public:
    struct lambda {
        bool operator()(pair<int,string>& a, pair<int,string>& b) {
            if(a.first == b.first)
                return a.second < b.second;  // lex smaller = lower priority
            return a.first > b.first;        // smaller freq = higher priority
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(auto& w : words){
            mp[w]++;
        }

        priority_queue<
            pair<int,string>,
            vector<pair<int,string>>,
            lambda
        > pq;


        for(auto& it : mp){
            pq.push({it.second, it.first});

            if(pq.size()>k) pq.pop();
        }

        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};