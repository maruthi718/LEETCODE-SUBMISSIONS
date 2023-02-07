class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1 && nums[0]==0)
            return 0;
        if(n==1)
             return 1;
       map<int,int>mp;
        int k=0,cnt=0;
       for(auto it:nums)
           mp[it]++;
       for(auto it:mp) 
       {
           for(int i=0;i<it.second;i++)
           {
               nums[k]=it.first;
               k++;
           }
       }
         for(int i=0;i<n;i++)
         {
           if(n-i<=nums[i]) return n-i;
         }
        return 0;
    }
};