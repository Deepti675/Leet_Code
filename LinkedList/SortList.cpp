//https://leetcode.com/problems/sort-list/
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
    ListNode* MBoth(ListNode* first,ListNode* second)
    {
        ListNode* ans=NULL;
        if(!first)
            return second;
        else if(!second)
            return first;
        if(first->val<=second->val){
            ans=first;
            ans->next=MBoth(first->next,second);
        }
        else
        {
            ans=second;
            ans->next=MBoth(first,second->next);
        }
        return ans;
    }
    void F_middle(ListNode* curr,ListNode** first,ListNode** second)
    {
        ListNode* fast;
        ListNode* slow;
        slow=curr;
        fast=curr->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *first=curr;
        *second=slow->next;
        slow->next=NULL;
    }
    void Msort(ListNode** head)
    {
        ListNode* curr=*head;
        ListNode* first;
        ListNode* second;
        if(!curr||!curr->next)
            return;
        F_middle(curr,&first,&second);
        Msort(&first);
        Msort(&second);
    *head=MBoth(first,second);
    }
    ListNode* sortList(ListNode* head) {
        Msort(&head);
        return head;
    }
};
