class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int n=grades.size();
        int k=n;
        if(n==1 || n==2)
        return 1;
        int temp=1,cnt=0;
        n-=temp;
        cnt++;
        for(int i=2;i<k;i++)
        {
           
            if(n<=temp) break; 
            else  
            {
                cnt++;
                n-=i;
                temp=i;
            } 
        }
        return cnt;
    }
};