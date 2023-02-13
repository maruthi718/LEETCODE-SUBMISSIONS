class Solution {
public:
    double distance(int x,int y)
    {
        int res;
        res=(x*x)+(y*y);
        return sqrt(res);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        map<double,vector<vector<int>>>mp;
        for(int i=0;i<points.size();i++)
        {
            double d=distance(points[i][0],points[i][1]);
            mp[d].push_back(points[i]);
        }
        for(auto it:mp)
        {
            for(auto i:it.second)
            {
                ans.emplace_back(i);
                 if(ans.size()==k) break;
            }
            if(ans.size()==k) break;
        }
      return ans;
    }
};