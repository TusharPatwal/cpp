// date class with member functions defined inside a class

#include<bits/stdc++.h>
using namespace std;

class date{
    public:
    int date,month,year;

    void setdata(int d, int m, int y){
        date = d;
        month = m;
        year = y;
    }
    void outdata(){
        cout<<date<<"-"<<month<<"-"<<year<<endl;
    }
};

int main(){
    date o;
    o.setdata(8,10,2002);
    o.outdata();
}