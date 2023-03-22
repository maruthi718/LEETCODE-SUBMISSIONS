class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int maxi=INT_MIN,sum=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>mp; 
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++; 
                for(auto& it:mp) 
                {
                    mini=min(mini,it.second); 
                    maxi=max(maxi,it.second); 
                }
                sum+=(maxi-mini); 
                maxi=INT_MIN; 
                mini=INT_MAX; 
            }  
        } 
        return sum; 
    }
};
