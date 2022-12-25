#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i = 0; i<10; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
    // Check wheather 1 is present in it or not.
    cout<< "enter the key: "; int key;cin>>key;
    

    bool found = search(arr,10,key);
    
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not persent"<<endl;
    }

}