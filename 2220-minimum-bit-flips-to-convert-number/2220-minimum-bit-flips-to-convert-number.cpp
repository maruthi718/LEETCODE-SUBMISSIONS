class Solution {
public:
    int minBitFlips(int start, int goal) {
       start=start^goal;
       int cnt=0;
        while(start)
        {
            start&=(start-1);
            cnt++;
        }
        return cnt;
    }
};

