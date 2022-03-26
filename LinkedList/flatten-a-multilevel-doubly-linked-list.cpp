//https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
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
    Node* flatten(Node* head) {
        Node* curr=head;
        stack<Node*>s;
        if(head==NULL)
            return head;
        while(curr|| !s.empty())
        {
            if(!curr->next)
            {
                if(!s.empty()){
                Node* temp = s.top();
                    s.pop();
                    if(temp != nullptr) {
                        temp->prev = curr;
                    }
                    curr->next = temp;
                }
            }
            if(curr->child)
            {
                s.push(curr->next);
                curr->next=curr->child;
                curr->child=NULL;
                curr->next->prev=curr;
            }
            curr=curr->next;
            
        }
       
        head->prev=NULL;
        return head;
    }
};
