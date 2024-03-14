class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        long long n=nums.size();
        int cnt=0,sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i]; 
            if(sum==k)cnt++; 
            if(mp.find(sum-k)!=mp.end())
            {
                cnt+=mp[sum-k]; 
            }
            mp[sum]++; 
        }
          return cnt;  
    }
};

