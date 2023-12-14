class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size(),maxi=INT_MIN;
        vector<bool>res(n,false);
        for(int i=0;i<n;i++){
             maxi=max(maxi,candies[i]);
        }
        //cout<<maxi;
          for(int i=0;i<n;i++)  
          {
              if(candies[i]+extraCandies >= maxi) res[i]=true;
          }
        return res;
    }
};