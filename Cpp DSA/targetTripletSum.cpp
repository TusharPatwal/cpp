// Count the number of triplets whose sum is equal to the given value x.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,4,0,6};
    int targetTripletSum = 5;
    int size = 6;

    for (int x = 0; x < size; x++){
        for(int y = x+1; y < size; y++){
            for(int z = y+1; z < size; z++){
                if(arr[x]+arr[y]+arr[z]==targetTripletSum){
                    cout<<arr[x]<< " " <<arr[y]<< " "<<arr[z]<<endl;
                }
            }
        }
    }    
}