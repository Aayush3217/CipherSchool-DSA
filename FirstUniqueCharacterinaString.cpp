// Link : https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(256, 0);

        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
        }

        for(int i=0; i<s.length(); i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};