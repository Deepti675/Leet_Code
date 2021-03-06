//https://leetcode.com/problems/odd-even-linked-list/
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        int c=0;
        ListNode* last=head;
        while(last->next)
        {
            last=last->next;
            c++;
        }
        c=c&1?c/2+1:c/2;
        ListNode* temp=head;
        while(c--)
        {
            last->next=temp->next;
            temp->next=temp->next->next;
            last->next->next=NULL;
            temp=temp->next;
            last=last->next;
        }
        return head;
    }
};
//Easy Solution 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;
       // ListNode* odd_head=head;
        ListNode* even_head=head->next;
        while(even&&even->next)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_head;
        return head;
    }
};
