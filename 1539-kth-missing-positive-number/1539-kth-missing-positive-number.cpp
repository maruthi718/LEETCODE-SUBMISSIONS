class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        if(nums[0]>k) return k;
        int low=0,high=nums.size()-1;
        //if(nums[high]==high+1) return nums[high]+k;
        int mid,close=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]-(mid+1)< k)
            {
                low=mid+1;
                close=mid+1;
            }
            else
                high=mid-1;
        }
        return close+k;
    }
};