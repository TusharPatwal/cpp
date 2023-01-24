#include<iostream>
using namespace std;

float division(int x, int y){
    if(y==0){
        throw "Attempted to divide by zero";
    }
    return x/y;
}

int main(){
    int i = 25, j = 0, k = 5;
    try{
        cout<<division(i,j)<<endl;
        cout<<division(i,k)<<endl;
    }
    catch (const char* e){
        cerr<<e<<endl;
    }
}