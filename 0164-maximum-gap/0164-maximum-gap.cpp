class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;
        int gap=nums[1]-nums[0],maxi; 
        for(int i=2;i<n;i++)
        {
            maxi=nums[i]-nums[i-1];
            gap=max(gap,maxi);
        }
        //if(gap<0) return abs(gap);
        return gap;
    }
};