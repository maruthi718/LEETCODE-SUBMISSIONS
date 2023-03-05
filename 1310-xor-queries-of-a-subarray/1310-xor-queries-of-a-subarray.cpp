class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        int n=a.size(); 
        for(int i=1;i<n;i++)
        {
            a[i]^=a[i-1];
        }
        vector<int>v; 
        for(auto it:q)  
        { 
            int start=it[0],end=it[1]; 
            if(start==0) v.emplace_back(a[end]); 
            else
                v.emplace_back(a[end]^a[start-1]); 
        }
        return v;       
    }
};

