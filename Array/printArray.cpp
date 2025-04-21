#include<iostream>
using namespace std;
int main()
{
    int  n;
    cout << "Enter n= ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers in array = ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}