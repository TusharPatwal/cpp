#include<iostream>
#include<math.h>
using namespace std;

int a_b(int n){
    int i = 0, ans = 0;
    while(n!=0){
        int digit = n&1;

        ans = (digit * pow(10,i))+ ans;

        n = n>>1;
        i++;
    }
    return ans;
}

// void fibonnaci(int n){
//     int a1 = 0;
//     int a2 = 1;
//     cout<<a1<<" "<<a2<<" ";
//     for(int i=1; i<=n; i++){
//         int a3 = a1+a2;
//         a1 = a2;
//         a2 = a3;
//         cout<<a3<<" ";
//     }
// }
int len(int n){
    int len = 1;
    if (n != 0) {
        for (len = 0; n > 0; len++) {
            n = n / 10;
    }
    }
    return len;
}
int main(){
    // int n;
    // cin>>n;
    // fibonnaci(n);
    int a, b;
    cin>>a>>b;
    a = a_b(a);
    b = a_b(b);
    cout<<a<<endl<<b<<endl;
    
}



/*
int ap(int n){
    int ans = (n*3)+7;
    return ans;
}

int main(){
    int n;cin>>n;
    cout<<ap(n);
}
*/


//0 -> not a prime number
//1 -> prime number


/*
// function for prime function
int isPrime(int n){
    // bool prime = false;
    if(n == 0 || n == 1){
        return 0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int n; cin>>n;
    int ans = isPrime(n);
    if (ans == 0){
        cout<<n<<" is not a prime number"<<endl;
    }
    else{
        cout<<n<<" is a prime number"<<endl;
    }
}
*/


/*
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
*/



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