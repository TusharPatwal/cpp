#include<iostream>
using namespace std;

class print{
    public:
    void printf(){
        cout<<"First class program."<<endl;
    }
};

class student{
    public:
    int roll_no;
    string name[20];

    void getdata(int roll_no, string name){
        this-> roll_no = roll_no;
        name = name;
    }
    void outdata(){
        cout<<"Roll no = "<<roll_no<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

int main(){
    print obj;

    obj.printf();

    student obj1;
    obj1.getdata(98,"tushar");
    obj1.outdata();
}