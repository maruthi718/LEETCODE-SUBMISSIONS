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
            if(low+1==high) 
            {
                if(nums[low]==target) return low;
                else if(nums[high]==target) return high;
                else if(target<nums[low]) return low-1;
                else if(target>nums[high]) return high+1;
                 else if(target>nums[low] && target<nums[high]) return low+1;
            }
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(target > nums[mid-1] && target<nums[mid]) return mid;
            else if(target > nums[mid] && target<nums[mid+1]) return mid+1;
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return 0;
    }
};