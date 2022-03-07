//intersection of two liked list
//brute force solution 
#include <bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    struct Node* next;
};
bool isPresent(struct Node* head,int data)
{
    struct Node* t=head;
    while(t!=NULL)
    {
        if(t->data==data)
        return 1;
      t=t->next;
    }
    return 0;
}
void push(struct Node** head_ref,int new_data )
{
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data=new_data;
        new_node->next=(*head_ref);
        (*head_ref)=new_node;
}
void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data<<" ";
        node = node->next;
    }
}
struct Node* Intersection_List(struct Node* head1, struct Node* head2)
{
    struct Node* res=NULL;
    struct Node* t1=head1;
    while(t1!=NULL)
    {
        if(isPresent(head2,t1->data))
        push(&res,t1->data);
      t1=t1->next;     
    }
    return res;
}
int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    struct Node* intersecn = NULL;
    int n,m,a,b;
    cout<<"Enter the number of elemnet in head1"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        push(&head1,a);
    }
    cout<<"Enter the number of elemnet in head2"<<endl;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        push(&head2,b);
    }
    intersecn=Intersection_List(head1,head2);
    cout<<"Intersection List is: "<<endl;
    printList(intersecn);
    return 0;
}
