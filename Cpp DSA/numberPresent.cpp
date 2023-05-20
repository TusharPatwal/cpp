// Given q queries, check if the given number is present in the array  or not. Note: Value of all the elements in the array is less than 10 to the power 5.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int querie = 23;
    int count = -1;
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        if (querie == arr[i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "Present in array.";
    }
    else
    {
        cout << " Not present in array.";
    }
}