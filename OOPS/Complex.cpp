//Operator << operator  to print an object
#include<iostream>
using namespace std;
class complex{
    private:
    double real,image;
    public:
    complex(){}
    complex(double r,double i)
    {
    real = r;
    image = i;
    }
   friend ostream& operator << (ostream&out,complex c);
};
ostream&operator<<(ostream &out,const complex c)
{
    out << c.real;
    out << "+i";
    out << c.image << "\n";
    return out;
}
int main()
{
    complex c(4,5),c1(3,7);
    cout << c << c1;
}