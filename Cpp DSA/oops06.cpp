// Single inheritance
// Multilevel inheritance 
// Multiple inheritavne

#include <iostream>
using namespace std;

class animal
{
public:
    int age;
    int weight;

    void bark(){
        cout<<"barking"<<endl;
    }
};

class human{
    public:
    int color;

    void speak()
    {
        cout << "speaking" << endl;
    }
};

class hybrid: public animal, public human{
    public:
};

class dog: public animal{
    public:
};

class pug: public dog{
    public:
};
int main()
{
    hybrid obj3;
    obj3.bark();//multiple inheritance
    obj3.speak();//multiple inheritance

    pug obj2;
    obj2.bark();//multilevel inheritance

    dog obj1;
    obj1.bark();//single inheritance


    return 0;
}