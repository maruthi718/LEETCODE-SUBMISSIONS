class Solution {
public:
    int maxArea(vector<int>& h) {
       long n=h.size();
        int area=0;
        int s=0,e=n-1;
        int len,wid;
        int maxi=INT_MIN;
        while(s<e)
        {
            wid=e-s;
            len=min(h[s],h[e]);
            area=wid*len;
            maxi=max(maxi,area);
            if(h[s]<=h[e])
                    s++;
            else
                e--;
        }
        return maxi;
    }
};