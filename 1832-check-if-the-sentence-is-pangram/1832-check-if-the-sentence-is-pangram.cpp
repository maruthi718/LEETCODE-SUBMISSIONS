class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        string a="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<26;i++)
        {
            if(mp.find(a[i])!=mp.end())
                continue;
            else
                return false;
        }
        return true;
    }
};