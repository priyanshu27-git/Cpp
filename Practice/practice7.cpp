#include<iostream>
using namespace std;
int main()
{
    int i,n,table;
    cout << "Enter value of n=";
    cin >> n;
    for(i=1;i<=10;i++)
    {
        table=n*i;
        cout << n << "*" << i << "=" << table << endl;
    }
}
