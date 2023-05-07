class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n=a.size();
        unordered_map<int,int>mp;
        vector<int>ans(n,0);
        bool x=false,y=false;
        if(a[0]==b[0]) ans[0]=1;
        mp[a[0]]++;
        mp[b[0]]++;
        for(int i=1;i<n;i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]>1) x=true;
            mp[b[i]]++;
            if(mp[b[i]]>1) y=true;
            if(x && y) 
            {
                if(a[i]!=b[i])
                ans[i]=ans[i-1]+2;
                else
                    ans[i]=ans[i-1]+1;
                x=false;
                y=false;
            }
            else if(x)
            {
                ans[i]=ans[i-1]+1;
                x=false;
            }
            else if(y)
            {
                ans[i]=ans[i-1]+1;
                y=false;
            }
            else 
                ans[i]=ans[i-1];
        }
        return ans;
    }
};