class Solution {
  public:
    string frequencySort(string &s) {
        // code here
        unordered_map<char,int> mp;
        for(char c:s)
            mp[c]++;
        vector<pair<char,int>> v(mp.begin(),mp.end());
        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            if(a.second!=b.second)
                return a.second<b.second;
            return a.first<b.first;
        });
        string str="";
        for(auto i:v){
            while(i.second>0){
                str+=i.first;
                i.second--;
            }
        }
        return str;
    }
};