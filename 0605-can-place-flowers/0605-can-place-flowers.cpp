class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int cnt=0;
        if(nums.size()==1)
        {
            if(nums[0]==0 && n==1) return true;
            else if(nums[0]==0 && n==0) return true;
            else if(nums[0]==1 && n==0) return true;
        }
         if(nums[0]==0 && nums[1]==0) cnt++;
        nums[0]=1;
        if(cnt>=n) return true;
     
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]==0 && nums[i-1]==0 && nums[i+1]==0)
            {
                nums[i]=1;
                cnt++;
                if(cnt>=n) return true;
            }
        }
        if(nums[nums.size()-1]==0 && nums[nums.size()-2]==0) cnt++;
        if(cnt>=n) return true;
        return false;  
    }
};

