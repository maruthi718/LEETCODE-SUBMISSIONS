class Solution {
public:
    int countTime(string t) {
        if(t[0]=='?' && t[1]=='?' && t[3]=='?' && t[4]=='?' )
            return 1440;
        int ans=1,res=1;
        if(t[0]=='?')
        {
            if(t[1]=='?')
            {
                ans=24;
            }
            else if((int) t[1]-48<=3)
                ans=3;
            else 
                ans=2;
        }
        if(t[1]=='?')
        {
            if(t[0]=='2')
                ans=4;
            else if(t[0]!='?')
            {
                ans=10;
            }
            
        }
        if(t[3]=='?' && t[4]=='?')
            res=60;
        else if(t[3]=='?')
        {
            if(t[4]=='0')
                res=6;
            else 
                res=6;
        }
        else if(t[4]=='?')
        {
            if(t[3]=='6')
                res=1;
            else
                res=10;
        }
       
       return ans*(res);
    }
};