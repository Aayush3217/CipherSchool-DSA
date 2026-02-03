// Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/?envType=study-plan-v2&envId=binary-search

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int start = 0, end = n-1;
        char ans = letters[0];
        while(start<=end){
            int mid = (start+end)/2;
            if(letters[mid]<=target){
                start = mid+1;
            }else{
                ans = letters[mid];
                end = mid-1;
            }
        }
        return ans;
    }
};