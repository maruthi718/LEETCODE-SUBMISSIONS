class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        vector<vector<string>>res;
        for(auto it:strs)
        {
            string temp=it;
            sort(it.begin(),it.end());
              mp[it].emplace_back(temp);
        }
        for(auto it:mp)
            res.emplace_back(it.second);
        return res;
    }
};