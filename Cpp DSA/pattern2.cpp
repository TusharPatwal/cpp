// ******
// *    *
// *    *
// ******

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    for(int i = 1; i <= x; i++){
        for(int j = 1; j<=y; j++){
            if(i==1 || j == 1 || i == x || j == y){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}