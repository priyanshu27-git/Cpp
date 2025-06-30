#include<iostream>
using namespace std;

int binarysearch(int a[],int key, int left, int right)
{
    int mid;
    while(left<=right)
    {
     mid = (left + right) / 2;
    if(a[mid]== key)
    return mid;
    if((a[mid]) < key)
    left = mid+1;
    else
    right = mid-1;
    }
    return -1;
}
int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90};
    int size= sizeof(a)/sizeof(a[0]);
    int result = binarysearch(a,60,0,size-1);
    if(result != 1)
    cout << " Element found at index " << result;
    else
    cout << " Element not found";
    return 0;
}
