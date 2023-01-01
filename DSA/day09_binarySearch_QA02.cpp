// find total number of occurence of an element in array
#include<iostream>
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

    int arr[7] = {1,2,3,3,3,3,3};
    int totalOcc = (lastOcc(arr,7,3)- firstOcc(arr,7,3))+1;
    cout<<"Total time 3 occur in arr: "<<totalOcc<<endl;

}