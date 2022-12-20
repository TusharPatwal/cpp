#include<iostream>
#include<math.h>
using namespace std;

int main(){

    // decimal to binary
    /*
    int n;
    cin>>n;
    int i = 0, ans = 0;
    while(n!=0){
        int digit = n&1;

        ans = (digit * pow(10,i))+ ans;

        n = n>>1;
        i++;
    }
    cout<<ans<<endl;
    */


    // binary to decimal
    /*
    int n;
    cin>>n;
    int i = 0, ans = 0;
    while(n!=0){
        int digit = n%10;

        if(digit==1){
            ans = ans + pow(2,i);
        }

        n /= 10;
        i++;
    }
    cout<<ans<<endl;
    */


    // negative decimal to binary
    /*
    long long int n;
    cin>>n;
    unsigned long long int i = 0, ans = 0;
    if(n<0){
        n = pow(2,16)+n;
    }
    // cout<<n<<endl;
    while(n){
        int lastbit = n&1;
        ans = (pow(10,i)+lastbit)+ans;
        n = n>>1;
        i++;
    }
    cout<<ans<<endl;
    */


    // reverse integer
    int n, ans;
    cin>>n;
    while(n>0){
        int digit = n%10;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                cout<<0<<endl;
                exit(0);
            }
        ans = ans*10 + digit;
        n /= 10;
    }
    cout<<ans<<endl;
}