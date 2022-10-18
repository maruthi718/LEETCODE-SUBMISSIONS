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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int k=0;
        if(head->next==nullptr) return true;
        if(head->next->next==nullptr)
        {
            if(head->val==head->next->val)
                return true;
            else
                return false;
        }
        while(fast!=nullptr && fast->next!=nullptr)
        {
            k++;
            slow=slow->next;
            fast=fast->next->next;
        }
        //cout<<k;
        /*if(k%2!=0)
            slow=slow->next;*/
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(slow!=nullptr)
        {
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        slow=prev;
        while(slow!=nullptr)
        {
            if(head->val==slow->val)
            {
                head=head->next;
                slow=slow->next;
            }
            else
                return false;
        }
        return true;
    }
};