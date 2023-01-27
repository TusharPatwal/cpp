// basic program for class
#include<iostream>
using namespace std;

class animal{
    public:
    int type;
    string name;
    void make_sound(int sound){
        cout<<"sound createrd by animal"<<endl;
    }

};

class dog: public animal{
    public:
    void setdata(string n){
        name = n;
    }
    void display(){
        cout<<"Name of dog: "<<name<<endl;
    }
};
int main(){
    dog d1;
    d1.setdata("Johnny");
    d1.display();
}