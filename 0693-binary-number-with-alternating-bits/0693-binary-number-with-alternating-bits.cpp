class Solution {
public:
    bool hasAlternatingBits(int n) {
       unsigned int k=(n ^ (n>>1));
        if((k & (k+1))==0)
            return true;
        return false;
    }
};