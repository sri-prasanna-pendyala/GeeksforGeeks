// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int num=arr[arr.size()-1];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1])
                continue;
            else{
                num=arr[i-1];
                break;
            }
        }
        return num;
    }
};