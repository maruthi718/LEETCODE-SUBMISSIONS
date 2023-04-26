class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
               ans[i]=nums[i];
               s.push(nums[i]);
            }
            else if(nums[i]<s.top())
            {
                while(!s.empty() && nums[i]<s.top())
                {
                    s.pop();
                }
                if(!s.empty())
                ans[i]=nums[i]-s.top();
                else
                    ans[i]=nums[i];
                s.push(nums[i]);
            }
            else
            {
                ans[i]=nums[i]-s.top();
                s.push(nums[i]);
            }
        }
        return ans;
    }
};