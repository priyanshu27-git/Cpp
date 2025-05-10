#include<iostream>
using namespace std;
int main()
{
    int n,fact=1,i,*x,*y,*z;
    x=&n;y=&fact;z=&i;
    cout << "Enter n= ";
    cin >> *x;
    for(*z=1;*z<=*x;(*z)++)
    {
        *y=*y * *z;
    }
    cout << "Fact= " << *y;
}

