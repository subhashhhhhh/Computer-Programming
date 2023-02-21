#include <iostream>
using namespace std;

class MyClass {
  private:
    int x;
  public:
    void setX(int val) {
      x = val;
    }
    int getX() {
      return x;
    }
};

MyClass functionByValue(MyClass obj) {
  obj.setX(obj.getX() * 2);
  return obj;
}

int main() {
  MyClass myObj;
  myObj.setX(10);
  cout << "Original value of x: " << myObj.getX() << endl;
  
  MyClass returnedObj = functionByValue(myObj);
  cout << "Value of x after function call: " << returnedObj.getX() << endl;
  
  return 0;
}