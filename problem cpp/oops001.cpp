// basic program for class
#include<iostream>
using namespace std;

class animal{
    public:
    string type;
    string name;

    void setdata(string n, string t){
        name = n;
        type = t;
    }
    void getdata(){
        cout<<"Name of the animal is: "<<name<<endl;
        cout<<"Type of animal is: "<<type<<endl;
    }

};

int main(){
    animal dog;
    dog.setdata("dog", "pet");
    dog.getdata();

}