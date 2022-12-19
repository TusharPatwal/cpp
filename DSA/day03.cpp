#include<iostream>
using namespace std;

int main(){

    // bitwise operator
    /*
    int a = 4, b = 6;
    cout<< (a&b)<<endl; // and operator(symbol: &)
    cout<< (a|b)<<endl; // or operator(symbol: |)
    cout<<~a<<endl; // not operator(symbol: ~)
    cout<< (a^b)<<endl; // xor operator(symbol: ^)
    */


    /*
    // left shift operator(symbol: <<)
    int x = 4, y = 6;
    cout<<(x<<1)<<endl;
    // right shift operator(symmbol: >>)
    cout<<(y>>1)<<endl;
    */


    /*
    // pre/post - increment/decrement
    int i = 7;
    cout<<(++i)<<endl; // pre increment
    cout<<(i++)<<endl; // post increment
    cout<<(--i)<<endl; // pre decrement
    cout<<(i--)<<endl; // post decrement
    */


    // for loop
    /*
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        cout<< i << " "; 
    }
    */

    // sum of 1 to n using for loop
    /*
    int n, sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout<<sum<<endl;
    */


    // fibonacci series using for loop
    /*
    int n, i3;
    cin>>n;
    int i1 = 0, i2 = 1;
    cout<<i1<<" "<<i2<<" ";
    for(int i = 1; i<=n; i++){
        i3 = i1+i2;
        i1 = i2;
        i2 = i3;
        cout<<i3<<" "; 
    }
    */

    // prime number using for loop
    /*
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i<n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }   
    }

    if(isPrime){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
    */


    // continue
    /*
    for(int i = 1; i<6; i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    */


    

}