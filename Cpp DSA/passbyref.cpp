#include<bits/stdc++.h>
using namespace std;

void changevalue(int &z, int &y){
    z = 100;
    y = 231;
}
int main(){
    int a = 2;
    int c = 3;
    changevalue(a,c);
    cout<<a<<endl<<c<<endl;
    return 0;
}