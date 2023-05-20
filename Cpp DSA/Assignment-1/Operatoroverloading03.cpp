#include<iostream>
using namespace std;

class c{
    private:
    int real, img;

    public:
    void input(){
        cout<<"Enter the value of real and imaginary: ";
        cin>>real>>img;
    }

    c operator +(c o){
        c temp;
        temp.real = real + o.real;
        temp.img = img + o.img;
        return temp;
    }

    void print(){
        cout<<"Output is: "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    c c1,c2, result;
    c1.input();
    c2.input();

    result = c1 + c2;
    result.print();
}