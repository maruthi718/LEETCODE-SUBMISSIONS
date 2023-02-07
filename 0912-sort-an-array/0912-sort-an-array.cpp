class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      map<int,int>mp;
        int k=0;
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
        return nums;
    }
};