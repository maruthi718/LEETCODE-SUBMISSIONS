class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int key;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])==mp.end())
                mp.emplace(nums[i],i);
            else
            {
                key=mp[nums[i]];
                if(abs(key-i)<=k)
                    return true;
                else
                    mp[nums[i]]=i;
            }
        }
        return false;
    }
};