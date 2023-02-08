class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        int cnt=1;
        while(cnt!=k)
        {
            pq.pop();  
            cnt++; 
        }
        return pq.top(); 
    }
};