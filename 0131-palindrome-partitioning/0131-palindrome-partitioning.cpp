class Solution {
public:
    vector<vector<string>>ans;
    bool check(string k,int start,int end)
        {
            while(start<end)
            {
                if(k[start++]!=k[end--]) return false;
            }
            return true;
        }
    void f(int ind,string s,vector<string>&path)
    {
        if(ind==s.size())
        {
            ans.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(check(s,ind,i))
            {
                path.emplace_back(s.substr(ind,i-ind+1));
                f(i+1,s,path);
                path.pop_back();
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<string>path;
        f(0,s,path);
        return ans;
    }
};