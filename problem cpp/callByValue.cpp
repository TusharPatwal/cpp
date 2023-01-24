// Call by value in C++
#include<iostream>
using namespace std;

void change(int data){
    data = 5;
}
int main(){
    int data = 3;
    change(data);
    cout<<"Value of data is: "<<data<<endl;
}