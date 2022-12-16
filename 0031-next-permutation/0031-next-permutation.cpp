class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int x=-1,y=-1;
        for(int i=a.size()-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
                 x=i;
               break;
            }
                
        }
        if(x==-1)
            reverse(a.begin(),a.end());
        else
        {
           for(int i=a.size()-1;i>x;i--)
         {
            if(a[i]>a[x])
            {
                y=i;
                break;
            }
                
         }
            //cout<<x<<y;
            swap(a[x],a[y]);
            reverse(a.begin()+x+1,a.end());
        }
        
        
    }
};