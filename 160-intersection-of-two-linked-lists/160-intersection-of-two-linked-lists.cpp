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
        ListNode *t1,*t2;
        t1=headA;
        t2=headB;
        int n1=0,n2=0,n;
        while(t1)
        {
            n1++;
            t1=t1->next;
        }
        while(t2)
        {
            n2++;
            t2=t2->next;
        }
        t1=headA;
        t2=headB;
        if(n2>n1)
        {
            n=n2-n1;
            while(n)
            {
                t2=t2->next;
                n--;
            }
        }
        if(n1>n2)
        {
            n=n1-n2;
            while(n)
            {
                t1=t1->next;
                n--;
            }
        }
        while(t1&&t2)
        {
            if(t1==t2)
            {
                return t1;
            }
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
    }
};