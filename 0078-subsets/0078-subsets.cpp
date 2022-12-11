class Solution {
public:
    vector<vector<int>>ans;
    void f(int ind,int n,vector<int>ds,vector<int>nums)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        f(ind+1,n,ds,nums);
        ds.pop_back();
        f(ind+1,n,ds,nums);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        f(0,nums.size(),ds,nums);
        return ans;
    }
};