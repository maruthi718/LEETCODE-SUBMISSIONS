class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        map<int,bool>mp;
        map<int,int>mp2;
        for(int i=0;i<n;i++)
        {
           mp2[nums[i][1]]--; 
            if(mp.find(nums[i][0])==mp.end())
                mp.emplace(nums[i][0],true);
            if(mp.find(nums[i][1])!=mp.end())
                mp[nums[i][1]]=false;
            else
                mp.emplace(nums[i][1],false);
        }
        vector<int>temp;
        for(auto it:mp)
        {
            if(it.second)
                temp.emplace_back(it.first);
        }
        
        ans.emplace_back(temp);
        temp.clear();
        for(auto it:mp2)
        {
            if(it.second==-1)
                temp.emplace_back(it.first);
        }
        ans.emplace_back(temp);
        return ans;
    }
};