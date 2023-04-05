class Solution {
public:
    int numRescueBoats(vector<int>& nums, int t) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1,boats=0;
        while(l<=r)
        {
            if(l==r)
            {
                if(nums[l]<=t) boats++;
                    break;
            }
            else if(nums[l]+nums[r]<=t)
            {
                boats++;
                l++;
                r--;
            }
            else
            {
                boats++;
                r--;
            }
        }
        return boats;
    }
};