#include<bits/stdc++.h>
using namespace std;
class house{
private:
    int length, breadth;

public:
    void setData(int x, int y){
        length = x, breadth = y; 
    }

    void area(){
        cout<<length*breadth<<endl;
    }
};
int main(){
    house h1, h2;
    h1.setData(124,234);
    h1.area();

    h2.setData(3,5);
    h2.area();

    return 0;
}