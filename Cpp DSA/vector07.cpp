// Find the difference between the sum of elements at even indices to the sum of indices at odd indices.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (array[i]%2==0)
        {
            oddSum+=i;
        }
        else{
            evenSum+=i;
        }
        
    }
    cout<<abs(oddSum-evenSum)<<endl;
}