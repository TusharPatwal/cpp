// 2 Write a Program to check whether a number is prime or not, using classes

#include <iostream>
using namespace std;

class isPrime {
public:
  int n;
  int prime(int n) {
    if (n == 0 || n == 1) {
      return 0;
    } else {
      for (int i = 2; i < n; i++) {
        if (n % i == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
};

int main() {
  isPrime obj;
  int n;
  cin >> n;
  int m = obj.prime(n);
  if (m == 1) {
    cout << n << " is a prime number" << endl;
  } else {
    cout << n << " is not a prime number" << endl;
  }
}