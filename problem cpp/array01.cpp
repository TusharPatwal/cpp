#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // // cout<<"Elements in array: "<<sizeof(arr)/sizeof(arr[1])<<endl;
    // int size = sizeof(arr) / sizeof(arr[1]);

    // traversing in array

//     // for loop
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     // for each loop
//     for(int ele:arr){
//         cout<<ele<<endl;
//     }

//     // while loop
//     int i = 0;
//     while (i<size)
//     {
//         cout<<arr[i]<<endl;
//         i++;
//    }

    // Taking input in array 
    int arr[8];
    for(int i = 0; i<8; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<8; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}