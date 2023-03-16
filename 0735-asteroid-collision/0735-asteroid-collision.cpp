class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size(),flag=0;
        stack<int>s;
        vector<int>ans;
        s.push(nums[0]);
        for(int i=1;i<n;i++)
        {
            if(!s.empty() && (nums[i]<0 && s.top()>0) )
            {
                if(abs(nums[i])==s.top())
                    s.pop();
                else
                {
                    while(!s.empty() && abs(nums[i]) > s.top())
                    {
                        s.pop();
                        if(!s.empty() && abs(nums[i])==s.top())
                        {
                            s.pop();
                            flag=1;
                            break;
                        }
                        if(!s.empty() && s.top()<0) 
                        {
                            s.push(nums[i]);
                            break;
                        }
                    }
                    if(s.empty() && flag==0)
                    s.push(nums[i]);
                    if(flag==1) flag=0;
                }
               
            }
            else
                s.push(nums[i]);
        }
        while(!s.empty())
        {
            ans.emplace_back(s.top());
            s.pop();
        }
            reverse(ans.begin(),ans.end());
        return ans;
    }
};