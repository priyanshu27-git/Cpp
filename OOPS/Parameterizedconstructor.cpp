#include<iostream>
using namespace std;
class bike
{
public:
    string name;
    int cc ;
    float price ;
    bike(string name, int cc, int price)
    {
        name = name;
        cc = cc;
        price = price;
        cout << " Bike Name= " << name << endl;
        cout << " CC = " << cc << endl;
        cout << " Price = " << price;
    }
};
int main()
{
    bike b("Ninja",1000,10000);
}
