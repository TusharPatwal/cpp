#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1; 
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s = mid + 1; 
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[14] = {1,2,3,3,3,3,3,3,3,3,3,3,3,5};

    cout<<"First occurrence of 3 is at Index: "<<firstOcc(arr, 14, 3)<<endl;
    cout<<"First occurrence of 6 is at Index: "<<firstOcc(arr, 14, 6)<<endl;
    cout<<"Last occurrence of 3 is at Index: "<<lastOcc(arr, 14, 3)<<endl;
    cout<<"Last occurrence of 6 is at Index: "<<lastOcc(arr, 14, 6)<<endl;

}
