class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=-1,ans=0;
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]=-1;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]>start)
            {
                start=mp[s[i]];
            }
            mp[s[i]]=i;
            ans=max(ans,i-start);
        }
        return ans;
    }
};