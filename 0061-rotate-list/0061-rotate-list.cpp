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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)
            return head;
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
        //ListNode* ans=head;
        ListNode* start=head;
        ListNode* prev;
        ListNode* last;
        int len=0;
        while(head!=nullptr)
        {
            len++;
            last=head;
            head=head->next;
        }
        if(k==len)
            return start;
        int rot;
        if(k>len)
        {
            rot=k%len;
        }
        else
            rot=k;
        if(rot==0)
          return start;
        rot=len-rot; 
        last->next=start;
        for(int i=0;i<rot;i++)
        {
            prev=start;
            start=start->next;
        }
        prev->next=nullptr;
        return start;
    }
};