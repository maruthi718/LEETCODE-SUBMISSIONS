class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] & 1)
                nums[i]=1;
            else
                nums[i]=0;
        }
        int sum=0,cnt=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k) cnt++;
            if(mp.find(sum-k)!=mp.end())
            {
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};