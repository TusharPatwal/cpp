#include<iostream>
using namespace std;
// condition of binary search:
// elements of array should be in monotonic function(either increasing order or decreasing order)
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        
        if (arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = binarySearch(even, 6, 12);
    cout<<"Intex of key: "<<index<<endl;
}