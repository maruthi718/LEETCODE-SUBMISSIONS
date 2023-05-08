class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        long m=mat.size();
        long sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j || i+j==m-1)
                    sum+=mat[i][j];
            }
        } 
        return sum; 
    }
};