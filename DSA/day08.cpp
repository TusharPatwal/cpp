#include<iostream>
using namespace std;

// reverse an array
void printArray(int arr[], int n){
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;end--;
    } 
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}


/*
int arraySum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum; 
}
int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    cout<< arraySum(arr, 5);
}
*/


/*
void update(int arr[], int n){
    cout<<"Inside the update function."<<endl;
    arr[0] = 23;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"Going back to the main function"<<endl;
    cout<<endl;
}

int main(){
    int arr[3] = {1,2,3};
    update(arr,3);
    // printing the array
    cout<<"Printing the array in main function"<<endl;
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"Last"<<endl;
}
*/