/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0,k=0;
        ListNode *first=headA;
        ListNode *second=headB;
        ListNode *t1,*t2;
        if(headA==headB)
            return headA;
        while(first!=nullptr)
        {
            l1++;
            t1=first;
            first=first->next;
        }
        while(second!=nullptr)
        {
            l2++;
            t2=second;
            second=second->next;
        }
        if(t1!=t2)
        {
              return nullptr;
        }
         // cout<<l1<<l2;
        int diff=abs(l1-l2);
        int maxi=max(l1,l2);
        
        if(l1==maxi)
        {
            first=headA;
            second=headB;
        }
        else
        {
           first=headB;
            second=headA; 
        }
        while(first!=nullptr && second!=nullptr)
        { 
            if(l1!=l2)
            {
               k++;
               first=first->next; 
            }
            if(k==diff)
            {
                while(first!=nullptr && second!=nullptr)
                {
                    if(second==first)
                    {
                        return first;
                    }  
                    else
                    {
                        first=first->next;
                        second=second->next;
                    }
                }
            }
        }
        return nullptr;
    }
};