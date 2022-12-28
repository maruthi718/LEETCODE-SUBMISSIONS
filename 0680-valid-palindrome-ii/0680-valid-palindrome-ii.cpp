class Solution {
public:
    int cnt=0;
    bool check(string s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else
            {
                    cnt++;
                    if(cnt>1)
                    return false;
                return check(s,l+1,r) || check(s,l,r-1);
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int l=0,r=n-1;
        return check(s,l,r);
    }
};