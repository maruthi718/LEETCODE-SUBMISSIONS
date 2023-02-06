class Solution {
public:
    bool check(char s)
    {
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u')
            return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& q) {
        vector<int>ans;
        int cnt=0,i=0;
        unordered_map<int,int>mp;
        cout<<words.size();
        for(auto it:words)
        {
            if(check(it[0]) && check(it[it.size()-1]))
                   cnt++;
               mp.emplace(i,cnt); 
             i++;  
        }
         for(int j=0;j<q.size();j++)
        {
             if(q[j][0]==0) 
                ans.emplace_back(mp[q[j][1]]);
            else
                ans.emplace_back(mp[q[j][1]]-mp[q[j][0]-1]); 
        }
               return ans;
    }
};