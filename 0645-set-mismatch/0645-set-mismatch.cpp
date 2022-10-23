class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
       long n= nums.size();
       for(int i=0;i<n-1;i++)
       {
           if(nums[i]==nums[i+1]) 
           {
               ans.emplace_back(nums[i]); 
                    if(nums[n-1]==n-1)
                       ans.emplace_back(n); 
                   else if(i+1<nums[i])
                   {
                       if(nums[0]!=1)
                       {
                          ans.emplace_back(1); 
                          break;
                       }
                        for(int j=0;j<i;j++)
                       {
                          if(nums[j]+1!=nums[j+1])
                          {
                            ans.emplace_back(nums[j]+1); 
                             break; 
                          }   
                       }
                   }        
               else
               {
                   for(int j=i+1;j<n-1;j++)
                   {
                       
                       if(nums[j]+1!=nums[j+1])
                       {
                            ans.emplace_back(nums[j]+1); 
                       break; 
                       }
                   }
               }
               break;
           }
       }
       
        return ans; 
    
    }
};