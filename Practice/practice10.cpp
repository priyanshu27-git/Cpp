#include<iostream>
using namespace std;
int main()
{
    int i,n,max=1,min=1;
    for(i=1;i<=10;i++)
    {
        cout << "Enter no.= ";
        cin >> n;
        if(n > max)
            max=n;
        else
        {
         if(n < min)
         min=n;
        }
    }
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min;
}
