#include<iostream>
using namespace std;
int main()
{
    int a,b,ans;
    char c;
    cin >> a >> b >> c;
    if(b == 0){
        cout << "INF";
    }
    /*if(c == '+'){
        ans = a+b;
    }
    else if(c == '-')
    {
        ans= a-b;
    }
    else if(c == '*'){
        ans = a*b;
    }
    else if( c == '/'){
        ans= a/b;
    }
    else if( c == '%'){
        ans = a%b;
    }
    else {
    cout << "NA";
    }*/
   switch (c)
   {
   case '+':{
     ans = a+b;
    break;
   }
   case '-':{
    ans = a-b;
    break;
   }
   case '*':{
    ans = a*b;
    break;
   }
   case '/':{
    if(b != 0)
    ans = a/b;
    else
    cout << "INF";
    break;
   }
   case '%':{
    if(b != 0)
    ans = a%b;
    else
    cout << "INF";
    break;
   }
   default:
   cout << "NA";
    break;
   }
    cout << ans;
}


