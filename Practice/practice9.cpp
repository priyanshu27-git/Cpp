#include<iostream>
using namespace std;
int main()
{
    int i,x,y,ans=1;
    cout << "Enter value of x&y=";
    cin >> x >> y;
    for(i=1;i<=y;i++)
    {
        ans= ans*x;

    }
    cout << "x^y= "<< ans;
}
