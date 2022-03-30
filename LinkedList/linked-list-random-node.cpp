//https://leetcode.com/problems/linked-list-random-node/
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
    int siz=0;
    ListNode* temp1;
public:
    Solution(ListNode* head) {
        temp1=head;
        ListNode* temp=temp1;
        while(temp)
        {
            siz++;
            temp=temp->next;
        }
    }
    
    int getRandom() {
        int ind=rand()%siz;
        ListNode* temp=temp1;
        for(int i=0;i<ind;i++)
            temp=temp->next;
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
