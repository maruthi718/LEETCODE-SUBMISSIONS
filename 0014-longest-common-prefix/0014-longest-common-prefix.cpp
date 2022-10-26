class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       sort(str.begin(),str.end());
        int n=str.size();
        if(n==1) return str[0];
        string first=str[0];
        int m=first.size();
        string last=str[n-1];
        string ans;
        for(int i=0;i<m;i++)
        {
            if(first[i]==last[i])
                ans+=last[i];
            else
                break;
        }
       return ans;                      
    }
};