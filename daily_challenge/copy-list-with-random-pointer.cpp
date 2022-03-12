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
     map<Node*,Node*>hash_M;
        Node* dummy=head;
        while(dummy!=NULL)
        {
            Node* copy=new Node(dummy->val);
            hash_M[dummy]=copy;
            dummy=dummy->next;
        }
        dummy=head;
        while(dummy!=NULL)
        {
            hash_M[dummy]->next=hash_M[dummy->next];
            hash_M[dummy]->random=hash_M[dummy->random];
            dummy=dummy->next;
        }
        return hash_M[head];
    }
};
