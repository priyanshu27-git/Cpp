#include<iostream>
using namespace std;
int main()
{
    int x,fact=1,i,j,sum=0,*a,*b,*c,*d,*ans;
    a=&x;
    b=&fact;
    c=&i;
    d=&j;
    ans=&sum;
    cout << "Enter x = ";
    cin >> *a ;
    for(*c=1;*c<=*a;(*c)++)
    {
        *b=1;
     for(*d=1;*d<=*c;(*d)++)
    {
        *b= *b * *d;
    }
    *ans+=*b;
    }
    cout  << " "<< *ans;
}
