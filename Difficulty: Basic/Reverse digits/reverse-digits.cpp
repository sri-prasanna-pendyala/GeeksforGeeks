class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rem=0,temp=n,dig=0;
        while(temp>0)
        {
            if(temp%10==0)  
            {
                temp/=10;
                continue;
            }
            else
                dig=(temp%10)+dig*10;
            temp/=10;
        }
        return dig;
    }
};