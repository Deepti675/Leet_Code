//https://leetcode.com/problems/reorder-list/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        //1. find middle of the linked list
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* first=head;
        //2. reverse the second linked list
        ListNode* second=reverseList(slow->next);
        slow->next=NULL;
        // 3. merging the linked list
        while(second)
        {
            ListNode* temp1=first->next;
            first->next=second;
            ListNode* temp2=second->next;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
    }
};
