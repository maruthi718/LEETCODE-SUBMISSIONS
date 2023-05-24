class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        int cnt=0;
        for(int i=0;i<time.size();i++)
        {
            if (time[i] % 60 == 0)
                cnt += mp[0];
           else
               cnt+=mp[60 - time[i]%60];
            mp[time[i]%60]++;
        }

        return cnt;
    }
};