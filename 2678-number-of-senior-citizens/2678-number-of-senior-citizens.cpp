class Solution {
public:
    int countSeniors(vector<string>& details) {
       int ans=0,temp;
        for(auto s:details)
        {
            temp=(stoi(s.substr(11,2)));
            if(temp>60)
                ans++;
        }
        return ans;
    }
};

