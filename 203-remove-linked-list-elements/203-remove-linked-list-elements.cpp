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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp1,*temp2;
        temp1=head;
      if(head)
      {
          while(temp1&&temp1->val==val)
          {
              temp1=temp1->next;
          }
          head=temp1;
          if(head)
          {
          temp2=temp1;
          temp1=temp1->next;
          while(temp1)
          {
              if(temp1->val==val)
              {
                temp2->next=temp1->next;
                  temp1=temp1->next;
              }
              else
              {
                  temp2=temp1;
                  temp1=temp2->next;
              }
          }
          }
      }
        return head;
        
    }
};