#include<iostream>
using namespace std;

class copy1{
    int a;
    public:
    copy1(){
        a = 0;
    }
    copy1(int num){
        a = num;
    }
    void display(){
        cout<<"The number is "<<a<<endl;
    }
    copy1(copy1 &obj){
        a = obj.a;
    }
};

int main(){
    copy1 x, y, z(45);
    x.display();
    y.display();
    z.display();
    
    copy1 a1(z);
    a1.display();
}