//https://leetcode.com/problems/linked-list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//time complexity O(n) and Space Complexity O(n).
class Solution {
public:
    bool hasCycle(ListNode *h) {
          unordered_set<ListNode*>s;
    while(h!=NULL)
    {
        if(s.find(h)!=s.end())
        return true;
        s.insert(h);
        h=h->next;
    }
    return false;
    }
};
//fast slow pointer method
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *h) {
        if(h==NULL ||h->next==NULL)
            return false;
        ListNode* fast=h;
        ListNode* slow=h;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
                return true;
        }
        return false;
    }
};
//complete program from iput and output
#include <bits/stdc++.h>

using namespace std;
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
void push(struct Node** head_ref,int new_data )
{
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data=new_data;
        new_node->next=(*head_ref);
        (*head_ref)=new_node; 
}
bool deletLoop(struct Node* h)
{
    unordered_set<Node*>s;
    while(h!=NULL)
    {
        if(s.find(h)!=s.end())
        return true;
        s.insert(h);
        h=h->next;
    }
    return false;
}
int main()
{
   struct Node* head1 = NULL;
   int n,a;
   cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        push(&head1,a);                                                            
    }
    head1->next->next->next->next = head1;
    cout<<deletLoop(head1);
    return 0;
}
