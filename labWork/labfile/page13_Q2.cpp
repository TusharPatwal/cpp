// Write a Program to overload Binary Operator(-) using the Friend Function

#include <iostream>
using namespace std;

class Complex {
public:
  int real;
  int imag;

  Complex(int real, int imag) : real(real), imag(imag) {}

  friend Complex operator-(const Complex &lhs, const Complex &rhs) {
    // Overload the - operator to subtract two complex numbers
    return Complex(lhs.real - rhs.real, lhs.imag - rhs.imag);
  }

  void Print() const { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  Complex c3 = c1 - c2;
  c3.Print(); // Output: -2 + -2i

  return 0;
}