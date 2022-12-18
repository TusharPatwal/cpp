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

    // prime number using for loop
    /*
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
    */
 

    // prime number using while loop
    /*
    int n;
    cin>>n;
    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        else{
            cout<<"Prime number"<<endl;
        }
        i++;
    }
    */ 


    // Pattern using while loops
    // draw a 4*4 pattern using *
    /*
    int i=1,n;
    cin>>n;
    
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw numeric pattern usiing while loops
    /*
    int i=1,n;
    cin>>n;
    
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            cout<< i << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw numeric pattern using while loops
    /*
    int i = 1, n;
    cin>>n;
    while (i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw reverse numeric pattern using while loop
    /*
    int i = 1, n;
    cin>> n;
    while (i<=n){
        int j = 1;
        while (j<=n){
            cout<<(n-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

   
    // draw numeric pattern using while loops
    /*
    int i = 1, n, x =1;
    cin >> n;
    while (i<=n){
        int j = 1;
        while (j<=n){
            cout << x++ <<" " ;
            j++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw a right angle triangle pattern using while loops
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw a right angle triangle in numeric by while loops
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<i <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw a right angle triangle in numeric by while loops part-2
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<< j <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    // draw a right angle triangle in numeric by while loops part-3
    /*
    int i = 1, n, x = 1;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<  x++ <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    // draw a right angle triangle in numeric by while loops part-3(first method)
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j = 1;
        int x = i;
        while(j<=i){
            cout<<  x++ <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */
    

    // draw a right angle triangle in numeric by while loops part-3(second method)
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<  i+j-1 <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw right angle triangle in numric(backward) by while loops
    /*
    int i = 1, n;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<  (i-j+1) <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw right angle triangle in character by while loops(part-1)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< char(ch + i - 1) <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    // draw right angle triangle in character by while loops(part-2)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< char(ch + j - 1) <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    
    // draw right angle triangle in character by while loops(part-3)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            cout<< ch++<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */



    // draw right angle triangle in character by while loops(part-4)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            cout<< char(ch+i+j-2)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw right angle triangle in character by while loops(part-5)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        
        int j = 1;
        while(j<=i){
            cout<< char(ch+i-1) <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    // draw right angle triangle in character by while loops(part-6)
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        
        int j = 1;
        while(j<=i){
            cout<< ch++ <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    // draw right angle triangle in character by while loops(part-6)   
    /*
    int i = 1, n;
    cin>>n;
    char ch = 'A';
    while(i<=n){
        
        int j = 1;
        while(j<=i){
            cout<< char(ch+i+j-2) <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    
    // draw right angle triangle in character by while loops(part-7)
    /*
    int i = 1, n;
    cin >> n;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<char(ch+n-i+j-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    } 
    */


    // draw right angle triangle in character by while loops(part-7)
    /*
    int i = 1, n;
    cin >> n;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        char c = (ch+i-1);
        while(j<=n){
            cout<< c++ <<" ";
            j++;
        }
        cout<<endl;
        i++;
    } 
    */


    // draw right angle triangle in character by while loops(part-8)
    /*
    int n; 
    cin >> n;
    
    int i = 1;
    while(i<=n){

        //  print space
        int space = n-i;
        while(space){
            cout<<"  ";
            space--;
        }

        // print stars
        int j = 1;
        while(j<=i){
            cout<<"# ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw right angle triangle in character by while loops(part-9)
    /*
    int n, i = 1;
    cin>>n;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<" #";
            j++;
        }
        cout<<endl;
        i++;
    }
    */


    // draw right angle triangle by while loops(part-10)
    /*
    int n;
    cin>>n;
    
    int i = 1;
    while (i<=n){
        int space = i - 1;
        while (space){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=n - i + 1){
            cout<<"# ";
            j++;
        }
        cout<<endl;
        i++;        
    }
    */

    // draw right angle triangle by while loops(part-11)
    /*
    int n;
    cin>>n;
    
    int i = 1;
    while (i<=n){
        int space = i - 1;
        while (space){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=n - i + 1){
            cout<<i << " ";
            j++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw right angle triangle by while loops(part-12)
    /*
    int n;
    cin>>n;
    
    int i = 1;
    while (i<=n){
        int space = n - i;
        while (space){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<<i << " ";
            j++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw right angle triangle by while loops(part-13)
    /*
    int n;
    cin>>n;
    
    int i = 1;
    while (i<=n){
        int space = i-1;
        while (space){
            cout<<"  ";
            space--;
        }
        int x = i;
        int j = 1;
        while(j<=n-i+1){
            cout<< x++ << " ";
            j++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw right angle triangle by while loops(part-14)
    /*
    int n;
    cin>>n;
    int x = 1;
    int i = 1;
    while (i<=n){
        int space = n-i;
        while (space){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<< x++ << " ";
            j++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw right angle triangle by while loops(part-15)
    /*
    int i = 1, n;
    cin>>n;

    while (i<=n){
        int space = n-i;
        while (space){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout<< j << " ";
            j++;
        }
        int z = 1;
        while(z<=i-1){
            cout<< i-z << " ";
            z++;
        }
        cout<<endl;
        i++;        
    }
    */


    // draw right angle triangle by while loops(part-15)

    int i = 1, n;
    cin>>n;
     
    while (i<=n){
        int j = 1;
        int x = 1;
        int space = n-i+1;
        while (space){
            cout<< x++ <<" ";
            space--;
        }
        while(j<=i-1){
            cout<< "# ";
            j++;
        }
        
        int z = 1;
        while(z<=i-1){
            cout<< "# ";
            z++;
        }
        int y = 1;
        while(y<=n-i+1){
            int c = x--;
            cout<< c-1 <<" ";
            y++;
        }

        cout<<endl;
        i++;        
    }
}