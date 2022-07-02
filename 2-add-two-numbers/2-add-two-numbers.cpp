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
        ListNode *h1,*h2,*head,*temp,*temp2,*shead;
        int m=0,t,n1=0,n2=0;
        h1=l1;
        h2=l2;
        while(h1)
        {
            n1++;
            h1=h1->next;
        }
        while(h2)
        {
            n2++;
            h2=h2->next;
        }
        h1=l1;
        h2=l2;
        if(n2>n1)
        {
            head=h2;
            shead=h1;
        }
        else
        {
            head=h1;
            shead=h2;
        }
        temp=head;
        temp2=head;
        while(h1&&h2)
        {
            m=(h1->val)+(h2->val)+m;
            t=m%10;
            m=m/10;
            temp->val=t;
            h1=h1->next;
            h2=h2->next;
            temp=temp->next;
        }
        
        while(m!=0&&temp)
        { 
            m=m+(temp->val);
            t=m%10;
            m=m/10;
            temp->val=t;
            temp2=temp;
            temp=temp->next;
        }
        if(m!=0&&temp==NULL)
        {
            shead->next=NULL;
            shead->val=m;
            while(temp2->next)
            {
                temp2=temp2->next;
            }
            temp2->next=shead;
        }
        return head;
        
    }
};