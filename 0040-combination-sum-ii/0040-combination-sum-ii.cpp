class Solution {
public:
   void solve(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target)
    {
        if(target==0)
        {
              ans.push_back(ds); 
              return; 
        }
       
        for(int i=ind;i<nums.size();i++)
        {
            if(nums[i]>target) break;
            if(i>ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            solve(i+1,nums,ds,ans,target-nums[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        solve(0,nums,ds,ans,target);
        return ans;
    }
};