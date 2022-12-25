class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(m>n)
            return false;
        else if(m==n)
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
                return true;
            return false;
        }
        sort(s1.begin(),s1.end());
        for(int i=0;i<n-m+1;i++)
        {
            string temp=s2.substr(i,m);
            sort(temp.begin(),temp.end());
            if(temp==s1)
                return true;
        }
        return false;
    }
};