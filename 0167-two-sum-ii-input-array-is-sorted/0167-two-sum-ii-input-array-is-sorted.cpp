class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        long long int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(nums[i]+nums[j]<t)
                i++;
            else if(nums[i]+nums[j]>t)
                j--;
            else
                return{i+1,j+1};
        }
        return {};
    }
};