#include<iostream>
using namespace std;

int main(){
    /*
    int num = 3;

    switch (num){
    case 1: cout<<"First"<<endl;
            break;
    case 2: cout<<"Second"<<endl;
            break;
    default: cout<<"Its a default case"<<endl;
            break;
    }
    */


    // mini calculator
    /*
    int a, b;
    cout<<"Enter the value of a: ";cin>>a;
    cout<<"Enter the value of b: ";cin>>b;
    char op;
    cout<<"Enter the given operator(+,-,*,/,%): ";cin>>op;

    switch(op){
        case '+':
        cout<<"a+b = "<<a+b<<endl;
        break;
        case '-':
        cout<<"a-b = "<<a-b<<endl;
        break;
        case '*':
        cout<<"a*b = "<<a*b<<endl;
        break;
        case '/':
        cout<<"a/b = "<<a/b<<endl;
        break;
        case '%':
        cout<<"a%b = "<<a%b<<endl;
        break;
        default:
        cout<<"Enter the correct operator";
        break;
    }
    */


    // home work
    // break it into notes of 100, 50, 20, 1 using switch case

    
    int amount = 1330;
    int a = 1330/100;
    int a1 =  a*100;
    amount = amount - a1;
    int b = amount/50;
    int b1 =  b*50;
    amount = amount - b1;
    int c = amount/20;
    int c1 =  c*20;
    amount = amount - c1;
    int d = amount/1;
    int d1 =  d*1;
    amount = amount - d1;

    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
//     cout<<amount<<endl;    

}