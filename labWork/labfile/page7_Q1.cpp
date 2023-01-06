// Write a program to implement the concept of Single Inheritance?

#include <iostream>
using namespace std;

class base {
public:
  int n, m;
  void sum(int n, int m) { cout << n << " + " << m << " = " << n + m << endl; }
};

class derived : public base {
public:
};

int main() {
  derived obj;
  obj.sum(2, 4);
}