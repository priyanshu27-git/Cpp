// Creation of linkedlist and add node before first
#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;
#define null 0
struct Node
{
    int data;
    Node *next;
};
Node *first, *temp,*ttemp;
void init()
{
    first=temp=ttemp=null;
}
void createfirst(int x)
{
    temp=first;
    first = new Node;
    first->data= x;
    first->next= null;
}
 void addnode(int x)
{
    temp=first;
    while(temp->next!=null)
    {
        temp=temp->next;
    }
    ttemp= new Node;
    ttemp->data= x;
    ttemp->next=null;
    temp->next=ttemp;
}
void disp()
{
    temp=first;
    while(temp!=null)
    {
        cout << "\n" << temp->data;
        temp=temp->next;
    }
}
//Adding node before first node
void addbeforefirst(int x)
{
    temp=first;
    temp= new Node;
    temp->data = x;
    temp->next = first;
    first=temp;
}
int main()
{
    system("cls");
    int m,n;
    char i;
    cout << "Enter data for first node= ";
    cin >> n;
    createfirst(n);
    while(1)
    {
    cout << "\nDo you want to continue= ";
    cin >> i;
    if(i == 'n' || i == 'N')
    break;
    else
    cout << "\nEnter data for new node= ";
    cin >> n;
    addbeforefirst(n);
    }
    while(1)
    {
    cout << "\nDo you want to continue for adding node after first node= ";
    cin >> i;
    if(i == 'n' || i == 'N')
    break;
    else
    cout << "\nEnter data for after first node= ";
    cin >> n;
    addnode(n);
    }
    cout << "\nThis is your final  Linkedlist\n" ;
    disp();
}
