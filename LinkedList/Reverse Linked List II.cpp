https://leetcode.com/problems/reverse-linked-list-ii/submissions/
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
ListNode* reverseBetween(ListNode* head, int L, int R) {
       if(head==NULL||L==R)
           return head;
    ListNode* prev,*tail=NULL,*temp=NULL;
    ListNode* dummy=new ListNode(0);
    prev=dummy;
    dummy->next=head;   
    for(int i=0;i<L-1;i++)
        prev=prev->next;
    tail=prev->next;
    for(int i=0;i<R-L;i++){
        temp=prev->next;
        prev->next=tail->next;
        tail->next=tail->next->next;
        prev->next->next=temp;
    }
    return dummy->next;
   }
};
