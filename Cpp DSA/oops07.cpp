// Hierarchical Inheritance
#include<iostream>
using namespace std;

class vehicle{
    public:
    int speed;
    int wheels;
};

class heavyMotor: public vehicle{
    public:
    
};

class lightMotor: public vehicle{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

class passenger : public heavyMotor{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

class goods: public heavyMotor{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

class nonGear: public lightMotor{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

class gear: public lightMotor{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

int main(){
    a obj1;
    obj1.f1();

    b obj2;
    obj1.f1();
    obj2.f2();

    c obj3;
    obj3.f1();
    obj3.f3();
    return 0;
}
