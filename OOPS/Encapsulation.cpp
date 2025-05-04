#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    float cgpa;
    public:
    student(string s_name,int s_age,float s_cgpa)
    {
        name = s_name;
        age = s_age;
        cgpa = s_cgpa;
        cout << name << " " << age << " " << cgpa;
    }
};
int main()
{
    student s("Priyanshu",20,7.5);
}
