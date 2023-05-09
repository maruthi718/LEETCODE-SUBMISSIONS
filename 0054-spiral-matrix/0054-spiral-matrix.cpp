class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int t=0,b=m-1,l=0,r=n-1;
        int d=0;
        while(t<=b && l<=r)
        {
            if(d%4==0)  
            {
              for(int i=l;i<=r;i++)
                  ans.push_back(matrix[t][i]);
                t++;
                d++;
            }
           else if(d%4==1)  
            {
              for(int i=t;i<=b;i++)
                  ans.push_back(matrix[i][r]);
                r--;
                d++;
            }
             else if(d%4==2)  
            {
              for(int i=r;i>=l;i--)
                  ans.push_back(matrix[b][i]);
                b--;
                d++;
            }
            else if(d%4==3)  
           {
              for(int i=b;i>=t;i--)
                  ans.push_back(matrix[i][l]);
                l++;
                d++;
           }
            
        }
        return ans;
    }
};