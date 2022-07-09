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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1,*t2,*h,*t;
        int n=0,p=0;
        l1=t1=reverse(l1);
        l2=t2=reverse(l2);
        h=t = new ListNode();
        while(t1&&t2)
        {
            n=n+t1->val+t2->val;
                p=n%10;
                n=n/10;
            t->val=p;
            t->next=t1->next&&t2->next? new ListNode():NULL;
            if(t->next){ t=t->next;}
            t1=t1->next;
            t2=t2->next;
        }
        t1=t1!=NULL?t1:t2;
        if(t1)
        {
            t->next= new ListNode();
            t=t->next;
            while(t1)
            {
                n=n+t1->val;
                    p=n%10;
                    n=n/10;

           t->val=p;
            t->next=t1->next? new ListNode():NULL;
                if(t->next){ t=t->next;}
                t1=t1->next;
            }
        }
        if(n!=0)
        {
            t->next=new ListNode();
            t=t->next;
            t->val=n;
        }
      h= reverse(h);
        return h;
       }
    ListNode* reverse(ListNode *curr)
    {
        ListNode *prv=NULL,*fur;
        while(curr)
        {
            fur=curr->next;
            curr->next=prv;
            prv=curr;
            curr=fur;
            
        }
        return prv;
    }
};