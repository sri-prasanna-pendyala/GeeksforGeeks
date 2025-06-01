class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n==1)    return 0;
        else
        {
        int i=1,flag=0;
        while(i<=n)
        {
            if(n%i==0)
            {
                flag++;
                if(flag>2)
                    return 0;
            }
            i++;
            
        }
        }
        return 1;
    }
};
