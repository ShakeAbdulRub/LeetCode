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
        ListNode *t,*q,*h1,*p;
        int f=0;
        ListNode *n1= new ListNode();
        h1=n1;
        t=head;
        if(t==NULL)
        {
            return t;
        }
        if(t->next==NULL)
        {
            return t;
        }
        n1->next=t;
        t=t->next;
         q=p=n1;
        p=p->next;
        p->next=NULL;
        while(t)
        {
            if(t->val!=p->val)
            {
                if(f==0)
                {
                q=q->next;
                p->next=t;
                t=t->next;
                p=p->next;
                p->next=NULL;
                }
                else
                {
                    q->next=t;
                    p=t;
                    t=t->next;
                    p->next=NULL;
                    f=0;
                }
            }
            else
            {
                t=t->next;
                f=1;
            }
        }
        if(f==1)
        {
            q->next=NULL;
        }
       
         
        head=h1->next;
        return head;
        
    }
};