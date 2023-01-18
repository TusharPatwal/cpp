// a member function accessing another member function
#include<bits/stdc++.h>
using namespace std;

class maximum{
    private:
    int num1, num2;
    public:
    void read(){
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
    }
    int max(){
        if(num1>num2){
            return num1;
        }
        else{
            return num2;
        }
    }

    void showmax(){
        cout<<"Maximum: "<<max()<<endl;
    }
};

int main(){
    maximum o;
    o.read();
    o.showmax();
}