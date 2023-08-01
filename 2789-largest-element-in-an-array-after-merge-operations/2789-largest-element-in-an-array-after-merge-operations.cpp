class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=nums[n-1],next=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<=next)
            {
                ans+=nums[i];
                next=ans; 
            }
            else
            {
                ans=nums[i];
                next=nums[i];
            }
        }
        return ans;
    }
};