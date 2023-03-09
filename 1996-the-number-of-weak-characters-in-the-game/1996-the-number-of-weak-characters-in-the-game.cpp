class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        int n=nums.size();
        int cnt=0,maxi=nums[n-1][1];
        for(int i=n-2;i>=0;i--)
        {
            if(maxi<=nums[i][1])
            {
                maxi=nums[i][1];
            }
            else
            {
               cnt++;  
            }
        }
        return cnt;
    } 
}; 

