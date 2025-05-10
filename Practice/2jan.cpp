#include<iostream>
using namespace std;
int main()
{
    int x,y,z,*a,*b,*c;
    a=&x;
    b=&y;
    c=&z;
    cout << "Enter a=";
    cin >> *a >> *b;
    *c= *a+*b;
    cout << "Sum= " << *c;

}
