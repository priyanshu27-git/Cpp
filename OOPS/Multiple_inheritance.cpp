#include <iostream>
using namespace std;
class z
{
public:
    int x;
};
class A : public z
{
public:
    int a = 10;
};
class B : public z
{
public:
    int b = 12;
};
class C : public A, public B
{
    public:
    int c = 15;
};
int main()
{
    C obj;
    cout << obj.c;
}
