#include<iostream>
using namespace std;
class com
{
private:
    int real, img;
public:
    com(){};
    com(int a, int b){
        real = a;
        img = b;
    }
    void operator +(com c);
};

void com :: operator+(com c){
    com temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    cout<<"Real sum is : "<<temp.real<<endl;
    cout<<"Img sum is : "<<temp.img<<endl; 
}

int main(){
    com c1(10,20);
    com c2(20,30);
    c1+c2;
}


