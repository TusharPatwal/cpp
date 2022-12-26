#include<iostream>
using namespace std;

// sort 0 1

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void sortOne(int arr[], int n){
    int left = 0, right = n-1;
    int s = 1;
    while(left<right){
        cout<<"Step "<<s++<<endl;
        printArray(arr, 8);
        cout<<endl;
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right)
        swap(arr[left],arr[right]);
        left++;
        right--;
        
    }
}

int main(){
    int arr[8] = {1,0,0,1,1,0,0,1};
    sortOne(arr,8);
    printArray(arr,8);


}



/*
// find duplicate
int findDubles(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,3};
    cout<<findDubles(arr, 5);
}
*/