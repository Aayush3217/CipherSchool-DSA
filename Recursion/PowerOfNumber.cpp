// Link :https://www.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

class Solution {
  public:
    int reverse(int n, int rev=0){
        if(n==0) return rev;
        return reverse(n/10, rev*10+n%10);
    }
    int power(int base, int exp){
        if(exp==0) return 1;
        return base * power(base, exp-1);
    }
    int reverseExponentiation(int n) {
        int rev = reverse(n);
        return power(n, rev);
    }
};