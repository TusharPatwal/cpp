#include<iostream>
using namespace std;

class student{

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};

int main(){
    student obj1;

    cout << "Hello, world!"<<endl;
    return 0;
}