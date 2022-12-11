class Solution {
public:
     vector<vector<int>>ans;
     void f(int ind,int target,vector<int>& arr,vector<int>& ds)
     {
           if(ind==arr.size())
           {
               if(target==0)
               ans.push_back(ds);  
               return;
           }
           if(arr[ind]<=target)
           {
               ds.push_back(arr[ind]);
               f(ind,target-arr[ind],arr,ds);
               ds.pop_back();
           }
           f(ind+1,target,arr,ds);
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<int>ds;
         //vector<vector<int>>ans;
         f(0,target,candidates,ds);
        cout<<ans.size();
         return ans;
    }
};