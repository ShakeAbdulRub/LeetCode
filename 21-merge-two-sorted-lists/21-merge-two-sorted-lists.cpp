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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h1,*h2,*head,*t;
        h1=list1;
        h2=list2;
        if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        else
        {
            if(h1->val>h2->val)
            {
                head=h2;
                h2=h2->next;
            }
            else
            {
                head=h1;
                h1=h1->next;
            }
            t=head;
            while(h1!=NULL&&h2!=NULL)
            {
                if(h1->val<h2->val)
                {
                    t->next=h1;
                    t=t->next;
                    h1=h1->next;
                    }
                else
                {
                    t->next=h2;
                    t=h2;
                    h2=h2->next;
                }
            }
            if(h1)
            {
                t->next=h1;
            }
            else
            {
                t->next=h2;
            }
            return head;
        }
    }
};