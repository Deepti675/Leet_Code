//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
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
    int pairSum(ListNode* head) {
        int c=0;
     ListNode* dummy=head;
        ListNode* temp;
        ListNode* prev=NULL;
        
        if(!head->next->next)
            return head->val+head->next->val;
        while(dummy){
            dummy=dummy->next->next;
            //revrsing 
            temp=head->next;head->next=prev;prev=head;head=temp;
        }
        while(head&&prev)
        {
            c=max(c,head->val+prev->val);
            head=head->next;
            prev=prev->next;
        }
        return c;
    }
};
