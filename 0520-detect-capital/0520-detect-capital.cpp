class Solution {
public:
    bool detectCapitalUse(string w) {
        string temp=w;
        if(w.length()==1)
            return true;
        transform(w.begin(),w.end(),w.begin(),::toupper); 
         if(w==temp)
             return true;
        transform(w.begin(),w.end(),w.begin(),::tolower); 
        if(w==temp)
            return true;
        string r=temp.substr(1,w.length()-1);
        string p=r;
        transform(r.begin(),r.end(),r.begin(),::tolower); 
        char ch=temp[0]; 
        if(islower(ch))
            return false;
        else
        {
            if(p==r) return true;
        }
        return false;
    }
};