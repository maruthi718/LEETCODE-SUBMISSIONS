class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        if(target<nums[0])
            return 0;
        if(target>nums[n-1]) 
            return n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
};