bool cmp(vector<int>&a,vector<int>&b)
{
    return a[1]>b[1];
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        vector<vector<int>>v;
        for(auto it:mp)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.emplace_back(v[i][0]);
        }
        return res;
    }
};