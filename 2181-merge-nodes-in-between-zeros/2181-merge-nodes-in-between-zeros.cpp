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
        ListNode* dummy=head->next,*ans=dummy;
        head=head->next;
        int sum=0;
        while(head)
        {
            if(head->val==0)
            {
                dummy->val=sum;
                if(!head->next)
                    break;
                dummy->next=head;
                dummy=head;
                sum=0;
            }
            sum+=head->val;
            head=head->next;
        }
        dummy->next=nullptr;
        return ans;
    }
};