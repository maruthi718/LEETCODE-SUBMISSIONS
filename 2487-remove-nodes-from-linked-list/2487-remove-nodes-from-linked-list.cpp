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
    ListNode* removeNodes(ListNode* head) {
        ListNode* prev=NULL,*temp=head,*ans;
        while(temp!=NULL)
        {
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        head=prev;
        stack<ListNode*>s;
        s.push(head);
        head=head->next;
        while(head!=nullptr)
        {
           if(s.top()->val <= head->val) 
           {
             s.push(head) ;
           }
            head=head->next;
        }
        head=s.top();
        ans=head;
        s.pop();
        while(!s.empty())
        {
            head->next=s.top();
            head=s.top();
            s.pop();
        }
        head->next=nullptr;
        return ans;
    }
};