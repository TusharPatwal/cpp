#include <iostream>
using namespace std;

namespace first_space {
    void func() { 
        cout << "Inside first_space" << endl; 
    }
} 
using namespace first_space;

int main() {
  func();
}
