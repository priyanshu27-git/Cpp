#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    float cgpa;
    public:
    student(string s_name, int s_age, float s_cgpa)
    {
        name=s_name;
        age=s_age;
        cgpa=s_cgpa;
    }
    // getter for name
    string getname()
    {
        return name;
    }
    //setter
    void setname(string s_name)
    {
        name=s_name;
    }
    // getter
    int getage()
    {
        return age;
    }
    //setter
    void setage(int s_age)
    {
        age=s_age;
    }
    // getter
    float getcgpa()
    {
        return cgpa;
    }
    //setter
    void setcgpa(float s_cgpa)
    {
        cgpa=s_cgpa;
    }
    void display()
    {
        cout << "Student Name= " << name;
        cout << " Age= " << age;
        cout << " Cgpa= " << cgpa;
    }
};
int main()
{
    student s("Priyanshu",20,7.5);
    s.display();
    cout << "\n Updated Info\n";
    s.setname("Priyanshu");
    s.setage(21);
    s.setcgpa(8.5);
    s.display();
}
