// date class with member functions defined outside as inline
#include<bits/stdc++.h>
using namespace std;

class date{
    private:
    int date, month, year;

    public:
    void setdata(int d, int m, int y);
    void outdata();
};

inline void date :: setdata(int d, int m, int y){
    date = d;
    month = m;
    year = y;
}
inline void date :: outdata(){
    cout<<date<<"-"<<month<<"-"<<year<<endl;
}

int main(){
    date o;
    o.setdata(19 , 7, 2002);
    o.outdata();
}