

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size()-1,val=arr[n];
        vector<int> ans;
        ans.push_back(arr[n]);
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=val){
                ans.push_back(arr[i]);
                val=arr[i];
            }
        }
        n=ans.size(),val=n-1;
        for(int i=0;i<n/2;i++){
            swap(ans[i],ans[val--]);
        }
        return ans;
    }
};