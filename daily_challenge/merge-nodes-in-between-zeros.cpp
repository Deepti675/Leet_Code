//https://leetcode.com/problems/merge-nodes-in-between-zeros/
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newlist=new ListNode(0);
        ListNode* temp1=newlist;
        ListNode* temp2=head;
        temp2=temp2->next;
        int sum=0;
        while(temp2!=NULL)
        {   
            while(temp2->val!=0)
            {
                sum+=temp2->val;
                temp2=temp2->next;
                
            }
          temp1->next=new ListNode(sum);
         temp1=temp1->next;
         temp2=temp2->next;
         sum=0;
        }
        return newlist->next;
    }
};
