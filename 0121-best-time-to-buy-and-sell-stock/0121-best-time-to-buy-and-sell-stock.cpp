class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi=nums[0],res=INT_MIN,diff=0;
        if(nums.size()==1) return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(maxi>nums[i])
                maxi=nums[i];
            else
                diff=nums[i]-maxi;
            res=max(res,diff);
        }
        return res;
    }
};