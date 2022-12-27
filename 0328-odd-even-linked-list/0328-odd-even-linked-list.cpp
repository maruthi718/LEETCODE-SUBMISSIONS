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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* f=head;
        if(head==nullptr || head->next==nullptr ) return head;
        ListNode* s=head->next;
        ListNode* temp=s,*last,*prev;
        while(f->next!=nullptr && s->next!=nullptr)
        {
    
                f->next=f->next->next;
                f=f->next;
                s->next=s->next->next;
                s=s->next;
        }
        f->next=temp;
        return head;
    }
};