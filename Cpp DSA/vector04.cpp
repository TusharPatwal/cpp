// Count the number of occurrences of a particular element x in vector.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the value of x: ";
    int x;
    cin >> x;

    int sum = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            sum+=1;
        }
    }
    cout<<sum<<endl;

    return 0;
}