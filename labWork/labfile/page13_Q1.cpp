// Write a Program to overload Unary Operators

#include <iostream>
using namespace std;

class Counter {
public:
  Counter(int start) : count(start) {}

  // Overloaded ++ operator
  Counter operator++() { return Counter(++count); }

  // Overloaded -- operator
  Counter operator--() { return Counter(--count); }

  // Member function to return the current count
  int GetCount() const { return count; }

private:
  int count;
};

int main() {
  Counter c(91);
  cout << "Count: " << c.GetCount() << endl;

  // Increment the counter
  ++c;
  cout << "Count: " << c.GetCount() << endl;

  // Decrement the counter
  --c;
  cout << "Count: " << c.GetCount() << endl;

  return 0;
}
