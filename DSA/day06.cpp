#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int ans = (factorial(n)/(factorial(r)*factorial(n-r)));
    return ans;
}


int main(){
    // int n; cin>>n;
    cout<<nCr(13,10);
}

/*
// Odd or Even
// 1 -> even
// 0 -> odd
int isOdd(int a){
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){
    int n;cin>>n;
    cout<<isOdd(n);
}
*/