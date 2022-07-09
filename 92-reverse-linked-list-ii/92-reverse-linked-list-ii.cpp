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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp=head,*l,*r,*linktome;
        int le=left;
        if(temp->next==NULL&&left==right)
        {
            return temp;
        }
        while(left>1)
        {
            left--;
            right--;
            linktome=temp;
            temp=temp->next;
        }
        l=temp;
        while(right>1)
        {
            right--;
            temp=temp->next;
        }
        r=temp;
        if(le==1)
        {
            head=reverse(l,r->next);
        }
        else
        {
           linktome->next= reverse(l,r->next);
        }
        return head;
        
    }
    ListNode* reverse(ListNode *curr,ListNode *till)
    {
        ListNode *prev=till,*fur;
        while(curr!=till)
        {
            fur=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fur;
        }
        return prev;
    }
};