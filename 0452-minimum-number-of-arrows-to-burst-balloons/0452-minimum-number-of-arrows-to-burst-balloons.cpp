bool compare(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }  

class Solution {
    
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),compare);
        int n=points.size(),cnt=1;
        vector<int>temp;
        temp=points[0];
       for(int i=1;i<n;i++)
       {
          if(temp[1]<points[i][0])
          {
              cnt++;
              temp=points[i];
          }
       }
       return cnt;
    }
};