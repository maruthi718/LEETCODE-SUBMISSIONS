class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int cnt=0;
        nums.insert(nums.begin(),0);
        nums.push_back(0);
     
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]==0 && nums[i-1]==0 && nums[i+1]==0)
            {
                nums[i]=1;
                cnt++;
                if(cnt>=n) return true;
            }
        }
       
        if(cnt>=n) return true; 
        return false;  
    }
};

