class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int cnt=1,maxi=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
                cnt++;
            }
        }
        return cnt;
    }
};