// Early Binding (compile-time polymorphism) 
#include<iostream>
using namespace std;

class base{
public:
    void show() { cout<<" In Base \n"; }
};

class deriverd:public base{
public:
    void show() { cout<<" In Derived \n"; }
};

int main(){
    base *a = new deriverd;
    a -> show();
}