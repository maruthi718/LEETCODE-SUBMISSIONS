class Solution {
public:
    int cal(int n)
    {
        return (n*(n+1))/2;
    }
    int pivotInteger(int n) {
        int sum=(n*(n+1))/2;
        for(int i=1;i<=n;i++)
        {
            if(cal(i)==sum-cal(i)+i)
                return i;
        }
        return -1;
    }
};