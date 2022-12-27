#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(4);
    l.push_back(5);

    cout<<"Print l -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    cout<<"Print l -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list l -> "<<l.size()<<endl;
    
    l.push_back(3);l.push_back(6);l.push_back(3);l.push_back(7);

    cout<<"Print l -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();

    cout<<"after pop back "<<endl;
    cout<<"Print l -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_front();
    cout<<"after pop front "<<endl;
    cout<<"Print l -> ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;cout<<endl;

    list<int> l1(5, 99);
    cout<<"Print l1 -> ";
    for(int i:l1){
        cout<<i<<" ";
    }cout<<endl;

    list<int> copy(l);
    cout<<"Print copy list -> ";
    for(int i:copy){
        cout<<i<<" ";
    }cout<<endl;
}