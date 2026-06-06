class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        // brute force with O(N^2)
        // vector<int> ans;
        // for(int i=0;i<arr.size();i++){
        //     int flag=0;
        //     for(int j=0;j<=i;j++){
        //         if(arr[j]<arr[i]){
        //             ans.push_back(arr[j]);
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag==0)
        //         ans.push_back(-1);
        // }
        // return ans;
         
         
        //optimal approach with O(N) TC
        vector<int> ans(arr.size());
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && st.top()>=arr[i])
                st.pop();
            ans[i]=(st.empty())?-1:st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};