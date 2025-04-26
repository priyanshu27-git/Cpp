#include<iostream>
using namespace std;
int main()
{
  int i,j,z,n,k,star=1;
  cout << "Enter the no. of star=";
  cin >> n;
  z = (n + 1)/2;
  k = n / 2;
  for(i=1;i<=z;i++)
  {
    for(j=1;j<=k;j++)
      {
          cout << "  ";
      }
      for(j=1; j<=star; j++){
        cout << " *";
      }
      cout << endl;
      k--;
      star = star+2;
  }
}
