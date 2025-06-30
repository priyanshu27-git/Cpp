#include <iostream>
using namespace std;
int main()
{
    int n,check =1,temp;
    cout << "Enter value of n= ";
    cin >> n;
    int arr[n];
    cout << " Enter numbers in array= " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        cin >> arr[i];
    }
   for(int i=0; i< n-1 && check==1; i++)
   {
    check=0;
    for(int j=0;j<n-i-1;j++)
    {
      if (arr[j]>arr[j+1])
      {
        check=1;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
   }
   cout << " Sorted array= ";
   for(int j=0;j<n;j++)
    {
    cout << " " << arr[j];
    } 
        
}