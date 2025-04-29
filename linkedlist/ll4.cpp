// Creation of Linkedlist and add node before last node
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
#define null 0
struct Node
{
    int data;
    Node *next;
};
Node *first, *temp, *ttemp, *p;
void init()
{
    first = temp = ttemp = null;
}
void createfirst(int x)
{
    temp = first;
    first = new Node;
    first->data = x;
    first->next = null;
}
void addnode(int x)
{
    temp = first;
    while (temp->next != null)
    {
        temp = temp->next;
    }
    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = null;
    temp->next = ttemp;
}
void disp()
{
    temp = first;
    while (temp != null)
    {
        cout << "\n"
             << temp->data;
        temp = temp->next;
    }
}
// Adding node before first node
/*void addbeforefirst(int x)
{
    temp = first;
    temp = new Node;
    temp->data = x;
    temp->next = first;
    first = temp;
}*/
//  Adding a node before last node
void addnodebeforelast(int x)
{
    temp = first;
    while (temp->next != null)
    {
        ttemp = temp;
        temp = temp->next;
    }
    p = new Node;
    p->data = x;
    p->next = temp;
    ttemp->next = p;
}
void add_node_after_given_data(int x, int y)
{
    temp = first;
    while (temp->data != x)
    {
        temp = temp->next;
        ttemp = temp->next;
    }
    p = new Node;
    p->data = y;
    p->next = ttemp;
    temp->next = p;
}
int main()
{
    system("cls");
    int m, n;
    char i;
    cout << "Enter data for first node= ";
    cin >> n;
    createfirst(n);
    /* while(1)
     {
     cout << "\nDo you want to continue= ";
     cin >> i;
     if(i == 'n' || i == 'N')
     break;
     else
     cout << "\nEnter data for new node= ";
     cin >> n;
     addbeforefirst(n);
     }*/
    while (1)
    {
        cout << "\nDo you want to continue for adding node after first node= ";
        cin >> i;
        if (i == 'n' || i == 'N')
            break;
        else
            cout << "\nEnter data for after first node= ";
        cin >> n;
        addnode(n);
    }
    while (1)
    {
        cout << "Do you want to continue for adding a node before last node= ";
        cin >> i;
        if (i == 'n' || i == 'N')
            break;
        else
            cout << "Enter data for add a new node before last node=";
        cin >> n;
        addnodebeforelast(n);
    }
    while (1)
    {
        cout << "Do you want to add a node after given data= ";
        cin >> i;
        if (i == 'n' || i == 'N')
            break;
        else
            cout << "\nEnter the data of node which is already existing in linkedlist= \n";
        cin >> n;
        cout << "Enter data for add node after given data= ";
        cin >> m;
        add_node_after_given_data(n, m);
    }
    cout << "\nThis is your final  Linkedlist\n";
    disp();
}