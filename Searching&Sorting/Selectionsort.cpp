#include<iostream>
using namespace std;
 
void selectionsort(int a[], int n)
{
    int i,j,large,temp;
    for(i=n-1;i>0;i--)
    {
        large=0;
      for(j=1;j<=i;j++)
      {
        if(a[j] > a[large])
        large = j;
      }
      temp = a[i]; 
      a[i] = a[large];
      a[large] = temp;
    }
}
int main()
{
    int a[] = {8,4,2,3,1} ;
    int n = sizeof(a)/sizeof(a[0]);
    cout << " Original array= ";
    for(int i=0; i< n; i++)
    {
        cout  << " " <<  a[i] ;
    }
    selectionsort(a,n);
    cout << "\n Sorted array = ";
    for(int i=0; i< n; i++)
    {
        cout  << " " <<  a[i];
    }
}