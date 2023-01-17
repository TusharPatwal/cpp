#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int roll_no;
    string name;

    void setdata(int roll, string n){
        roll_no = roll;
        name = n;
    }
    void outdata(){
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    student o;
    o.setdata(20,"Tushar");
    o.outdata();
    o.setdata(98,"Tushar Patwal");
    o.outdata();

}