//https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
     ListNode* dummy=new ListNode(-1);
        ListNode* pre=dummy;
        ListNode* curr=head;
       dummy->next=head;
        while(curr!=NULL&& curr->next!=NULL)
        {
            pre->next=curr->next;
            curr->next=curr->next->next;
            pre->next->next=curr;
            curr=curr->next;
            pre=pre->next->next;
        }
        return dummy->next;
    
    }
};
