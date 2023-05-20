#include<bits/stdc++.h>
using namespace std;

int secondMax(int arr[], int size){
    int max=INT_MIN, sMax=INT16_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i = 0; i<size; i++){
        if(arr[i]>sMax && arr[i]!=max){
            sMax=arr[i];
        }
    }
    return sMax;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,10,9};
    int size = 12;
    // int max=INT_MIN, secondMax=INT16_MIN;
    // for(int i = 0; i < size; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }
    // cout<<max<<endl;
    // for(int i = 0; i<size; i++){
    //     if(arr[i]>secondMax && arr[i]!=max){
    //         secondMax=arr[i];
    //     }
    // }
    // cout<<"Second largest element in array is "<< secondMax<<endl;
    cout<<secondMax(arr,size);
}