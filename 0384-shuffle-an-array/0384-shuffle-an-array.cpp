class Solution {
    
public:
    vector<int>org;
    int n;
    Solution(vector<int>& nums) {
        org=nums;
         n=org.size();
    }
    
    vector<int> reset() {
        return org;
    }
    
    vector<int> shuffle() {
        vector<int>shuffled=org;
        int back=n;
        for(int i=n-1;i>0;i--)
        {
            int j=rand()%back;
            swap(shuffled[i],shuffled[j]);
            back--;
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */