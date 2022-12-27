// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            mid+1;
        }
        else{
            mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    // Write C++ code here
    int arr[6] = {1,3,2,5,6,8};
    cout<<binarySearch(arr, 6, 5);
    return 0;
}