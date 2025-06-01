// User function Template for C++
class Solution {
  public:
    bool checkValidity(int a, int b, int c) {
        // // code here
        return ((a+b>c)&&(a+c>b)&&(b+c>a))?true:false;
    }
};