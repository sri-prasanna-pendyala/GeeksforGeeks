// User function Template for C++

//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> list_less_than_k(vector<int> &arr, int k) {
        // code here
        vector<int> vec;
        for(int i:arr){
            if(i<k)
                vec.push_back(i);
        }
        return vec;
    }
};
