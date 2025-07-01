#include<iostream>
using namespace std;
void linearsearch (int a[], int key)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        break;
    }
    cout << "element found at index " << i;
}
int main()
{
    int a[]= {1,2,3,4,5};
    int key=4;
    linearsearch(a,key);
}
