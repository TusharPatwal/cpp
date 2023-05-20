// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int answer = 0;
//     int power = 1;
//     while(n>0){
//         int parityDigit = n%2;
//         answer += parityDigit*power;
//         power *= 10;
//         n /= 2;
//     }
//     cout<<answer<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int answer = 0;
    int i = 0;
    while(n!=0){
        int bit = n & 1;
        answer = (bit * pow(10, i))+answer;
        n = n >> 1;
        i++;
    }
    cout<<answer<<endl;
    return 0;
}