// Distance manipulation in feet and inches
#include<iostream>
using namespace std;

class Distance{
    private:
    float feet, inches;
    public:
    void init(float ft, float in){
        feet = ft;
        inches = in;
    }
    void read(){
        cout<<"Enter feet: ";cin>>feet;
        cout<<"Enter inches: ";cin>>inches;
    }

    void show(){
        cout<<feet<<"-"<<inches<<endl;
    }

    void add(Distance d1, Distance d2){
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if(inches >= 12.0){
            feet += 1.0;
            inches -= 12.0;
        }
    }
};

int main(){
    Distance d1,d2,d3;
    d2.init(11.0, 6.25);
    d1.read();
    cout<<"d1 = ";d1.show();
    cout<<"d2 = ";d2.show();
    d3.add(d1,d2);
    cout<<"d1 + d2 = ";d3.show();
}