#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,7,18,9,11,45,43,56};

    int max = arr[0];
    for(int i = 1; i<8; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}