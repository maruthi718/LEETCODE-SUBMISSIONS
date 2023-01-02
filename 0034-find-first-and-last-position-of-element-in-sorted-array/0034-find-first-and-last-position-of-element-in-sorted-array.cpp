class Solution {
public:
    int f(vector<int>& nums, int target,bool temp,int n)
    {
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                if(temp)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v={-1,-1};
        int n=nums.size();
        int left=f(nums,target,true,n);
        int right=f(nums,target,false,n);
        return {left,right};
    }
};