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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t,*s,*f;
        t=f=s=head;
        if(head->next==NULL)
        {
            return NULL;
        }
        while(n>1)
        {
            f=f->next;
            n--;
        }
        while(f->next&&f)
        {
            f=f->next;
            t=s;
            s=s->next;
        }
        
        t->next=s->next;
        if(head==s){head=head->next;}
        delete s;
        return head;
    }
};