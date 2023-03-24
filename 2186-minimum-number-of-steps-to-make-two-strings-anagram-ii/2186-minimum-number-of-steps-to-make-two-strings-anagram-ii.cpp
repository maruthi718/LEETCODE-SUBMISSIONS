class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        int m=t.size(),ans=0;
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            ans+=abs(v[i]);
        }
        return ans;
    }
};