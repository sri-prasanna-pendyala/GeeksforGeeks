class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        for(int i:arr){
            maxi=max(maxi,i);
        }
        return maxi;
    }
};
