class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long int n=nums.size();
        long long int sum=0,ps=0,cnt=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        for(int i=0;i<n-1;i++)
        {
            ps+=nums[i];
            sum-=nums[i];
            if(ps>=sum)
                cnt++;
        }
        return cnt;
    }
};