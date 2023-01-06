// Make an inline function to find the square of a number
#include <iostream>
using namespace std;

inline int square(int x) { return x * x; }

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  // Call the inline function
  int result = square(num);
  cout << "The square of " << num << " is: " << result << endl;
}