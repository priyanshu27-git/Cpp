//Creation of Linkedlist
#include<stdio.h>
#include <iostream>
using namespace std;
#define null 0
struct Node
{
  int data;
  struct Node *next;
};
Node *first, *temp, *ttemp;
void init()
{
  first = temp = ttemp = NULL;
}
void createfirst(int x)
{
  first = (Node*)malloc(sizeof(Node));
  first->data = x;
  first->next = null;
}
void addnode(int x)
{
  temp = first;
  while (temp->next!=null)
  {
    temp = temp->next;
  }
  ttemp =(Node*)malloc(sizeof(Node));
  ttemp->data = x;
  ttemp->next = null;
  temp->next = ttemp;
}
void disp()
{
  temp = first;
  while(temp!=null)
  {
    cout << "\n " << temp->data;
    temp = temp->next;
  }
}
int main()
{
  int m,n;
  char i;
  // For Clear screen
  system ("cls");
  cout << "Enter data for first node= ";
  cin >> n;
  createfirst(n);
  cout << "\nFirst Node Created";
  while(1)
  {
    cout << "\nDo you want to continue= ";
    cin >> i;
    if(i=='n' ||i=='N')
    break;
    else
    {
    cout << "Enter data for new node= ";
    cin >> n;
    }
    addnode(n);
  }
  cout << "\nThis is your final linkedlist";
  disp();
}
