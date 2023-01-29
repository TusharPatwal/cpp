// nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary {
  string s;

public:
  void read(void);
  void checkBin(void);
  void onesCompliment(void);
  void display(void);
};

void binary ::read(void) {
  cout << "Enter a binary number: ";
  cin >> s;
}

void binary ::checkBin(void) {
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) != '0' && s.at(i) != '1') {
      cout << "Incorrect binary format" << endl;
      exit(0);
    }
  }
}

void binary ::onesCompliment(void) {
    checkBin(); // nesting member function in other member function
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) == '0') {
      s.at(i) = '1';
    } else if (s.at(i) == '1') {
      s.at(i) = '0';
    }
  }
}

void binary ::display(void) {
  for (int i = 0; i < s.length(); i++) {
    cout << s.at(i);
  }
}
int main() {
  binary num1;
  num1.read();
//   num1.checkBin();

  num1.onesCompliment();
  num1.display();
}