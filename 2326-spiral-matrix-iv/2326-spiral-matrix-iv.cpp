/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>> ans(m , vector<int> (n,-1));
        int t=0,b=m-1,l=0,r=n-1;
        int d=0;
        while(t<=b && l<=r)
        {
            if(d%4==0)  
            {
              for(int i=l;i<=r;i++)
              {
                  if(!head) return ans;
                  ans[t][i]=head->val;
                  head=head->next;
              }
                t++;
                d++;
            }
           else if(d%4==1)  
            {
              for(int i=t;i<=b;i++)
              {
                  if(!head) return ans;
                  ans[i][r]=head->val;
                  head=head->next;
              }
                r--;
                d++;
            } 
             else if(d%4==2)  
            {
              for(int i=r;i>=l;i--)
              {
                  if(!head) return ans;
                  ans[b][i]=head->val;
                  head=head->next;
              }
                b--;
                d++;
            } 
            else if(d%4==3)  
           {
                 for(int i=b;i>=t;i--)
                 {
                   if(!head) return ans;
                   ans[i][l]=head->val;
                   head=head->next;
                 }
                l++;
                d++;
           } 
        }
        return ans;
    }
};