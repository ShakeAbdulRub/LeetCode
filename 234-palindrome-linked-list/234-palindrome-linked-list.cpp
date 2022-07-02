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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return true;
        }
        else
        {
           ListNode *h1,*h2,*fast,*curr,*prev,*fur;
            prev=NULL;
            curr=fast=head;
            while(1)
            {
                if(fast==NULL)
                {
                    h1=prev;
                    h2=curr;
                    break;
                }
                if(fast->next==NULL)
                {
                    h1=prev;
                    h2=curr->next;
                    break;
                }
                fast=fast->next->next;
                fur=curr->next;
                curr->next=prev;
                prev=curr;
                curr=fur;
                
            }
           while(h1||h2)
           {
               if(h1->val!=h2->val)
               {
                   return false;
               }
               h1=h1->next;
               h2=h2->next;
           }
            return true;
        }
        
    }
};