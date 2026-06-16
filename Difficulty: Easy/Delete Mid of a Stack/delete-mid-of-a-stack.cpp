class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack<int> st;
        int mid=floor((s.size())/2),k=0;
        while(!s.empty()){
            if(k!=mid)
                st.push(s.top());
            k++;
            s.pop();
        }
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
    }
};