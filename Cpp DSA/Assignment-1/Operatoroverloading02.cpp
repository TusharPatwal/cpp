#include<iostream>
using namespace std;

class increase{
    private:
    int val;

    public:
    increase(int a){
        val = a;
    }

    void operator ++(){
        val += 5;
    }
    void print(){
        cout<<"Value is : "<<val<<endl;
    }
};

int main(){
    increase inc(100);
    ++inc;
    inc.print();
}