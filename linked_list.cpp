//array vs linked list
//array
//--> size fixed
//--> contiguous block of memory
//--> inserting or deleting is costly

/* 
Linked List
--> size can be modified
--> non-contiguos
--> insertion or deletion at any point is easier
*/

/* 
Structure of a Node
--> Data
--> Next(it is a pointer which stores the address of the next node)
*/

/* 
HEAD --> it is pointer which stores the address of the first node of the Linked List
last node of the Linked List stores NULL in its "Next" pointer, so that we can know it is the last Node
*/

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)// here we are taking head by reference because we'll be modifying our Linked List
{
    node* n= new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAthead(node* &head, int val)
{
    node* n= new node(val);
    n->next = head;
    head = n;
}

void display(node* head)// here we are taking head by value because we'll not be modifying our Linked List
{
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node* head= NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAthead(head, 4);
    display(head);
    cout<<search(head, 5);

    return 0;
}