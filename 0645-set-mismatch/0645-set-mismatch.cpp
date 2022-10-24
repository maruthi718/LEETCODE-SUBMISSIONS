class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int n=nums.size();
        int actsum=(n*(n+1)/2);
        int sum=0,x;
        for(int i=0;i<n;i++) 
        {
            sum+=nums[i];
           mp[nums[i]]++;
            if(mp[nums[i]]==2)
            x=nums[i];
                
        }
        return {x,actsum-sum+x}; 
    }
};