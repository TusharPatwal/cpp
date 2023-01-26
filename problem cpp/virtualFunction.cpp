// virtual function in c++
#include <iostream>
using namespace std;

class base {
    public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};

class derived1: public base {
    public:
    void show(){
        cout<<"Derived1 class"<<endl;
    }
};

class derived2: public base {
    public:
    void show(){
        cout<<"Derived2 class"<<endl;
    }
};

int main(){
    
    base *ptr;
    ptr = new derived1();
    ptr->show();
    ptr = new derived2();
    ptr->show();
}