class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size(),cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[tasks[i]]++;
        for(auto it:mp)
        {
            if(it.second==1) return -1;
            else
            {
                if(it.second%3==0)
                    cnt=cnt+(it.second/3);
                else
                    cnt=cnt+((it.second/3)+1);
                //cout<<cnt<<" ";
                
            }
        }
       return cnt;
        /* else if(mp[it]%3==2)
                    cnt+=((mp[it]/3)+1);*/
    }
};