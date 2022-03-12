//https://leetcode.com/problems/copy-list-with-random-pointer/
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
       if(!head)
           return NULL;
        unordered_map<Node*,Node*>Stor;
        Node *dummy,*temp1,*temp2;
        temp1=new Node(0);
        dummy=temp1;
        temp2=head;
        while(temp2)
        {
            temp1->next=new Node(temp2->val);
            temp1=temp1->next;
            Stor[temp2]=temp1;
            temp2=temp2->next;
        }
        temp2=head;
        temp1=dummy->next;
        while(temp2)
        {
            if(temp2->random)
                temp1->random=Stor[temp2->random];
            else
                temp2->random=NULL;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return dummy->next;
    }
};
