// Call by reference in C++
#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int swap;
    swap = *x;
    *x = *y; 
    *y = swap;
}

int main(){
    int x = 500, y = 100;

    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;

    swap(&x, &y);
    cout<<"New Value of x is: "<<x<<endl;
    cout<<"New Value of y is: "<<y<<endl;
}