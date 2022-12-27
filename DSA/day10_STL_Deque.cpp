#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1); // for inserting element in array
    d.push_front(2); // for inserting element in front of array
    
    d.push_back(3);d.push_back(4);d.push_back(5);
    cout<<"Print d -> ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back(); // remove element in array from back
    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Print 1st index element -> "<<d.at(1)<<endl;

    cout<<"Front -> "<<d.front()<<endl;
    cout<<"Back -> "<<d.back()<<endl;

    cout<<"Empty or not -> "<<d.empty()<<endl;

    deque<int> d1;
    d1.push_back(1);d1.push_back(2);d1.push_back(3);d1.push_back(4);d1.push_back(5);
    cout<<"Print d1 -> ";
    for(int i:d1){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before erase -> "<<d1.size()<<endl;
    d1.erase(d1.begin(),d1.begin()+2);
    cout<<"After erase -> "<<d1.size()<<endl;
    cout<<"Print d1 -> ";
    for(int i:d1){
        cout<<i<<" ";
    }cout<<endl;


}