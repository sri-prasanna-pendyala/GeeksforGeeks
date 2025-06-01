class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum=0,rem=0;
        while(n>0)
        {
            rem+=n%10;
            n/=10;
        }
        return rem;
    }
};