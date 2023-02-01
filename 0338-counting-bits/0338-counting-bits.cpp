class Solution {
public:
    int f(int k)
    {
        int cnt=0;
        while(k)
        {
            cnt++;
            k&=k-1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
            v.emplace_back(f(i));
        return v;
    }
};