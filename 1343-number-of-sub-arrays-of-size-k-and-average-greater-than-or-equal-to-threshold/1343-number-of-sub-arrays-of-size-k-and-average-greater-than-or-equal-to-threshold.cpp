class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int t) {
        int n=nums.size(),sum=0,cnt=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        if((sum/k)>=t)
        {
            cnt++;
        }
        for(int i=k;i<n;i++)
        {
            sum-=nums[i-k];
            sum+=nums[i];
            cout<<sum<<" ";
            if((sum/k)>=t)
           {
              cnt++;
           }
        }
        return cnt;
    }
};