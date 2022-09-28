https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
        if(head->next==NULL&&n==1)
            return NULL;
        int c=0;
        ListNode* temp=head;
        ListNode* kk=head;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        if(c==n-1)
        {
            temp=head;
            head=head->next;
            delete(temp);
            return head;
        }
        int opt=c-n;
        while(opt--)
        {
            kk=kk->next;
        }
        temp=kk->next;
        kk->next=kk->next->next;
        delete(temp);
        return head;
        
    }
};
