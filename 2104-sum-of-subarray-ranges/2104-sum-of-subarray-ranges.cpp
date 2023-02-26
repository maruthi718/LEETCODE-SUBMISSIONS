class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long int n=nums.size();
        long long sum=0;
        for(long long int i=0;i<n;i++)
        {
             int a=INT_MAX;
             int b=INT_MIN;
            for(long long int j=i;j<n;j++)
            {
                a=min(nums[j],a);
                b=max(b,nums[j]);
                sum+=abs(a-b);
            }
        }
        return sum;
    }
};