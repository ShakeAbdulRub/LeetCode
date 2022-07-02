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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        stack <int> s;
        long int res=0,x=0;
        int t;
        while(temp)
        {
           s.push(temp->val);
            temp=temp->next;
            
        }
        //cout<<n<<endl;
        while(!s.empty())
        { 
           t=s.top();
            s.pop();
            res+=t*pow(2,x);
            x++;
        }
        return res;
    }
};