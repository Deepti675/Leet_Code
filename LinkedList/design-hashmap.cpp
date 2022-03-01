//https://leetcode.com/problems/design-hashmap/
class Node{
    public:
    int key,value;
    Node* next;
    Node()
    {
        next=0;
    }
    Node(int key,int value)
    {
        this->key=key;
        this->value=value;
        next=0;
    }
};
class MyHashMap{
  Node* head;
    public:
    MyHashMap(){
        head=0;
    }
    void put(int key,int value)
    {
        Node* temp=head;
        Node* last=head;
        int f=0;
        if(!head)
        {
            head= new Node(key,value);
            return;
        }
        while(temp)
        {
            if(temp->key==key)
            {
                temp->value=value;
                f=1;
            }
            last=temp;
            temp=temp->next;
        }
        if(f==0)
        {
            last->next=new Node(key,value);
        }
    }
    int get(int key) {
        
        Node* temp = head;
        int flag=0;
        
        while(temp)
        {
            if(temp->key == key)
            {
                return temp->value;
            }
            temp = temp->next;
        
        }
        return -1;
    }
    void remove(int key)
    {
         Node* temp=head;
        Node* last=head;
       while(temp)
        {
            if(temp->key==key)
            {
                if(temp==head)
                {
                    head=head->next;
                    return;
                }
                last->next=temp->next;
            }
        last=temp;
            temp=temp->next;
        }
        
    }
};
