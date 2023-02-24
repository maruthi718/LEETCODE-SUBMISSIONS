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
    vector<int> nextLargerNodes(ListNode* head) {
        if(head->next==nullptr) return {0};
        ListNode* prev=nullptr;
        ListNode* temp=head;
        int n=0;
        while(temp!=nullptr)
        {
            n++;
            temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        stack<ListNode*>st;
        vector<int>ans(n,0);
        ListNode* curr=prev;
        while(curr){
            while(!st.empty() && st.top()->val<=curr->val){ 
                st.pop();
            }
            if(!st.empty())
            {
                 ans[n-1]=st.top()->val; 
            }
            n--; 
            st.push(curr);  
            curr=curr->next; 
        }
        return ans; 
    }
};