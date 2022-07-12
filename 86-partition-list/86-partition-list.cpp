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
    ListNode* partition(ListNode* head, int x) {
        ListNode *h1,*h2,*t1,*t2,*t;
        ListNode *n1= new ListNode();
        ListNode *n2= new ListNode();
        h1=t1=n1;
        h2=t2=n2;
        t=head;
        if(t==NULL)
        {
               return head;
        }
        if(t->next==NULL)
        {
            return head;
        }
        while(t)
        {
            if(t->val<x)
            {
                t1->next=t;
                t=t->next;
                t1=t1->next;
                t1->next=NULL;
            }
            else
            {
                t2->next=t;
                t=t->next;
                t2=t2->next;
                t2->next=NULL;
            }
        }
        if(h1->next&&h2->next)
        {
            h1=h1->next;
            t1->next=h2->next;
            head=h1;
        }
        else if(h1->next)
        {
            head=h1->next;
        }
        else
        {
            head=h2->next;
        }
        
        
      
        return head;
    }
};