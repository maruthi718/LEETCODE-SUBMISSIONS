class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
        int sum=0;
        while(k--)
        {
            if(pq.top()%2==0)
            pq.push(pq.top()/2);
            else
                pq.push((pq.top()/2)+1);
            pq.pop();
        }
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};