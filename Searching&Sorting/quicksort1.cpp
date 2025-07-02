#include<iostream>
using namespace std;

void quicksort(int a[],int n,int lb, int ub)
{
     if (lb >= ub)  // Base case
        return;
    int l,r,x,t;
    l=lb+1;
    r=ub;
    x=a[lb];
    while(l<=r)
    {
        while (a[l]<=x )
        {
            l++;
        }
        while (a[r]>x)
        {
            r--;
        }
        if(l<r)
        {
            t=a[l];
            a[l]=a[r];
            a[r]=t;
        }
    }
   // if(l>r)
    //{
       t=a[r];
        a[r]=a[lb];
        a[lb]=t;
   // }
    quicksort(a,n,lb,r-1);
    quicksort(a,n,r+1,ub);
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

    int a[5] = {5,3,8,4,2};
    int n=5;
    print(a,n);
    int lb=0;
    int ub=n-1;
    quicksort(a,n,0,n-1);
    cout << endl;
    print(a,n);


}

