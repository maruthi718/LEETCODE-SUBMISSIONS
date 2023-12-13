class Solution {
public:
    string mergeAlternately(string m, string n) {
        string res;
        int i=0,j=0,k=0;
        while(i<m.size() && j<n.size())
        {
            res+=m[i];
            res+=n[j];
            i++;
            j++;
        }
        while(i<m.size()) 
        {
            res+=m[i];
            i++;
        }    
        while(j<n.size()) 
        {
            res+=n[j];
            j++;
        }
        return res;
    }
};