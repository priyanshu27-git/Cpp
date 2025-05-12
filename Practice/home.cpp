#include<iostream>
using namespace std;
int main()
{
    int n,fact=1,sum=0;
    cout << "Enter n= ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        fact=1;
        for(int j=1; j<=i; j++)
    {
        fact=fact * j;
    }
    sum+=fact;
}
cout << "sum=  " << sum;
}
