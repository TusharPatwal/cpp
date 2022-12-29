#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Tushar";
    m[2] = "Singh";

    m.insert({5,"Raju"});

    m[3] = "Patwal";

    cout<<"Before erase -> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 3 -> "<<m.count(3)<<endl;
    m.erase(5);
    cout<<"After erase -> "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it  = m.find(3);

    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}