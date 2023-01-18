// data class with member functions defined outside the class body
#include<bits/stdc++.h>
using namespace std;

class date{
    public:
    int date;
    int month;
    int year;

    void setdata(int d, int m, int y);
    void outdata();

};
void date::setdata(int d, int m, int y){
    date = d;
    month = m;
    year = y;
}
void date :: outdata(){
    cout<<date<<"-"<<month<<"-"<<year<<endl;
}
int main(){
    date o;
    o.setdata(8,10,2002);
    o.outdata();
}