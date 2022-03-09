
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//brute force solution 
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL && n==1)
            return NULL;
        ListNode* curr=head;
        ListNode* len=head;
        int c=0;
        while(curr->next!=NULL)
        {
            c++;
            curr=curr->next;
        }
        if(c==n-1)
        {
            curr=head;
            head=head->next;
            delete(curr);
            return head;
        }
        int kl=c-n;
        while(kl--)
        {
            len=len->next;
        }
        curr=len->next;
        len->next=len->next->next;
        delete(curr);
        return head;
        
         }
};

 //slow and fast pointer method
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        while(n--)
        {
            fast=fast->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummy->next;
      
    }
};
