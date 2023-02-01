class Solution {
public:
    int f(vector<int>& temp,int k)
    {
        int res=0;
        for(int i=0;i<k;i++) res^=temp[i];
        return res;
    }
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        if(!(n&1) && !(m&1))
        {
            return 0;
        }
        if(n%2==0 && m%2)
        {
            return f(nums1,n);
        }
        if(n%2 && m%2==0)
        {
            return f(nums2,m);
        }
        return f(nums1,n)^f(nums2,m);
    }
};