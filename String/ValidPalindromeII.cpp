// Link :  https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool checkPalindrome(string s, int i, int j){
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int start = 0, end = n-1;
        while(start<=end){
            if(s[start] != s[end])
                return checkPalindrome(s,start+1,end) || checkPalindrome(s,start,end-1);
            start++;
            end--;
        }
        return true;
    }
};