class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,sum=0,n=nums.size(),l=0,r=0;
        while(r<n)
        {
            sum+=nums[r++];
            while(sum>=target)
            {
                ans=min(ans,r-l);
                sum-=nums[l++];
            }
        }
         return ans==INT_MAX ? 0: ans;
    }
};