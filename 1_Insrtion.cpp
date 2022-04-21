#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head, *ptr, *newnode;

void create()
{
    int n, data;
    cout << "Enter the number of nodes :\n";
    cin >> n;
    cout<<"Enter Data :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            head = newnode;
            head->data = data;
            head->next = head;
            ptr = head;
        }
        else
        {
            newnode->data = data;
            newnode->next = head;
            ptr->next = newnode;
            ptr = newnode;
        }
    }
}

void display()
{
    ptr = head;
    while (ptr->next != head)                              //We can use do while statement also
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "Element : " << ptr->data << endl;
}

void insertAtFirst()
{
    int data;
    cout<<"Enter the data to insert at first :\n";
    cin>>data;
    ptr=head;
    while (ptr->next!=head)
    {
        ptr=ptr->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    ptr->next=newnode;
    head=newnode;
    
}

void insertAtEnd()
{
    int data;
    cout<<"Enter the data to enter at end :\n";
    cin>>data;
    ptr=head;
    while (ptr->next!=head)
    {
        ptr=ptr->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    ptr->next=newnode;
}

void insertAtIndex()
{
    int data,i=0,index;
    cout<<"Enter the Index\n";
    cin>>index;
    cout<<"Enter the data:\n";
    cin>>data;
    ptr=head;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=ptr->next;
    ptr->next=newnode;
}

int main()
{
    create();
    display();
    cout<<endl;
    insertAtFirst();
    insertAtEnd();
    insertAtIndex();
    display();
}