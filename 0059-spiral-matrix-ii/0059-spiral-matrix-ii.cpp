class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix;
        int k=1;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(k);
                k++;
            }
            matrix.push_back(temp);
        }
        vector<vector<int>>res;
        vector<int>ans;
        int m=matrix.size();
        int p=matrix[0].size();
        int t=0,b=m-1,l=0,r=p-1;
        int d=0,cnt=1;
        while(t<=b && l<=r)
        {
            if(d%4==0)  
            {
              for(int i=l;i<=r;i++)
              {
                   matrix[t][i]=cnt;
                  cnt++;
              }
                t++;
              d++;
            }
           else if(d%4==1)  
            {
              for(int i=t;i<=b;i++)
              {
                  matrix[i][r]=cnt;
                  cnt++;
              }
                r--;
              d++;
            }
             else if(d%4==2)  
            {
              for(int i=r;i>=l;i--)
              {
                  matrix[b][i]=cnt;
                  cnt++;
              }
                 b--;
              d++;
            }
            else if(d%4==3)  
           {
              for(int i=b;i>=t;i--)
              {
                  matrix[i][l]=cnt;
                  cnt++;
              }
                l++;
              d++;
           }
            
        }
        return matrix;
    }
};