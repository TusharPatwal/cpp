// WAP to make a calculator for arithmetic operators

#include <iostream>
using namespace std;

int main() {
  double num1, num2;
  char op;

  cout << "Enter a number: ";
  cin >> num1;
  cout << "Enter another number: ";
  cin >> num2;
  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  double result;
  if (op == '+') {
    result = num1 + num2;
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '*') {
    result = num1 * num2;
  } else if (op == '/') {
    result = num1 / num2;
  } else {
    cout << "Invalid operator!";
    return 1;
  }

  cout << num1 << " " << op << " " << num2 << " = " << result;
}