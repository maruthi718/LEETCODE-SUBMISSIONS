class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long cnt=0,len=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           if(nums[i]==0)  
           {
               len++;
           }
           else
            {
               cnt=cnt+(len*(len+1))/2;
               len=0;
            }
        }
        cnt=cnt+(len*(len+1))/2;
        return cnt;
    }
};