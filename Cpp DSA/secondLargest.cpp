// Find the second largest element in the given array.
#include<bits/stdc++.h>
using namespace std;

int largestElementIndex(int arr[], int size){
    int max = INT16_MIN;
    int maxindex = -1;
    for(int i = 0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){
    int arr[] = {2,3,5,9,10,1,10,5,23,43,12,45};
    int size = 12;
    int indexOfLargest = largestElementIndex(arr, size);
    // arr[indexOfLargest]=-1;

    int largElement = arr[indexOfLargest];
    for(int i = 0; i<size; i++){
        if(largElement==arr[i]){
            arr[i] = -1;
        }
    }
    int indexOfSecondLargest = largestElementIndex(arr, size);
    cout<<arr[indexOfSecondLargest]<<endl;
}