#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);v.push_back(2);
    v.push_back(3);v.push_back(4);
    v.push_back(5);

    cout<<"Find 5 ->"<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Find 7 ->"<<binary_search(v.begin(),v.end(),7)<<endl;

    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;


    int a = 5, b = 4;
    cout<<"Max in a & b -> "<<max(a,b)<<endl;

    cout<<"Min in a & b -> "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a ->"<<a<<endl;
    cout<<"b ->"<<b<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"String s -> "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate -> "<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting -> ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}