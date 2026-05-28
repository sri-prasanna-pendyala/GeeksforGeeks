class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int presum=0, len=0;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            presum+=arr[i];
            if(presum==k){
                len=max(len,i+1);
            }
            if(mp.find(presum-k)!=mp.end()){
                len=max(len, i-mp[presum-k]);
            }
            if(mp.find(presum)==mp.end())
                mp[presum]=i;
        }
        return len;
    }
};