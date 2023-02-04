class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool>prime(n+1,true);
        for(long long int i=2;i<n;i++)
        {
            if(prime[i])
            {
                cnt++;
                for(long long int j=i*i;j<=n;j+=i)
                    prime[j]=false;
            }
        }
        return cnt;
    }
};

