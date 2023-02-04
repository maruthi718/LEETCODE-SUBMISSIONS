class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int k=n;
        return k && (!(k&(k-1)));
    }
};