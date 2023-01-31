class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res=0,ans=nums[0];
        for(int i=1;i<=n;i++)
        {
            res^=i;
        }
        for(int i=1;i<n;i++)
        {
            ans^=nums[i];
        }
        return ans^res;
    }
};