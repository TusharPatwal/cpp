// class hiding vehicle details 
#include<iostream>
using namespace std;
class part{
    private:
    int modelNum, partNum;
    float cost;

    public:
    void setdata(int m, int p, float c){
        modelNum = m;
        partNum = p;
        cost = c;
    }

    void outdata(){
        cout<<"Model: "<<modelNum<<endl;
        cout<<"Number: "<<partNum<<endl;
        cout<<"Cost: "<<cost<<endl;
    }
};
int main(){
    part p1,p2;
    p1.setdata(2002, 36, 5000.09);
    p2.setdata(2002, 225, 3243.89);

    cout<<"First part details ... "<<endl;
    p1.outdata();
    cout<<"Second part details ... "<<endl;
    p2.outdata();
}