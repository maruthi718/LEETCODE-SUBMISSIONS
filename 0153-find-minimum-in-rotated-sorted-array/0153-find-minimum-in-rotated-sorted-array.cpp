class Solution {
public:
    int findMin(vector<int>& nums) {
          int left=0,right=nums.size()-1;
         if(nums.size()== 1) return nums[0];
        int mid;
        while(left<=right)
        {
            if(left+1==right) return min(nums[left],nums[right]);
            mid=(left+right)/2;
            if(nums[mid]>nums[right])
            {
               left=mid;
            }
            else
            {
               right=mid;
            }
        }
        return 0;
    }
};