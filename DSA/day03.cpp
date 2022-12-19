#include<iostream>
using namespace std;

int main(){

    // bitwise operator
    /*
    int a = 4, b = 6;
    cout<< (a&b)<<endl; // and operator(symbol: &)
    cout<< (a|b)<<endl; // or operator(symbol: |)
    cout<<~a<<endl; // not operator(symbol: ~)
    cout<< (a^b)<<endl; // xor operator(symbol: ^)
    */

    // left shift operator(symbol: <<)
    int x = 4, y = 6;
    cout<<(x<<1)<<endl;
    // right shift operator(symmbol: >>)
    cout<<(y>>1)<<endl;


    // pre/post - increment/decrement
    int i = 7;
    cout<<(++i)<<endl; // pre increment
    cout<<(i++)<<endl; // post increment
    cout<<(--i)<<endl; // pre decrement
    cout<<(i--)<<endl; // post decrement
    
}