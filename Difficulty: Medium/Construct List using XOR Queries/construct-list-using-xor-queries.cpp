class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        // code here
        int exor=0;
        vector<int> ans;
        ans.push_back(0);
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0)
                ans.push_back(queries[i][1]^exor);
            else{
                exor^=queries[i][1];
            }
        }
        for(int j=0;j<ans.size();j++){
            ans[j]^=exor;        
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
