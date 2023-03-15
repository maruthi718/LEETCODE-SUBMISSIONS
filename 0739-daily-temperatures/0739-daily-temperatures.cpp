class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size(); 
        vector<int>ans(n,0); 
        stack<pair<int,int>>s; 
        for(int i=n-1;i>=0;i--)  
        { 
           while(!s.empty() && nums[i]>=s.top().first) s.pop(); 
            if(s.empty()) ans[i]=0; 
            else ans[i]=s.top().second-i; 
            s.push({nums[i],i}); 
        } 
         return ans; 
    } 
}; 