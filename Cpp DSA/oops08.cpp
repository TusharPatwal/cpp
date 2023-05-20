// Hybrid inheritance
#include <iostream>
using namespace std;

class a
{
    public:
    void f1(){
        cout<<"Inside function 1."<<endl;
    }
};

class b
{
    public:
    void f2(){
        cout<<"Inside function 2."<<endl;
    }
};

class c : public a
{
    public:
    void f3(){
        cout<<"Inside function 3."<<endl;
    }
};

class d : public a, public b
{
    public:
    void f4(){
        cout<<"Inside function 4."<<endl;
    }
};

int main()
{
    a o1;
    o1.f1();
    cout<<endl;
    b o2;
    o2.f2();
    cout<<endl;
    c o3;
    o3.f1();
    o3.f3();
    cout<<endl;
    d o4;
    o4.f1();
    o4.f2();
    o4.f4();
    return 0;
}