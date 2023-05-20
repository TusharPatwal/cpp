#include<iostream>
using namespace std;

int main(){

    int num1 = 1, num2 = 2, swap;
    cout << "The value of num1 is " << num1 << endl;
    cout << "The value of num2 is " << num2 << endl;
    
    swap = num1;
    num1 = num2;
    num2 = swap;

    cout << "The value of num1 is " << num1 << endl;
    cout << "The value of num2 is " << num2 << endl;

    return 0;
}