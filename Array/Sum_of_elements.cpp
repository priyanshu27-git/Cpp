#include<iostream>
using namespace std;
int main()
{
    int  n,i,sum=0;
    cout << "Enter n= ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers in array = ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     for(i=0;i<n;i++)
    {
        sum= sum + arr[i];
    }
    cout << "Sum= " << sum;
}