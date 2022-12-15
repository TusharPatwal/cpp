// conditional statements
#include <iostream>
using namespace std;

int main()
{
    /*int a;
    cin >> a ;
    // cout<<"Value of n is: "<<n<<endl;
    if(a>0){
        cout<<"A is positive."<<endl;
    }
    else{
        cout<<"A is negative."<<endl;
    }*/
    /*
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"A is greater than b."<<endl;
    }
    else{
        cout<<"B is greater than a."<<endl;
    }*/

    /*int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "A is positive." << endl;
    }
    else if (a < 0)
    {
        cout << "A is negative." << endl;
    }
    else
    {
        cout << "A is 0" << endl;
    }*/
    
    char ch;
    cout<<"Enter the char: "<<endl;
    cin>>ch;
    if(ch>=97 && ch <= 122){
        cout<<"Lowercase"<<endl;
    }
    else if(ch>=65 && ch <= 90){
        cout<<"uppercase"<<endl;
    }
    else if(ch>=48 && ch <= 57){
        cout<<"Numeric"<<endl;
    }
}
