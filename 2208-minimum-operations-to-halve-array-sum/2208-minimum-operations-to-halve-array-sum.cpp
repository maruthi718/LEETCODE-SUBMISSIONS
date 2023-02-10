class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum=0;
        priority_queue<double>pq;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            pq.push(nums[i]);
        }
        //(nums.begin(),nums.end());
        double temp,curr=sum;
        int cnt=0;
        while(!pq.empty())
        {
            temp=pq.top()/2;
            pq.pop();
            pq.push(temp);
            curr-=temp;
            cnt++;
            if(curr<=sum/2)
                break;
        }
        return cnt;
    }
};