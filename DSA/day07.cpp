#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max1 = INT_MIN;
    for(int i = 0; i<n; i++){

        max1 = max(max1, arr[i]);
        //          or 
        // if(arr[i] > max)
        //     max = arr[i];
    }
    return max1;
}

int getMin(int arr[], int n){
    int min1 = INT_MAX;
    for(int i = 0; i<n; i++){

        min1 = min(min1, arr[i]);
        //          or
        // if(arr[i] < min)
        //     min = arr[i];
    }
    return min1;
}

int main(){
    int size;cin>>size; // bad practice 

    int arr[100];
    // taking input in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Max value is "<< getMax(arr, size)<<endl;
    cout<<"Min value is "<< getMin(arr,size)<<endl;



    int arr[10];
    int a = 8;
    for(int i = 0; i<10; i++){
        arr[i] = a;
    }
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}