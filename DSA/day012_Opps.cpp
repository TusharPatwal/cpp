#include <iostream>
using namespace std;

class print {
public:
  void printf() { cout << "First class program." << endl; }
};

class student {
public:
  int roll_no;
  string name[20];

  void getdata(int roll_no, string name) {
    this->roll_no = roll_no;
    name = name;
  }
  void outdata() {
    cout << "Roll no = " << roll_no << endl;
    cout << "Name = " << name << endl;
  }
};

class rect {
public:
  int length, breadth;

  void setdata(int i, int j) {
    length = i;
    breadth = j;
  }
  int area() { return (length * breadth); }
};

int main() {
  print obj;

  obj.printf();

  student obj1;
  obj1.getdata(98, "tushar");
  obj1.outdata();

  rect obj2;
  int x, y;
  cout<<"Enter the value of x and y: "<<endl;  
  cin >> x >> y;
  obj2.setdata(x, y);

  cout<<"Area of rectangle is: "<<obj2.area()<<endl;
}