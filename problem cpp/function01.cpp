#include<bits/stdc++.h>
using namespace std;

// int add(int num1, int num2){
//     return num1+num2;
// }

int add(int num1, int num2, int num3){
    return num1+num2+num3;
}

float add(float num1, float num2){
    float sum = num1+num2;
    return sum;
}

int main(){
    // cout << add(1,2) << endl;
    // cout << add(1,2,3) << endl;
    cout << add(1.2,3.2) << endl;  
    return 0;
}