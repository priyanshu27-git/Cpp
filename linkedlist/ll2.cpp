//Creation of Linkedlist and sum of all nodes
#include<stdio.h>
#include<iostream>
using namespace std;
#include<cstdlib>
#define Null 0
struct Node
{
    int data;
    struct Node *next;
};
Node *first, *temp, *ttemp;
void init()
{
    first=temp=ttemp=Null;
}
void createfirst(int x)
{
    first = new Node;
    first->data = x;
    first->next = Null;
}
void addnode(int x)
{
    temp = first;
    while(temp->next!=Null)
    {
        temp=temp->next;
    }
    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = Null;
    temp->next = ttemp;
}
void disp()
{
    temp=first;
    while(temp!=Null)
    {
        cout << "\n"<< temp->data;
        temp=temp->next;
    }
}
void sumofnodes()
{
    int sum=0;
    temp=first;
    while(temp!=Null)
    {
      sum=sum+temp->data;
      temp=temp->next; 
    }
    cout << "\nSum of all data is= " << sum;
}
int main()
{
    system("cls");
    int n,m;
    char i;
    cout << "Enter data for first node= ";
    cin >> n;
    createfirst(n);
    cout <<"First node is created";
    while(1)
    {
        cout << "\nDo you want to continue= ";
        cin >> i;
        if(i=='n' || i=='N')
        break;
        else
        cout << "Enter data for new node= ";
        cin >> n;
        addnode(n);
    }
    cout << "\nThis is your Final Linkedlist";
    disp();
    sumofnodes();
}