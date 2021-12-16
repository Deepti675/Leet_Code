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
 
 //insertion sort in linked list with extra space
class Solution {
public:
    void insert(ListNode**head,ListNode*newNode)
    {
        ListNode* curr= *head;
        
        if(*head==NULL||(*head)->val>=newNode->val)
        {
            newNode->next=*head;
            *head=newNode;
            
        }
        
        
        else{
        
            while(curr->next!=NULL && curr->next->val<newNode->val)
            {
                curr=curr->next;
            }
            newNode->next=curr->next;
            curr->next=newNode;
        }
            
    }
    void insertionsort(ListNode **head)
    {
        ListNode *ans=NULL;
        ListNode *current=*head;
        while(current){
            ListNode *nxt=current->next;
            insert(&ans,current);
            current=nxt;
            
        }
        *head=ans;
    }
    ListNode* insertionSortList(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return head;
        insertionsort(&head);
        return head;
    }
};
