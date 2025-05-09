//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=arr[0],secmax=-1;
        for(int i=1;i<arr.size();i++)
        {
            if(max<arr[i])
            {
                secmax=max;
                max=arr[i];
            }
            else if(arr[i]>secmax && arr[i]!=max)
            {
                secmax=arr[i];
            }
        }
        return (secmax==-1)?-1:secmax;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends