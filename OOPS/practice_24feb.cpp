#include<iostream>
using namespace std;
class Passport
{
 public:
 string passportnumber;
 Passport(string pnumber) : passportnumber(pnumber) {}
};
class person
{
 public:
 Passport *passport;
 string personname;
 person(string name, Passport *p)
 {
    personname = name;
    passport = p; 
 }
 void show()
 {
   cout << " name = " << personname;
   cout << " passportno. = " << passport->passportnumber;
 }
};
int main()
{
 Passport obj("A123");
 person p("Priyanshu", &obj);
 p.show();

}
