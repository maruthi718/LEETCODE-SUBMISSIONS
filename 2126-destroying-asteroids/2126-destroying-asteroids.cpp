class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int ans=mass;
        for(int i=0;i<nums.size();i++)
        {
            if(ans >= nums[i]) ans+=nums[i];
            else
                return false;
        }
        return true;
    }
};