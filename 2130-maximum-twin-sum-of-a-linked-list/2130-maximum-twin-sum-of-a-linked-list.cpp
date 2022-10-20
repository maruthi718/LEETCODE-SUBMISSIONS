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
    int pairSum(ListNode* head) {
        int ans=0,sum=0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* nxt=nullptr;
        while(slow!=nullptr)
        {
            nxt=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nxt;
        }
        slow=prev;
        while(slow!=nullptr)
        {
            sum=(slow->val+head->val);
            ans=max(sum,ans);
            head=head->next;
            slow=slow->next;
        }
        return ans;
    }
};