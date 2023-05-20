#include<bits/stdc++.h>
using namespace std;

int add(int a, int b = 4, int c = 9){
    return (a+b+c);
}

int main (){
    cout << add(1)<<endl;
    cout << add(1,2)<<endl;
    cout << add(1,5,2)<<endl;

    return 0;
}