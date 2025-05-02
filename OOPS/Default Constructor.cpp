#include<iostream>
using namespace std;
class bike
{
public:
    string name;
    int cc ;
    float price ;
    bike()
    {
        name = "Ninja";
        cc = 1000;
        price = 1000000;
        cout << " Bike Name= " << name << endl;
        cout << " CC = " << cc << endl;
        cout << " Price = " << price;
    }
};
int main()
{
    bike b;
}
