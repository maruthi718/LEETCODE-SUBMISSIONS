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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
       ListNode* slow=head;
       ListNode* fast=head->next;
        while(fast!=nullptr)
        {
            swap(slow->val,fast->val);
            if(fast->next==nullptr)
                break;
            slow=slow->next->next;
            fast=fast->next->next;
        }
        return head;
    }
};