// Find the maximum element in an array
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};

  auto max_it = max_element(begin(numbers), end(numbers));
  cout << "The maximum value in the array is: " << *max_it << '\n';

  return 0;
}
