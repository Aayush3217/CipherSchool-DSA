// Link : https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1

class Solution {
  public:
    int nthRoot(int n, int m) {
        int root = round(pow(m, 1.0/n));
        if(pow(root, n)==m)
            return root;
        return -1;
    }
};