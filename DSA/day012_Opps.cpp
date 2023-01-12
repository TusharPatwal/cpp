#include<iostream>
using namespace std;

class print{
    public:
    void printf(){
        cout<<"First class program."<<endl;
    }
};

int main(){
    print obj;

    obj.printf();
}