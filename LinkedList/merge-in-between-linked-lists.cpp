//https://leetcode.com/problems/merge-in-between-linked-lists/
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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode* temp=l1;
        ListNode*t1,*t2;
        int c=1;
        while(temp!=NULL)
        {
            if(c==a)
            {
                t1=temp;
            }
            if(c==b)
            {
                t2=temp->next->next;
            }
            c++;
            temp=temp->next;
        }
        t1->next=l2;
        temp=l2;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=t2;
        return l1;
    }
};
