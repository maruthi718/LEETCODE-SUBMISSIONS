class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0,t=0;
            int temp;
        priority_queue<int>pq; 
        for(int i=0;i<nums.size();i++) pq.push(nums[i]);
        while(k--)
        {
            temp=pq.top();
            score+=pq.top();
            pq.pop();
            if(temp%3==0)
            pq.push(temp/3);
            else
            pq.push((temp/3)+1);
        }
        return score;
    }
};