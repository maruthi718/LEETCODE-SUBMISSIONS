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
        if(head==nullptr || head->next==nullptr) return head;
        stack<ListNode*>s;
         ListNode* prev=nullptr;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        s.push(prev);
        prev=prev->next;
       while(prev!=nullptr)
       {
          if(prev->val >= s.top()->val)
              s.push(prev);
           prev=prev->next;
       }
       ListNode* curr=s.top();
        ListNode* ans=s.top();
        s.pop();
        while(!s.empty())
        {
            curr->next=s.top();
            curr=s.top();
            s.pop();
        }
        curr->next=nullptr;
        return ans;
    }
};

