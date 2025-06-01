// User function Template for C++

class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // complete the function here
        int x=a,y=b;
        x=x+y;
        y=x-y;
        x=x-y;
        return {x,y};
    }
};