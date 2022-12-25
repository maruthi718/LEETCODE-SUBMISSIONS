class Solution {
public:
    int characterReplacement(string s, int k) {
         int maxi=0,l=0,res=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            maxi=max(maxi,mp[s[i]]);
            if(i-l+1-maxi>k)
            {
                mp[s[l]]--; 
                l++; 
            }  
            res=max(res,i-l+1);
        }
        return res; 
    }
};