class Solution {
public:
    stack<int>s; 
    int del(int k)
    {
       while(k>s.top())
       {
             s.pop(); 
           if(s.size()==0) break;
       }
       return s.size(); 
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size(); 
        int m=nums1.size(); 
        unordered_map<int,int>mp; 
        for(int i=n-1;i>=0;i--) 
        {
            if(s.empty()) 
            {
                s.push(nums2[i]);
                mp.emplace(nums2[i],-1);
            }
            else if(nums2[i]<s.top())
            {
                 mp.emplace(nums2[i],s.top());
                s.push(nums2[i]);
            }
            else
            {
                int x=del(nums2[i]);
                if(x==0) 
                   mp.emplace(nums2[i],-1);
                else
                    mp.emplace(nums2[i],s.top());
                s.push(nums2[i]); 
            }    
         }
        for(int i=0;i<m;i++)
        {
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
    }
};