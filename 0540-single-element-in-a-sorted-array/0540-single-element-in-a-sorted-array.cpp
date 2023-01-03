class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,mid;
        if(n==1) return nums[0];
        while(low<=high)
        {
            mid=(low+high)/2;
            if(low==high==n-1) return nums[low];
            if(mid%2==0)
            {
                if(nums[mid+1]==nums[mid])
                {
                    low=mid+1;
                }
                else
                  high=mid-1;
            }
            else 
            {
                if(nums[mid-1]==nums[mid])
                {
                    low=mid+1; 
                }
                else
                   high=mid-1; 
            }
        }
        return nums[low];
    }
};