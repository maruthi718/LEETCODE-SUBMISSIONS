class Solution {
public:
    vector<vector<int>>ans;
    void f(int ind,vector<int>&nums,vector<int>&ds,int l)
    {
        if(ds.size()==l)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            ds.push_back(nums[i]);
            f(i+1,nums,ds,l);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        vector<int>nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        f(0,nums,ds,k);
        return ans;
    }
};