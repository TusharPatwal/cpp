#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid+1;
        } 
        return mid;
    }
}

int main(){
    int arr[5] = {1,2,3,3,5};
    cout<<"First time 3 is present at ->"<<firstOcc(arr, 5, 1);
}