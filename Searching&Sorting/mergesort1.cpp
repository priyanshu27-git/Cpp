#include<iostream>
using namespace std;

void print(int a[],int n);
void merge_element(int a[],int left,int mid, int right);
void mergesort(int a[], int left , int right);

void mergesort(int a[],int left , int right)
{
    if(left>=right)
    {
        return;
    }
    int mid = (left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge_element(a,left,mid,right);
}
void merge_element(int a[],int left,int mid, int right)
{
    int n1=mid-left+1;
    int n2= right-mid;
    int leftarr[n1],rightarr[n2];

    for(int i=0;i<n1;i++)
    {
        leftarr[i]=a[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        rightarr[j]= a[mid+1+j];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            a[k]=leftarr[i];
            i++;
        }
        else{
            a[k]=rightarr[j];
            j++;
        }
        k++;
    }

    //if n1 and n2 are not same some element will not be copy so we need to copy them
    while(i<n1)
    {
        a[k]=leftarr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=rightarr[j];
        j++;
        k++;
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{

    int a[8] = {5,3,8,4,2,9,1,6};
    int n=8;
    print(a,n);
    mergesort(a,0,n-1);
    cout << endl;
    print(a,n);


}
