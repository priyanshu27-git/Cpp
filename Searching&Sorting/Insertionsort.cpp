#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp = a[i];
        j = i - 1;
        while(j>=0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void printarray(int a[],int n)
{
    for(int i=0; i< n; i++)
    {
      cout << " " << a[i];
    }
}
int main()
{
    int a[] = {10,5,20,3,7,1,30,9,11,2};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Original Array =";
    printarray(a,n);
    insertionsort(a,n);
    cout << "\nSorted Array= ";
    printarray(a,n);
}