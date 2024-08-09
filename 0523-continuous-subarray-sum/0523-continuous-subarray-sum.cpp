class Solution {
public:    
    
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0,rem=0;
        unordered_map<int,int>mp;  
        mp.emplace(nums[0]%k,0);
        sum+=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           sum+=nums[i];
            rem=sum%k;
            if(rem==0) 
                return true;
            if(mp.find(rem)!=mp.end() )
            {
                if(i-mp[rem]>1)
                    return true;
            }
            else
                mp[rem]=i;
        }  
        return false; 
    }
};

