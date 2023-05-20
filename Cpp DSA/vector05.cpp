// Count the number of elements strictly greater than value x in vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the value of x: ";
    int x;
    cin >> x;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}