class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==1) return true;
        
         int low=1,high=n;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            long long int k=mid*mid;
            if(k==n)
                return true;
            else if(k<n) low=mid+1;
            else high=mid-1;
        }
       return false; 
    }
};