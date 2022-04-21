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
int main()
{
    create();
    display();
}