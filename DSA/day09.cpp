#include<iostream>
using namespace std;

// find duplicate
int findDubles(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,3};
    cout<<findDubles(arr, 5);
}