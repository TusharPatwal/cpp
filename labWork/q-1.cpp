// wap to over load unary ++ operator(implement a complex number)

// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class complex {
    public:
    int real, img;
    complex (int x, int y){
        real = x;
        img = y;
    }
    void operator ++(){
        real+=1;
        img+=1;
    }
    void print(){
        cout<<"Real + img : "<<real<<" + i"<<img<<endl;
    }
    
};

int main() {
    complex obj1(9,3);

    ++obj1;

    obj1.print();
    return 0;
}
