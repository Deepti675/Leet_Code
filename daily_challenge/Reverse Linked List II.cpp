https://leetcode.com/problems/reverse-linked-list-ii/
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
ListNode* reverseBetween(ListNode* head, int L, int R) {
   ListNode* dummy=new ListNode(0);
    ListNode* prev=dummy;
    ListNode* left=head;
    ListNode* right=head;
    ListNode* forw=head->next;
        dummy->next=head;
		int dif=(R-L);
        
        while(--L){// traversing to the left node 
            prev=left;
            left=forw;
            right=forw;
            forw=forw->next;
        }
        
        while(dif--){//after reach the left node will start reversing the linked list
            ListNode*temp=forw->next;
            forw->next=right;
            right=forw;
            forw=temp;
        }
        prev->next=right;
        left->next=forw;
        return dummy->next;
    }
};
