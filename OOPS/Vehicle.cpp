#include<iostream>
using namespace std;
class vehicle
{
    //Single inheritance
public:
    int wheels;
    string color;
    vehicle()
    {
        cout << "Vehicle created\n";

    }
    void accelerate()
    {
        cout << "Vehicle runs\n";

    }
    void applybrake()
    {
        cout << "Vehicle stopped \n";
    }
};
class car:public vehicle
{
public:
    car()
    {
        cout << "car created\n";

    }
    void accelerate()
    {
        cout << "Car runs\n";
    }
};
int main()
{
    vehicle v;
    car c;
    v.accelerate();
    c.accelerate();
}
