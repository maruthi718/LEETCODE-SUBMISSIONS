class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
       unordered_map<int, int> mp;
    int count = 0;
    int max_length = 0; 
    mp.emplace(0,-1);  
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 0)
            count--;  
        else
            count++;   
        if (mp.find(count) != mp.end()) 
        {
            max_length = max(max_length, i - mp[count]); 
        } 
        else 
        {
            mp.emplace(count,i);  
        } 
    }    
        return max_length; 
    } 
}; 


