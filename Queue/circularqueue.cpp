//Circular Queue
#include<iostream>
using namespace std;
typedef struct Queue
# define max 10
{
    int data[max];
    int front,rear;
}s;
s s1,*p;
void init()
{
    p=&s1;
    p->front=p->rear=max-1;
}
int empty()
{
    if (p->front==p->rear)
    return 1;
    else 
    return 0;
}
int full()
{
    int next_rear;
    if(next_rear==max-1)
    next_rear=0;
    next_rear=p->rear+1;
    if(next_rear==p->front)
    return 1;
    else 
    return 0;
}
void enq(int x)
{
    if(full()==1)
    return ;
    if (p->rear == max-1)
    p->rear =0;
    else
    p->rear= p->rear+1;
    p->data[p->rear]=x;
}
/*int deq()
{
    int x;
    if(empty()==1)
    return -1;
    if(p->front==max-1)
    p->front=0;
    else
    p->front=[p->front]+1;
}*/
int main()
{
    int n,m;
    init();
    enq(10);
    enq(20);
    enq(30);
    enq(40);
    cout << "\n"<< enq << endl;
}