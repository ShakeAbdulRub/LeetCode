/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp1,*temp2,*temp,*head2;
        temp=head;
        if(head==NULL)
        {
            return NULL;
        }
        while(temp)
        {
            temp1=temp->next;
            Node *node = new Node(temp->val);
                temp->next=node;
                node->next=temp1;
            temp=temp1;
        }
        temp=head;
        while(temp)
        {
            temp->next->random = temp->random ? temp->random->next:NULL;
            temp=temp->next?temp->next->next:NULL;
        
        }
        temp=head;
        temp1=temp->next;
        head2=temp1;
        while(temp&&temp1)
        {
            temp->next=temp->next?temp->next->next:NULL;
            temp1->next=temp1->next?temp1->next->next:NULL;
            temp=temp->next;
            temp1=temp1->next;
        }
        
     
        return head2;
    }
};