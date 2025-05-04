#include<iostream>
using namespace std;
class demo
{
    private:
    int a=3;
    protected:
    int b=7;
    public:
    int c=4;
    friend void func();//declaration
};
void func()
{
    demo d;
    cout <<d.a << d.b << d.c;
}
int main()
{
    func();
}
