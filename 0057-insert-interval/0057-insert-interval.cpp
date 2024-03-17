class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& x) {
        nums.push_back(x);
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        temp=nums[0];
        for(int i=1;i<nums.size();i++)
        {
                if(nums[i][0]>temp[1])
                {
                    ans.push_back(temp);
                    temp=nums[i];
                 }
                else
                temp[1]=max(nums[i][1],temp[1]);
        } 
        ans.push_back(temp);  
        return ans;  
    }
};