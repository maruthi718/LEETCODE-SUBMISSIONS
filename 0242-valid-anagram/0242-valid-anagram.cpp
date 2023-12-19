class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        long n=s.length();
        if(s.length()!=t.length())
            return false;
        for(auto it:s)
            mp1[it]++;
        for(auto it:t)
            mp1[it]--;
        for(auto it:mp1)
        {
            if(it.second!=0) return false;
        }
        return true;
    }
};