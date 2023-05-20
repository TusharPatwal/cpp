#include<iostream>
using namespace std;

class human{

    public:
    int height;
    int age;
    int weight;

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class male : public human{

    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};
class female:protected human{
    public:
    string color;

    int getHeight(){
        return this->height=80;
    }
};

int main(){

    female obj2;
    cout<<obj2.getHeight()<<endl;

    // male obj1;
    // cout<<obj1.age<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.weight<<endl;

    // cout<<obj1.color<<endl;
    // obj1.setWeight(22);
    // cout<<obj1.weight<<endl;
    // obj1.sleep();
}               