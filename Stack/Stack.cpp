#include<iostream>
using namespace std;
# define MAX 5

int stack[MAX];
int top= -1;

int push(int value)
{
    if(top == MAX - 1)
    return 0 ;
    else
    {
        top ++;
        stack[top] = value;
        cout << value << " pushed into stack " << endl;
        return 1;
    }
}
int pop()
{
    if(top == -1)
    return 0 ;
    else
    {
      cout << stack[top] << " Popped from stack ";
      top --; 
      return 1;
    }
}
int peek()
{
    
    if(top == -1)
    return 0;
    else
    return stack[top];
}
void display()
{
    if(top == -1)
    cout << " Stack is empty ";
    else
    for(int i=0; i<=top; i++)
    {
    cout << stack[i] << " " ;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    cout << " Top element " << peek() << endl;
    pop();
    display();
    return 0;
}
