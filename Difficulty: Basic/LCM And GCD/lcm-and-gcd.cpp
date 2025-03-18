//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int c,int d)
    {
        return (d==0)?c:gcd(d,c%d);
    }
    int lcm(int c,int d)
    {
        return (c/gcd(c,d))*d;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector<int> arr;
        arr.push_back(lcm(a,b));
        arr.push_back(gcd(a,b));
        return arr;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends