class Solution {
public:
    int distance(int x,int y)
    {
        int res;
        res=(x*x)+(y*y);
        return res;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<vector<int>>pq;
        for(int i=0;i<points.size();i++)
        {
            int d=distance(points[i][0],points[i][1]);
            pq.push({d,points[i][0],points[i][1]});
                     if(pq.size()>k)
                         pq.pop();
        }
        while(!pq.empty())
        {
            vector<int>temp=pq.top();
            ans.push_back({temp[1],temp[2]});
            pq.pop();
        }
      return ans;
    }
};