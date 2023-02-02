class Solution {
public:
    bool judgeSquareSum(int n) {
         int low=0,high=sqrt(n);
         high=(int) high;
        long long int x,y;
         while(low<=high)
         {
                 x=low*low;
                 y=high*high;
             if(x+y==n) return true;
             else if(x+y < n) low++;
             else high--;
         }
        return 0;
    }
};