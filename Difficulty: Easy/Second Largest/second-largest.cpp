class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN,secmax=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                secmax=maxi;
                maxi=arr[i];
            }
            else if(arr[i]>secmax && arr[i]<maxi)
                secmax=arr[i];
        }
        if(secmax==INT_MIN || secmax==maxi)
            return -1;
        return secmax;
    }
};