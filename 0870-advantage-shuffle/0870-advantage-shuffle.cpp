class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<pair<int, int>> pq;
        sort(nums1.begin(),nums1.end());         
        vector<int>ans(nums1.size(),0);   
        for(int i=0;i<nums2.size();i++)
        {
            pq.push({nums2[i],i});
        }
        // while(!pq.empty())
        // {
        //    cout<<pq.top().first<<"\n";
        //     pq.pop();
        // }
        int f=0,l=nums1.size()-1;
        while(!pq.empty())
        {
            if(nums1[l]>pq.top().first)
            {
                ans[pq.top().second]=nums1[l--];
                pq.pop();
            }
            else
            {
                ans[pq.top().second]=nums1[f++];
                pq.pop();
            }
        }
        return ans;      
    }
};