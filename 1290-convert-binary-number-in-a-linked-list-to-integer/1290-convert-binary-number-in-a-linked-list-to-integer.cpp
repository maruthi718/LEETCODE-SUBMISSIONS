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
    int getDecimalValue(ListNode* head) {
        ListNode* s=head;
        string ans; 
        while(s!=nullptr)
        {
            ans+=to_string(s->val);
            s=s->next;
        }
        int res=0,pv=1;
        for(int i=ans.size()-1;i>=0;i--)
        {
            res+=pv*((int) ans[i]-48);
            pv*=2;
        }
        return res;
    }
};