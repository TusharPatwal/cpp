#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter a & b: " << endl;
    cin >> a >> b;
    cout << "a: " << a << endl << "b: " << b <<endl;

    c = a;
    a = b; 
    b = c;
    cout << "a: " << a << endl << "b: " << b <<endl;
    return 0;
}