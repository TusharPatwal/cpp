#include<bits/stdc++.h>

using namespace std;

class a{
    public:
    int x = 9;
    int y = 99;
    static int z; 

    a(){
        cout<<"Hello, World a!"<<endl;
    }
    
    a(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    void print(){
        cout<<x*y<<endl;
    }
    static int random(){
        return z;
    }
};
int a::z = 31;  

class b: public a{
    public:
    b(){
        cout<<"Hello, world b!"<<endl;
    }
};

int main(){


    cout<<a::random()<<endl;




    // cout<<a::z<<endl;//call static keyword by class and scope resolution operator 
    // b o1;
    // cout<<o1.z<<endl;//call static keyword by object in class
    // o1.print();
    return 0;
}