class Solution {
public:
    vector<int> sortJumbled(vector<int>& mp, vector<int>& nums) {
        vector<pair<int,int>>res;
        for(int i=0;i<nums.size();i++)
        {
            string a=to_string(nums[i]);
            string temp="";
            for(int j=0;j<a.size();j++)
            {
                temp+=to_string(mp[a[j]-'0']);
            }
            res.push_back({stoi(temp),i});
        }
        sort(res.begin(),res.end());
        vector<int>ans;
        for(int i=0;i<res.size();i++)
        {
           // int x=;
            ans.push_back(nums[res[i].second]);
        }
        return ans;
    }
};