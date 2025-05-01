//Creation of circular linkedlist
#include<iostream>
#include<stdio.h>
using namespace std;
#define null 0
struct Node{
    int data;
    Node *next;
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
    first->next=first;
}
void addnode(int x)
{
    temp=first;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    ttemp=(Node*)malloc(sizeof(Node));
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
}
void delnode()
{
    temp=first;
    while(temp->next!=first)
    {
      ttemp=temp;
      temp=temp->next; 
    }
    ttemp->next=first;
    free(temp);
}
void disp()
{
  temp=first;
  do
  {
    cout << " \n" << temp->data;
    temp=temp->next;
  } while (temp!=first);
  
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
    cout << "\nThis is Final linkedlist";
    disp();
    delnode();
    cout << "\nThis is final linkedlist after deleting last node= ";
    disp();
}