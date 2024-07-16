class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),maxi=nums[0]-bottom;
        for(int i=1;i<n;i++)
        {
            maxi=max(nums[i]-nums[i-1]-1,maxi);
        }
         maxi=max(top-nums[n-1],maxi);
        return maxi; 
    }
};

