//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* temp1=head; 
        ListNode* t1,*t2;
        int c=1,n=1;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            n++;
        }
        while(temp!=NULL)
        {
            if(c==k)
            {
            t1=temp;
            }
            if(c==n-k)
            {
                t2=temp;
            }
             temp=temp->next;
             c++;
             
            
        }
       swap(t1->val,t2->val);
        return head;
    }
};
