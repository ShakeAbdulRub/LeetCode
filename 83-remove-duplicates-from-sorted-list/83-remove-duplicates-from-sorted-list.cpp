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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *slow,*fast;
        slow=fast=head;
        if(fast)
        {
        fast=fast->next;
        while(fast)
        {
            if(slow->val==fast->val)
            {
                slow->next=fast->next;
                fast=fast->next;
            }
            else
            {
                slow=slow->next;
                fast=fast->next;
            }
            
        }
        }
        return head;
    }
};