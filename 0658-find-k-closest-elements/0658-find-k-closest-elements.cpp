class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue<vector<int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({abs(nums[i]-x),nums[i]});
            while(pq.size()>k)
                pq.pop();
        }
        vector<int>ans;
        while(!pq.empty())
        {
            vector<int>v=pq.top();
            ans.emplace_back(v[1]);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};