// Static Data Members & Methods in C++ OOPS
#include<iostream>
using namespace std;

class employee{
    
    int id;
    int count;
    
    public:
    void setdata(void){
        cout<<"Enter the employee ID: ";
        cin>>id;
    }
    void getdata(void){
        cout<<id;
    }
};

int main(){
    employee tushar;
    tushar.setdata();
    tushar.getdata();
}
