class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue<vector<int>>pq; 
        for(int i=0;i<nums.size();i++)
        {
            pq.push({abs(nums[i]-x),nums[i]}); 
            if(pq.size()>k) 
                pq.pop(); 
        } 
        vector<int>ans; 
        while(!pq.empty()) 
        {
            ans.emplace_back(pq.top()[1]); 
            pq.pop(); 
        }
        sort(ans.begin(),ans.end()); 
        return ans; 
    } 
};

