// Find the last occurrence of an element x in a given vector
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

    int occurrence = -1;
    for(int i = 0; i < v.size(); i++){
        if (v[i] == x){
            occurrence = i;
        }
    }
    int o;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            o = i;
            break;
        }
    }
    cout<<o<<endl;
    cout << occurence;
    return 0;
}