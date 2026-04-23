class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i:arr)
            sum+=i;
        if(sum%2!=0)
            return false;
        int half=sum/2;
        for(int i:arr){
            if(sum-i==half)
                return true;
            sum-=i;
        }
        return false;
    }
};
