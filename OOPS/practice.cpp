#include<iostream>
using namespace std;
#define PI 3.1416
float area(float radius)
{
  return PI*radius*radius;
}
float area(int length, int width)
{
    return length*width;
}
float area(float base,float height)
{
    return 0.5*base*height;
}
int main()
{
    //area of circle
    cout << "Area of Circle= " << area(4);;
    //area of rectangle
    cout << " Area of rectangle= " << area(4,8);;
    //area of triangle
    cout << "Area of Triangle= " << area(6,8);;
    
}
