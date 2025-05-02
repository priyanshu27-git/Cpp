#include <iostream>
using namespace std;

class Professor {
    string name;
public:
    Professor(string n) : name(n) {}

    void show() {
        cout << "Professor: " << name << endl;
    }
};

class University {
    string uniName;
    Professor *professor;
public:
    University(string u, Professor *p) : uniName(u), professor(p) {}

    void associateProfessor() {
        cout << "University: " << uniName << endl;
        professor->show();
    }
};

int main() {
    Professor p1("Dr. Smith");
    University u1("Harvard",&p1);

    u1.associateProfessor();  

    return 0;
}
