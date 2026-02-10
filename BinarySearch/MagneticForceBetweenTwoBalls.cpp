// Link : https://leetcode.com/problems/magnetic-force-between-two-balls/

class Solution {
public:
    bool possibleToPlace(vector<int>& arr, int force, int m){
        int prev = arr[0];
        int count = 1;

        for(int i=1; i<arr.size(); i++){
            int curr = arr[i];

            if(curr - prev >= force){
                count++;
                prev = curr;
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int result = 0;

        int minForce = 1, maxForce = position.back() - position.front();
        while(minForce<=maxForce){
            int mid = minForce + (maxForce-minForce)/2;
            if(possibleToPlace(position, mid, m)){
                result = mid;
                minForce = mid+1;
            }else{
                maxForce = mid-1;
            }
        }
        return result;
    }
};