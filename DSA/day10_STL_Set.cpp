#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(0);s.insert(1);s.insert(2);s.insert(3);s.insert(5);s.insert(6);s.insert(7);

    cout<<"Print s->";
    for(int i:s){
        cout<<i<<" "; 
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    cout<<"Print s->";
    for(int i:s){
        cout<<i<<" "; 
    }cout<<endl;    

    // work of count function is to check that element is present or not.
    cout<<"5 is present or not -> "<<s.count(5)<<endl;
    cout<<"7 is present or not -> "<<s.count(7)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
}