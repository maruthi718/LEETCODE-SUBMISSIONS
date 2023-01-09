class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0,n=s.size(),curr=0,ans=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                cnt++;
        }  
        if(n==k) 
            return cnt;
        ans=cnt;
        for(int i=k;i<n;i++)
        {
            if(s[curr]=='a' || s[curr]=='e' || s[curr]=='i' || s[curr]=='o' || s[curr]=='u')
                cnt--;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                cnt++;
            curr++;      
            ans=max(ans,cnt);
        }
        return ans;
    }
};