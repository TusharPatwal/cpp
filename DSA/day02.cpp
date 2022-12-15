// looping statements
#include<iostream>
using namespace std;
int main(){
    /* use of while loop
    int i = 1,n;
    cin>>n;
    while(i<=n){
        cout<< i<< " ";
        i++;
    }*/


    // sum from 1 to n using while loop
    /*
    int i = 1, n ,sum = 0;
    cin>>n;
    while (i<=n){
        sum += i;
        i++;
    }
    cout<<"Value of sum is: "<<sum<<endl;
    */


    // sum of all even numbers from one to n
    /*
    int i = 0, n, sum = 0;
    cin>>n;
    while (i<=n){
        if(i%2==0){
            sum += i;
        }
        i++;
    }
    cout<<"Sum of even numbers: "<< sum << endl;
    */


    // fahrenheit to celsius
    /*
    int f;
    float c;
    cout<<"Value in fahrenheit: "<<endl;
    cin>>f;
    c = ((f-32)*.555556);
    cout<<"Value in celsius: "<< c << endl;
    */

    // prime number
    int num = 2, n, count=0;
    cin >> n;
    while(num<n){    
        if(n%num==0){
            continue;
        }
        else{
            count++;
        }
        num++;
    }
    if(count == 0){
        cout<<"Prime";
    }
    else{
        cout<<"Not a prime";

    }
    


}