class Solution {
public:
      
    vector<vector<int>>ans;
    void f(int ind,vector<int> &nums)
    {
        if(ind==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
      unordered_set<int>s;
        for(int i=ind;i<nums.size();i++)
        {
           if(s.find(nums[i])!=s.end())continue;
            s.insert(nums[i]);
            swap(nums[i],nums[ind]); 
            f(ind+1,nums);
            swap(nums[i],nums[ind]);
           
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       // int x=-11,y=-11;
         f(0,nums);
        
        return ans;
    }
};