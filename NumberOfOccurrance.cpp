// Link : https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

class Solution {
public:
    void helper(vector<int>& arr, int target, int& count, int l, int r) {
        if (l > r) return;

        int mid = l + (r - l) / 2;

        if (arr[mid] == target) {
            count++;
            helper(arr, target, count, l, mid - 1);
            helper(arr, target, count, mid + 1, r);
        }
        else if (arr[mid] < target) {
            helper(arr, target, count, mid + 1, r);
        }
        else {
            helper(arr, target, count, l, mid - 1);
        }
    }

    int countFreq(vector<int>& arr, int target) {
        int count = 0;
        helper(arr, target, count, 0, arr.size() - 1);
        return count;
    }
};
