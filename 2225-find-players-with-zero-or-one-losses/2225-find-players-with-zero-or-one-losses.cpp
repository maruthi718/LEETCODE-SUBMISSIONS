class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map<int,int>m;
        // sort(matches.begin(),matches.end());
        for(auto c:matches)
        {
            
            if(m.find(c[0])==m.end())
            {
                m[c[0]]=0;
            }
            m[c[1]]++;
        }
        vector<vector<int>> ans;
        vector<int> zero;
        vector<int> one;
        for(auto x:m)
        {
            if(x.second==0)
            zero.push_back(x.first);
            else if(x.second==1)
            one.push_back(x.first);
        }
       ans.push_back(zero);
       ans.push_back(one);
       return ans;
    }
};