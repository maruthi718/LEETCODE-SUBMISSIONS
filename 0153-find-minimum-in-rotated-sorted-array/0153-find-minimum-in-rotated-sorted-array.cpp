class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int low=0,high=n-1,mid;
        if(nums[low]<nums[high])
            return nums[low];
        while(low<=high)
        {
            mid=(low+high)/2;
            if(low+1==high) return min(nums[low],nums[high]);
            if(nums[low]<nums[mid]) low=mid;
            else 
                high=mid;
        }
        return 0;
    }
};