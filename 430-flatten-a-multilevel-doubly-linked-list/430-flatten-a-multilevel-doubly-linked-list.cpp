/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head){
        Node *temp=head,*t,*p;
        stack<Node*> s;
        while(temp)
        {
            if(temp->child)
            {
                if(temp->next)
                {
                    s.push(temp->next);
                }
                t=temp->next;
                temp->next=temp->child;
                temp->next->prev=temp;
                temp->child=NULL;
            }
            if(temp->next==NULL&& !s.empty())
            {
                p=s.top();
                s.pop();
                temp->next=p;
                p->prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};