class Solution {
public:
    
    vector<int> digit(int n)
    {
        vector<int>temp(10,0);
        int rem;
        while(n>0)
        {
            rem=n%10;
            temp[rem]++;
            n/=10;
        }
        return temp;
    }
    bool reorderedPowerOf2(int n) {
        vector<int>org=digit(n);
        for(int i=0;i<32;i++)
        {
            if(org==digit(1<<i)) return true; 
        }
        return false;
    }
};