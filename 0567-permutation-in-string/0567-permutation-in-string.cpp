class Solution {
public:
    bool checkInclusion(string p, string s) {
        vector<int>ans;
        long n=s.size();
        long m=p.size();
        if(n<m)
         return false;
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        for(int i=0;i<m;i++)
        {
            mp1[s[i]-'a']++;
            mp2[p[i]-'a']++; 
        }
        if(mp1==mp2) return true;
        for(int i=m;i<n;i++)
        {
           mp1[s[i]-'a']++;
             mp1[s[i-m]-'a']--;
            if(mp1==mp2) return true;
        }
        return false;
    }
};
