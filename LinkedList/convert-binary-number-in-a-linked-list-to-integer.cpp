
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
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
    int getDecimalValue(ListNode* head) {
        int n=0,res=0;
        ListNode* temp=head;
        while(temp->next!=nullptr)
        {
            ++n;
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr)
        {
            res+=(pow(2,n)*temp->val);
            --n;
            temp=temp->next;
        }
        return res;
    }
};
