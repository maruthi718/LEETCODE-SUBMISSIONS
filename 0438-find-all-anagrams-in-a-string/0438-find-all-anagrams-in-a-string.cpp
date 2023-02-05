class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        long n=s.size();
        long m=p.size();
        if(n<m)
         return {};
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        for(int i=0;i<m;i++)
        {
            mp1[s[i]-'a']++;
            mp2[p[i]-'a']++; 
        }
        if(mp1==mp2) ans.push_back(0);
        for(int i=m;i<n;i++)
        {
           mp1[s[i]-'a']++;
             mp1[s[i-m]-'a']--;
            if(mp1==mp2) ans.push_back(i-m+1);
        }
        return ans;
    }
};