// Create a class employee which have name, age and address of employee, include
// functions Getdata() and showdata(). Getdata() takes the input from the user,
// showdata() display the data

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
  string name;
  int age;
  string address;

  void Getdata() {
    cout << "Enter the employee's name: ";
    getline(cin, name);
    cout << "Enter the employee's age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the employee's address: ";
    getline(cin, address);
  }

  void Showdata() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
  }
};

int main() {
  Employee emp;
  emp.Getdata();
  emp.Showdata();
}
