#include<iostream>
#include<vector>
using namespace std;

int main(){
    //for loop in vector
    vector<int> v;
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}