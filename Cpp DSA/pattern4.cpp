// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    for(int i = 1; i <= x; i++){
        for(int j = 0; j<=x-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}