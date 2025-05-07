#include<iostream>
using namespace std;
void demo()
{
    static int count=1;
    cout << " " << count;
    count++;
}
int main()
{
    for(int i=0;i<5;i++)
    demo();
}
