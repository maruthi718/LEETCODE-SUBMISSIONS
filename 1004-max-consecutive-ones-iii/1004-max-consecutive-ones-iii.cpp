class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=INT_MIN,cnt=0,start=-1,curr=0; 
        vector<int>temp; 
        for(int i=0;i<nums.size();i++) 
        {
            if(nums[i]==0)
            {
                if(k==0)
                    start=i;
                else
                {
                    cnt++; 
                    temp.emplace_back(i); 
                }
            }
            if(cnt>k)
            {
                if(nums[temp[curr]+1]==1)
                {
                    start=temp[curr];   
                    curr++;
                }
                else
                {
                    start=temp[curr+1]-1;  
                    curr++;
                }
                cnt--;
            }          
            ans=max(ans,i-start); 
        }
        return ans; 
    }
};