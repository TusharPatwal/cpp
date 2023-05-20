// Rotate the given array 'a' by k steps, where k in non-negative. Note: K can be greater than n as well where n is the size of array 'a'.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;
    k=k%5;

    int ansArr[n];
    int j = 0;

    for(int i = n-k; i<n; i++){
        ansArr[j++]=arr[i];
    }
    for(int i = 0; i<=k; i++){
        ansArr[j++]=arr[i];
    }
    for(int i = 0; i<n; i++){
        cout<<ansArr[i]<<" ";
    }
    cout<<endl;
}