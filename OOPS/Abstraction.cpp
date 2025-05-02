#include<iostream>
using namespace std;
class circle
{
    int radius;
    public:
    circle(int r): radius(r){}
    void draw()
    {
        cout << "Drawing a circle with radius " << radius << endl;
    }
};
class rectangle
{
    int width;
    int height;
    public:
    rectangle(int w,int h): width(w),height(h){}
    void draw()
    {
        cout << "Drawing a rectangle with width " << width << " and height " << height << endl;
    }
};
class triangle
{
    int base,height;
    public:
    triangle(int b,int h): base(b),height(h){}
    void draw()
    {
        cout << "Drawing a triangle with base " << base << " and height " << height;
    }
};
int main()
{
     circle c(5);
     rectangle r(4,8);
     triangle t(6,6);
     c.draw();
     r.draw();
     t.draw();
}
