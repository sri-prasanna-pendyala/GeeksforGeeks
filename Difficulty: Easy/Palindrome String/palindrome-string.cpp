class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--])
                return false;
        }
        return true;
    }
};