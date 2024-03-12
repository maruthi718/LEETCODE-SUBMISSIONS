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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next,*ans=temp,*curr=temp;
        head=head->next;
        int sum=0;
        while(head)
        {
            if(head->val==0)
            {
                curr->next=head->next;
                temp->val=sum;
                sum=0;
                if(head->next!=nullptr)
                {
                    temp=head->next;
                    curr=temp;
                    sum=0;
                }
                  
            }
            else
               sum+=head->val;
           head=head->next; 
           
        }
        
        return ans;
    }
};