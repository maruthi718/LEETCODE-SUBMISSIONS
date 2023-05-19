class Solution {
public:
    string customSortString(string t, string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        string ans;
        for(int i=0;i<t.size();i++)
        {
            if(mp[t[i]]>0)
            {
                for(int j=0;j<mp[t[i]];j++)
                    ans+=t[i];
                mp[t[i]]=-1;
            }
        }
        for(auto it:mp)
        {
            if(it.second>0)
            {
                for(int i=0;i<it.second;i++)
                    ans+=it.first;
            }
        }
        return ans;
    }
};