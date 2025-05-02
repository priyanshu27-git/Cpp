#include<iostream>
using namespace std;

class Myclass
{
    int x;
    float y;
    public:
    Myclass(int a, float b)
    {
        x=a;
        y=b;
    }
    Myclass(const Myclass &Other)
    {
        x = Other.x;
        y = Other.y;
    }
    void show()
    {
        cout << "x= " << x << " y= " << y;
    }
};
int main()
{
    Myclass C(2,2.2);
    Myclass C1 = C;
    C1.show();
}
