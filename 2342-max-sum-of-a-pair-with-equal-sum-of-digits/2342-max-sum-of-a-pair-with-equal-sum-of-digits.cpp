class Solution {
public:
    int digit(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int maxi=-1,n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
          mp[digit(nums[i])].emplace_back(nums[i]);
        }
        for(auto it:mp)
        {
            sort(it.second.rbegin(),it.second.rend());
            if(it.second.size()>1)
            {
                maxi=max(it.second[0]+it.second[1],maxi);
            }
        }
        
        return maxi;
    }
};