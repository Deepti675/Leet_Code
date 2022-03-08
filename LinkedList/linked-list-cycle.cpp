//https://leetcode.com/problems/linked-list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//time complexity O(n) and Space Complexity O(n).
class Solution {
public:
    bool hasCycle(ListNode *h) {
          unordered_set<ListNode*>s;
    while(h!=NULL)
    {
        if(s.find(h)!=s.end())
        return true;
        s.insert(h);
        h=h->next;
    }
    return false;
    }
};
//fast slow pointer method
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *h) {
        if(h==NULL ||h->next==NULL)
            return false;
        ListNode* fast=h;
        ListNode* slow=h;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
                return true;
        }
        return false;
    }
};
