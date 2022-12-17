// looping statements
#include <iostream>
using namespace std;
int main()
{
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
    int i, n;
    bool is_prime = true;

    cout << "Enter a number: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
        is_prime = false;
        break;
        }
    }

    if (is_prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
}