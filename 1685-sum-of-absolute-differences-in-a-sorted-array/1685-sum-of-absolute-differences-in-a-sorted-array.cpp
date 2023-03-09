class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
         vector<int>front(nums.size(),0);
        vector<int>back(nums.size(),0);
        int n=nums.size();
        int x=0,y=0,sum=0;
        front[0]=nums[0];
         for(int i=1;i<n;i++)
         {
             front[i]=nums[i]+front[i-1];
         }
        back[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
         {
             back[i]=back[i+1]+nums[i];
         }
        
        vector<int>ans(n,0);
        ans[0]=front[n-1]-(n*nums[0]);
        ans[n-1]=(n*nums[n-1])-back[0];
        for(int i=1;i<n-1;i++)
        {
            sum+=(back[i]-((n-i)*nums[i]));
            sum+=(((i+1)*nums[i])-front[i]);
            ans[i]=sum;
            sum=0;
        }
        return ans;
    }
};