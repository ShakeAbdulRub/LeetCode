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
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode *temp1,*temp2,*s,*f,*p,*t;
        temp1=f=s=head;
        if(temp1->next==NULL)
        {
            v.push_back(temp1->val);
        }
        else{
        while(f&&f->next)
        {   p=s;
            s=s->next;
            f=f->next->next;
        }
        if(f==NULL)
        {  p->next=NULL;
            temp2=reverse(s);
        }
        else
        {
            
            temp2=reverse(s->next);
            s->next=NULL;
        }
        while(temp1&&temp2)
        {   
            s=temp1->next;
            f=temp2->next;
            t=temp1->next;
            temp1->next=temp2;
            temp2->next=t;
            temp1=s;
            temp2=f;
            
        }
            temp1=head;
            while(temp1)
            {
                v.push_back(temp1->val);
                temp1=temp1->next;
            }
        }
        //for(int i=0;i<v.size();i++)
       // {
       //     cout<<v[i];
       // }
    }
    ListNode* reverse(ListNode *curr)
    {
        if(curr->next==NULL)
        {
            return curr;
        }
        ListNode *prev=NULL,*fur;
        while(curr)
        {
            fur=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fur;
        }
        return prev;
    }
};