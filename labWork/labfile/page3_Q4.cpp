// WAP to demonstrate reference variable
#include <iostream>

using namespace std;

// Function to swap two integers using reference variables
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Call the swap function using reference variables
    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
