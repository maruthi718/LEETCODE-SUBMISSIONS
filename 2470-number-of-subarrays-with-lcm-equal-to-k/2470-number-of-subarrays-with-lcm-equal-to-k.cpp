class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
            long curr;
        for(int i=0;i<n;i++)
        {
            curr=nums[i];
            for(int j=i;j<n;j++)
            {
                if(curr>k || nums[j]>k) break;
                curr=std::lcm(curr,nums[j]);
                if(curr==k) cnt++;
            }
        }
        return cnt;
    }
};