//https://leetcode.com/problems/remove-linked-list-elements/
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode* pre=NULL;
        ListNode* curr=head;
        while(curr)
        {
              if(curr->val==val)
              {
                  if(!pre)
                      head=curr->next;
                  else
                      pre->next=curr->next;
              }
            else
            {
                pre=curr;
            }
                curr=curr->next;
            
        }
        return head;
    }
};
