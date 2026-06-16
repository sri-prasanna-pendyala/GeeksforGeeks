class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        vector<int> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        for(int i:v){
            st.push(i);
        }
    }
};