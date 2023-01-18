// data class with member functions defined outside the class body
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int date;
    int month;
    int year;

    void setdata(int d, int m, int y);
    void outdata();

};
void student::setdata(int d, int m, int y){
    date = d;
    month = m;
    year = y;
}
void student :: outdata(){
    cout<<date<<"-"<<month<<"-"<<year<<endl;
}
int main(){
    student o;
    o.setdata(8,10,2002);
    o.outdata();
}