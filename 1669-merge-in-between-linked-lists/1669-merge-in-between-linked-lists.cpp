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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* end,*start=list2,*prev,*head=list1;
        int cnt=-1;
        while(list2)
        {
            end=list2;
            list2=list2->next;
        }
        while(list1)
        {
            cnt++;
            if(cnt==a && a==b)
            {
                prev->next=start;
                end->next=list1->next;
                break;
            }
            else if(cnt==a)
            {
                prev->next=start;
            } 
            else if(cnt==b)
            {
                end->next=list1->next;
                break;
            }
            prev=list1;
            list1=list1->next;
        }
        return head;
    }
};