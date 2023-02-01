class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len=0,cnt=0;
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
                cnt++;
            else
                cnt=0;
            len=max(len,cnt);
        }
        return len;
    }
};