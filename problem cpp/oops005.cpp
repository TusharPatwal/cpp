// Static Data Members & Methods in C++ OOPS
#include<iostream>
using namespace std;

class employee{
    
    int id;
    static int count;
    
    public:
    void setdata(void){
        cout<<"Enter the employee ID: ";
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of employee is "<<id<<" and count is "<<count<<endl;
    }

    static void getCount(void){
        cout<<"The value of count: "<<count<<endl;
    }
};

// count is the static data member of class employee
int employee :: count=0; // default value of static data member is 0. You can pass value of static data member outside the class

int main(){
    employee tushar;
    tushar.setdata();
    tushar.getdata();
    employee::getCount();
    
    tushar.setdata();
    tushar.getdata();
    employee::getCount();

    tushar.setdata();
    tushar.getdata();
    employee::getCount();
}