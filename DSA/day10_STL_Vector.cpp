#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*
    vector<int> v;

    vector<int> a(5,1);

    // copy one vector from another vector
    vector<int> copy(a);

    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;
    cout<<"Front -> "<<v.front()<<endl;
    cout<<"Back -> "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size -> "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size -> "<<v.size()<<endl;

    cout<<"vector a -> ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"vector copy -> ";
    for(int i:copy){
        cout<<i<<" ";
    }cout<<endl;
    */

    vector<int> nums;
    
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    cout<<"vector nums -> ";
    for(int i:nums){
        cout<<i<<" ";
    }cout<<endl;

    
    vector<int> x = { 1, 2, 1 };
    vector<int> y(x);
 
    // 1. Copy constructor + vector::inser
    x.insert(x.end(), y.begin(), y.end());
    cout<<"vector x -> ";
    for(int i:x){
        cout<<i<<" ";
    }cout<<endl;
    
    
}