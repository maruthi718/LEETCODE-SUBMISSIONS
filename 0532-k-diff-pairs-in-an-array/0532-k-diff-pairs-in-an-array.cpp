class Solution {
public:
    int findPairs(vector<int>& nums, int k) {  
        int n=nums.size(),ans=0; 
        unordered_map<int,int>mp; 
        for(int i=0;i<n;i++) mp[nums[i]]++; 
        if(k==0)
        {
            for(auto it:mp)
            {
                if(it.second>1) ans++; 
            }
            return ans; 
        }
        sort(nums.begin(),nums.end()); 
        if(mp[nums[0]-k]!=0) ans++; 
        for(int i=1;i<n;i++) 
        { 
            if(nums[i]==nums[i-1]) continue; 
            if(mp[nums[i]-k]!=0) ans++; 
        } 
        return ans; 
    } 
}; 

