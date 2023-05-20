#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,a;
    cin>>n;

    int sum = 0;
    while(n>0){
        a = n%10;
        n /= 10;
        sum += a;
    }
    cout<<sum;
    return 0;
}