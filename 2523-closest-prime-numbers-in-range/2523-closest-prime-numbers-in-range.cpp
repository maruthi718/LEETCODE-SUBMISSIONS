class Solution {
public:
    bool isprime(int n)
    {
        if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
      return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(isprime(i))
                ans.emplace_back(i);
        }
        int mini=INT_MAX;
        vector<int>res={-1,-1};
        for(int i=1;i<ans.size();i++)
        {
            int temp=ans[i]-ans[i-1];
            if(temp<mini)
            {
                res[0]=ans[i-1];
                res[1]=ans[i];
            }
            mini=min(mini,temp);
        }
        return res;
    }
};