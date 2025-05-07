#include<iostream>
using namespace std;
class Max
{
  public:
  void Maxno(int a,int b,int c)
  {
   if( a > b && a > c)
   cout << "A is greater " << endl;
   else if(b > a && b > c)
   cout << "B is greater" << endl;
   else 
   cout << "C is greater " << endl;
    }
    void Maxno(double a,double b,double c)
  {
   if( a > b && a > c)
   cout << "A is greater "<< endl;
   else if(b > a && b > c)
   cout << "B is greater"<< endl;
   else 
   cout << "C is greater "<< endl;
    }
};
int main()
{
    Max m;
    m.Maxno(1,2,0);
    m.Maxno(1.2,3.1,5.11);
}