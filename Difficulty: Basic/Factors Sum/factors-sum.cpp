class Solution {
  public:
    long long factorSum(int N) {
        // Your code goes here
        long long sum=0;
        for(long long i=1;i<=sqrt(N);i++)
        {
            if(N%i==0)
            {
                if(N/i!=i)
                {
                    sum+=i;
                    sum+=(N/i);
                }
                else
                    sum+=i;
            }
        }
        return sum;
    }
};