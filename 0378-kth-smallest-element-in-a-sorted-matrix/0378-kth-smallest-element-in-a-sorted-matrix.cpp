class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       // priority_queue<int,vector<int>,greater<int>>pq;
        priority_queue<int>pq;
        int col=matrix.size();
        int row=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
    }
};