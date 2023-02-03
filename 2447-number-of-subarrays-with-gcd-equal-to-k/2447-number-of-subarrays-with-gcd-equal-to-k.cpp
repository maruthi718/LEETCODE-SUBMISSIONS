class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size(),x,curr;
        for(int i=0;i<n;i++)
        {
            curr=nums[i];
            for(int j=i;j<n;j++)
            {
                if(curr%k  || nums[j]%k) break;
                curr=__gcd(curr,nums[j]);
                if(curr==k) cnt++;
            }
        }
        return cnt;
    }
};