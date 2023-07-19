class Solution {
public:
   static bool cmp(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
        
    }
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size(),cnt=0;
        sort(nums.begin(),nums.end(),cmp);
        int prev=nums[0][1];
        for(int i=1;i<n;i++)
        {
            if(prev>nums[i][0])
                cnt++;
            else
                prev=nums[i][1];
        }
        return cnt; 
    }
};