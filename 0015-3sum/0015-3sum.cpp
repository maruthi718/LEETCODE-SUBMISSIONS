class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        long n=nums.size(); 
        vector<vector<int>>ans;
        int k,j;
        if(n<3)
        return {{}};
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
             j=i+1;
             k=n-1;
            if(i>0 && nums[i-1]==nums[i]) 
                continue;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
                j++;
            else if(sum>0)
                k--;
            else
            {
                vector<int>q(3,0); 
                    q[0]=nums[i]; 
                    q[1]=nums[j]; 
                    q[2]=nums[k]; 
                 ans.emplace_back(q); 
                while(j<k && nums[j+1]==q[1])
                    j++;
                while(j<k && nums[k-1]==q[2])
                    k--;
                j++;
                k--;  
             }
        } 
           
        }
       return ans;
    }
};