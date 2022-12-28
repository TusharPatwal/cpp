#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("tushar");
    s.push("singh");
    s.push("patwal");

    cout<<"Top element -> "<<s.top()<<endl;
    
    s.pop();
    cout<<"Top element -> "<<s.top()<<endl;

    cout<<"Size of stack -> "<<s.size()<<endl;

    cout<<"Enpty or not -> "<<s.empty()<<endl;
}