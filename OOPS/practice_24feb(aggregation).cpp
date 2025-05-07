#include<iostream>
using namespace std;
class Professor
{
    string name;
    public:
    Professor(string n)
    {
        name = n;
    }
    void display()
    {
        cout << " Professor name= " << name;
    }
};
class University
{
    string uniName;
    Professor *professor;
    public:
    University(string Uname, Professor *p)
    {
        uniName = Uname;
        professor = p;
    }
    void show()
    {
        cout << " University Name= " << uniName;
        professor->display();
    }
};
int main()
{
    Professor p1("Zohaib");
    University u1("BGIEM",&p1);
    u1.show();
}