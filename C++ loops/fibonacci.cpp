#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0,n;
    cout << "Enter n=  ";
    cin >> n;
    for(int i=0; c<=n; i++)
    {
        cout << c << "  ";
        a = b;
        b = c;
        c = a+b;
    }
}