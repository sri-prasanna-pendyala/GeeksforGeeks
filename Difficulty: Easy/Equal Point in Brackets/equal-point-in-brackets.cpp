class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int open=0,close=0;
        for(char c:s){
            if(c==')')
                close++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                open++;
            else
                close--;
            if(open==close)
                return i+1;
        }
        if(close==s.size())
        return s.size();
        return 0;
    }
};