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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int>mp;
        ListNode * ptr=head;
        while(ptr!=nullptr)
        {
            if(mp.find(ptr)==mp.end())
            {
                mp[ptr]=ptr->val;
                ptr=ptr->next;
            } 
            else
                return true;
        }
        return false;
    }
};