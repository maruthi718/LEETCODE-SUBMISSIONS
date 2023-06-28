class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res=0,k=0,temp;
        int m=bank[0].size(),n=bank.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int>mp;
            for(int j=0;j<m;j++)
            {
                mp[bank[i][j]]++;
            }
            cout<<mp['1'];
            if(mp['1']>0) 
            {
                if(k==0) 
                {
                    res=mp['1'];
                    k++;
                }
                else 
                {
                    if(k==1)
                    res=temp*mp['1'];
                    else
                    res=temp*mp['1']+res;
                    k++;
                }
                temp=mp['1'];
            }  
        }
        if(k==1) return 0;
        return res;
    }
};