#include <iostream>
using namespace std;
int main()
{
    long i, n, f = 1;
    cout << "Enter no. =";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if(n%3==0)
        f = f * i;
        else
        cout << "Change input"; break;
    }
    cout << n << "\n!=" << f*i  << endl;
}