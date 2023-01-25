class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int cnt=1;
        for(int i=0;i<s.size();i++)
        {
           mp[s[i]]++;
            if(mp[s[i]]>1)
            {
                cnt++;
                mp.clear();
                mp[s[i]]++;
            }
        }
        return cnt;
    }
};