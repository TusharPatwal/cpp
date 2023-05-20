#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 7, 18, 9, 11};
    int find = 0;
    int ans = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == find)
        {
            ans = i;
        }
    }
    cout << ans;
}