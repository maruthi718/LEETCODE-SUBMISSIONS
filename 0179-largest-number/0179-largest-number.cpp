
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.emplace_back(to_string(nums[i]));
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(ans[i]+ans[j]<ans[j]+ans[i]) swap(ans[i],ans[j]);
        }
        string res;
        for(int i=0;i<n;i++)
            res+=ans[i];
        if(res[0]=='0') return "0";
        return res;
    }
};
