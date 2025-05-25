#include <iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
        return;
        else{
        if (front == -1 )
        front = 0;
        queue[++rear]=value;
        cout << value << " Inserted into the queue " << endl;
        }
}
    void dequeue()
    {
        if(front == -1 || front > rear)
        return;
        else 
        {
        cout << queue[front] << " removed from queue " << endl;
        front++;
        }
    }
    void display()
    {
        if (front == -1)
        return ;
        else
        {
            for(int i=front; i<=rear; i++)
            cout << queue[i] << " ";
        }
        cout << endl;
    }
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    cout << " After removing front element "<< endl; 
    display();
    return 0;
}