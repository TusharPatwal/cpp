// Vector class with array dynamically allocated
#include<bits/stdc++.h>
using namespace std;

class Vector{
    public:
    int *v;
    int sz;

    void VectorSize(int size){
        sz = size;
        v = new int[size];
    }
    void read();
    void showSum();
    void release(){
        delete v;
    }
};

void Vector::read(){
    for(int i = 0; i<sz; i++){
        cout<<"Enter Vector["<<i<<"]?";
        cin >> v[i]; 
    }
}

void Vector :: showSum(){
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum += v[i];
    }
    cout<< "Vector sum = "<<sum;
}

int main(){
    Vector v1;
    int count;
    cout<<"How many elements are there in vector: ";
    cin>>count;
    v1.VectorSize(count);
    v1.read();
    v1.showSum();
    v1.release();

}