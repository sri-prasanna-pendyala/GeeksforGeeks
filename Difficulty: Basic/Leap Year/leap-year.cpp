class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%4==0)
        {
            if(n%100==0)
            {
                if(n%400==0)
                    return 1;
            }
            else
                return 1;
        }
        return 0;
    }
};