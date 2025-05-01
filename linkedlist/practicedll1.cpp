//creation of doubly linkedlist
#include<iostream>
#include<stdio.h>
using namespace std;
#define null 0
struct Node{
    int data;
    Node *next,*prev;
};
Node *first,*temp,*ttemp;
void init()
{
    first=temp=ttemp=null;
}
void createfirst(int x)
{
    first= (Node*)malloc(sizeof(Node));
    first->data=x;
    first->next=null;
    first->prev=null; 
}
void addnode(int x)
{
    temp=first;
    while(temp->next!=null)
    {
        temp=temp->next;
    }
    ttemp=(Node*)malloc(sizeof(Node));
    ttemp->data=x;
    ttemp->next=null;
    temp->next=ttemp;
    ttemp->prev=temp;
}
void delnode()
{
    temp=first;
    while(temp->next!=null)
    {
      temp=temp->next;   
    }
    temp->prev->next=null;
    free(temp);
}
void disp()
{
    temp=first;
    while(temp!=null)
    {
        cout << " \n" << temp->data;
        temp=temp->next;
    }
}
int main()
{
    int n;
    char i;
    system("cls");
    cout << "Enter data for First node= ";
    cin >> n;
    createfirst(n);
    cout << "\nFirst Node is created";
    while(1)
    {
        cout << "\nDo you want to continue= ";
        cin >> i;
        if(i=='n'|| i=='N')
        break;
        else 
        cout << "\nEnter data for new node= ";
        cin >> n;
        addnode(n);
    }
    delnode();
    cout << "\nThis is Final linkedlist";
    disp();
    cout << "\nThis is final linkedlist after deleting last node= ";
    disp();
}