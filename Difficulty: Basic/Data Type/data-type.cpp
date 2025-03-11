//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        string type=str;
        if(type=="Character")
            return sizeof(char);
        else if(type=="Float")
            return sizeof(float);
        else if(type=="Integer")
            return sizeof(int);
        else if(type=="Long")
            return sizeof(long);
        else if(type=="Double")
            return sizeof(double);
        else
            return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends