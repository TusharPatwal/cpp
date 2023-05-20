#include<iostream>
using namespace std;

class c{
    int real, img;
    public:
    
    c(int a, int b){    
        real = a;
        img = b;   
    }

    c(int a){
        real = a;
        img = 0;
    }
    c (){
        real = 0;
        img = 0;
    }
    void print(){
        cout<<"the value is : "<< real <<" + "<<img<<"i"<<endl;
    }
};

int main(){
    c c1(10, 20);
    c1.print();
    c c2(10);
    c2.print();
}