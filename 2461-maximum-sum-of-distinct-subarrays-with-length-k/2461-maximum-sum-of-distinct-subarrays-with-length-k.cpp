class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans=0,sum=0;
        int l=0,i=0,n=nums.size(),size=0; 
        unordered_map<int,int>mp;
        while(i<n)
        {
            mp[nums[i]]++;
            size++;
            sum+=nums[i];
            if(mp[nums[i]]>1)
            {
                while(nums[l]!=nums[i])
                {
                    mp[nums[l]]--;
                    sum-=nums[l];
                    size--;
                    l++;
                }
                mp[nums[l]]--;
                sum-=nums[l];
                l++;
                size--;
            }
               if(size==k) 
              {
                ans=max(sum,ans);
                mp[nums[l]]--;
                sum-=nums[l];
                size--;
                 l++;
              } 
            i++;
        }
        
        return ans;
    }
};