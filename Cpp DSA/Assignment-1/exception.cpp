#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Tnter two numbers ";
    cin>>a>>b;

    try{
        if(b==0)
        throw b;
        else{
            c = a/b;
            cout<<"Result "<<c;
        }
    }
    catch(int x){
        cout<<"can't divide by "<<x;
    }
}