#include<iostream>
using namespace std;
int main()
{
    int x,y,ans=1,i,*a,*b,*c,*d;
    a=&x;
    b=&y;
    c=&i;
    d=&ans;
    cout << "Enter x and y = ";
    cin >> *a >> *b;
    for(*c=1;*c<=*b;(*c)++)
    {
        *d = *d * *a;
    }
    cout << *d;
}
