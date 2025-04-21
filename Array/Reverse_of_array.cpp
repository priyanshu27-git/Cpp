#include<iostream>
using namespace std;
int main()
{   
    int arr[] = {1,2,3,4};
     for(int i=0;i<4;i++)
    {
       cout << arr[i];
    }
    cout << "\nReverse order\n";
    for(int i=3;i>=0;i--)
    {
     cout << arr[i];
    }
}