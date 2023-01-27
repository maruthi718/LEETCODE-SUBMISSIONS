
class Solution {
public:
    static bool cmp(string &a,string &b)
    {
        if(a+b > b+a)
         return true;
      return false;
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.emplace_back(to_string(nums[i]));
        }
       sort(ans.begin(),ans.end(),cmp);
        string res;
        for(int i=0;i<n;i++)
            res+=ans[i];
        if(res[0]=='0') return "0";
        return res;
    }
};
