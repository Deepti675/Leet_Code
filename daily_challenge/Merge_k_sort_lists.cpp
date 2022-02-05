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
    ListNode* sMerge(ListNode* a,ListNode* b){
        ListNode* result=NULL;
        if(a==NULL)return (b);
        else if(b==NULL)return (a);
        if(a->val<=b->val){
            result=a;
            result->next=sMerge(a->next,b);
        }
        else{
            result=b;
            result->next=sMerge(a,b->next);
        }
        return result;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.size()==0)
           return NULL;
        if(lists.size()==1)
            return lists[0];
        ListNode* res=lists[0];
        for(int i=1;i<lists.size();i++){
            res=sMerge(res,lists[i]);
        }
        return res;
        
        
        
    }
};
